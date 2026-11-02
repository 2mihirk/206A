"""Functions to help with Jacobian calculations."""

import numpy as np

from visual_servoing import kin_func_skeleton #keep this because the lab repo doesn't know about hw2

from scipy.linalg import logm


# Pull the specific functions and variables from your HW2 file
from .kin_func_skeleton import (
    inverse_SE3, 
    R3_to_so3, 
    twist_to_SE3, 
    forward_kinematics, 
    se3_to_twist,
    
)





def adjoint(g):
    """Calculate the adjoint matrix of a rigid transformation.

    Args:
        g: NumPy array with shape ``(4, 4)`` representing a
            transformation in SE(3).

    Returns:
        NumPy array with shape ``(6, 6)`` representing ``Ad_g``.
    """
    R_mat = g[0:3, 0:3]
    p_vec = g[0:3, 3]
    p_skew = R3_to_so3(p_vec)
    
    top_half = np.hstack((R_mat, p_skew @ R_mat))
    bottom_half = np.hstack((np.zeros((3, 3)), R_mat))
    
    return np.vstack((top_half, bottom_half))


def adjoint_inv(g):
    """Calculate the inverse adjoint matrix of a rigid transformation.

    Args:
        g: NumPy array with shape ``(4, 4)`` representing a
            transformation in SE(3).

    Returns:
        NumPy array with shape ``(6, 6)`` representing ``Ad_g^{-1}``.
    """
    # Replaced manual block concatenation with exact mathematical inverse 
    # to guarantee numerical stability for the body_jacobian tests.
    return adjoint(inverse_SE3(g))




def spatial_jacobian(twists, theta):
    """Calculate the spatial manipulator Jacobian."""
    N = twists.shape[1]
    J = np.zeros((6, N))
    g_accum = np.eye(4)
    
    for i in range(N):
        J[:, i] = adjoint(g_accum) @ twists[:, i]
        g_i = twist_to_SE3(twists[:, i] * theta[i])
        g_accum = g_accum @ g_i
        
    return J


def body_jacobian(twists, theta, g_st0):
    """Calculate the body manipulator Jacobian."""
    g_st = forward_kinematics(twists, theta) @ g_st0
    J_s = spatial_jacobian(twists, theta)
    return adjoint_inv(g_st) @ J_s


def spatial_velocity(twists, theta, theta_dot):
    """Calculate the spatial end-effector velocity."""
    J_s = spatial_jacobian(twists, theta)
    return J_s @ theta_dot


def body_velocity(twists, theta, theta_dot, g_st0):
    """Calculate the body end-effector velocity."""
    J_b = body_jacobian(twists, theta, g_st0)
    return J_b @ theta_dot


def spatial_configuration_error(pose, desired_pose):
    """Calculate the spatial-frame transformation error."""
    # returns the desired pose
    return desired_pose @ inverse_SE3(pose)


def spatial_error_twist(error):
    """Convert a transformation error into an exponential-coordinate vector.

    Args:
        error: NumPy array with shape ``(4, 4)`` in SE(3), returned by
            ``spatial_configuration_error``. Assume its rotation angle is less than pi.

    Returns:
        NumPy array with shape ``(6,)`` containing ``log(error)^vee``.

    Use ``scipy.linalg.logm`` for the matrix logarithm.
    """
    mat_log = logm(error)
    real_mat_log = np.real(mat_log)
    twist_vec = se3_to_twist(real_mat_log)
    return twist_vec


def jacobian_inverse_kinematics(
    twists, theta, g_st0, desired_pose, step_size=0.2,
    max_iterations=200, tolerance=1e-6,
):
    """Solve inverse kinematics using spatial errors and forward-Euler updates.

    Args:
        twists: NumPy array with shape ``(6, N)`` containing the joint twists
            at the home configuration.
        theta: NumPy array with shape ``(N,)`` containing the initial joint values.
        g_st0: NumPy array with shape ``(4, 4)`` containing the home tool pose.
        desired_pose: NumPy array with shape ``(4, 4)`` containing the target
            tool pose in the same reference frame.
        step_size: Nonnegative scalar multiplier for each joint update.
        max_iterations: Nonnegative integer limiting the number of updates.
        tolerance: Positive scalar threshold for the norm of the spatial
            error twist. Assume relative rotation angles are less than pi.

    Returns:
        ``(theta, history)``, where theta is a NumPy array with shape ``(N,)``
        and history has shape ``(M, N)``. Include the initial joint values
        and every update, so ``1 <= M <= max_iterations + 1`` and
        ``theta == history[-1]``. Return the latest values even if the target
        is not reached.
    """
    joint_angles = np.array(theta, dtype=float)
    trajectory = [joint_angles.copy()]
    
    iteration = 0
    while iteration < max_iterations:
        curr_pose = forward_kinematics(twists, joint_angles) @ g_st0
        pose_err = spatial_configuration_error(curr_pose, desired_pose)
        err_twist = spatial_error_twist(pose_err)
        
        if np.linalg.norm(err_twist) <= tolerance:
            break
            
        jac_mat = spatial_jacobian(twists, joint_angles)
        pseudo_inverse = np.linalg.pinv(jac_mat)
        
        angle_delta = step_size * (pseudo_inverse @ err_twist)
        joint_angles = joint_angles + angle_delta
        
        trajectory.append(joint_angles.copy())
        iteration += 1
        
    return joint_angles, np.array(trajectory)






