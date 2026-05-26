// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from node_control_msgs:msg/MotorConfig.idl
// generated code does not contain a copyright notice

#ifndef NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG__FUNCTIONS_H_
#define NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "node_control_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "node_control_msgs/msg/detail/motor_config__struct.h"

/// Initialize msg/MotorConfig message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * node_control_msgs__msg__MotorConfig
 * )) before or use
 * node_control_msgs__msg__MotorConfig__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
bool
node_control_msgs__msg__MotorConfig__init(node_control_msgs__msg__MotorConfig * msg);

/// Finalize msg/MotorConfig message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
void
node_control_msgs__msg__MotorConfig__fini(node_control_msgs__msg__MotorConfig * msg);

/// Create msg/MotorConfig message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * node_control_msgs__msg__MotorConfig__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
node_control_msgs__msg__MotorConfig *
node_control_msgs__msg__MotorConfig__create();

/// Destroy msg/MotorConfig message.
/**
 * It calls
 * node_control_msgs__msg__MotorConfig__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
void
node_control_msgs__msg__MotorConfig__destroy(node_control_msgs__msg__MotorConfig * msg);

/// Check for msg/MotorConfig message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
bool
node_control_msgs__msg__MotorConfig__are_equal(const node_control_msgs__msg__MotorConfig * lhs, const node_control_msgs__msg__MotorConfig * rhs);

/// Copy a msg/MotorConfig message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
bool
node_control_msgs__msg__MotorConfig__copy(
  const node_control_msgs__msg__MotorConfig * input,
  node_control_msgs__msg__MotorConfig * output);

/// Initialize array of msg/MotorConfig messages.
/**
 * It allocates the memory for the number of elements and calls
 * node_control_msgs__msg__MotorConfig__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
bool
node_control_msgs__msg__MotorConfig__Sequence__init(node_control_msgs__msg__MotorConfig__Sequence * array, size_t size);

/// Finalize array of msg/MotorConfig messages.
/**
 * It calls
 * node_control_msgs__msg__MotorConfig__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
void
node_control_msgs__msg__MotorConfig__Sequence__fini(node_control_msgs__msg__MotorConfig__Sequence * array);

/// Create array of msg/MotorConfig messages.
/**
 * It allocates the memory for the array and calls
 * node_control_msgs__msg__MotorConfig__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
node_control_msgs__msg__MotorConfig__Sequence *
node_control_msgs__msg__MotorConfig__Sequence__create(size_t size);

/// Destroy array of msg/MotorConfig messages.
/**
 * It calls
 * node_control_msgs__msg__MotorConfig__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
void
node_control_msgs__msg__MotorConfig__Sequence__destroy(node_control_msgs__msg__MotorConfig__Sequence * array);

/// Check for msg/MotorConfig message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
bool
node_control_msgs__msg__MotorConfig__Sequence__are_equal(const node_control_msgs__msg__MotorConfig__Sequence * lhs, const node_control_msgs__msg__MotorConfig__Sequence * rhs);

/// Copy an array of msg/MotorConfig messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_node_control_msgs
bool
node_control_msgs__msg__MotorConfig__Sequence__copy(
  const node_control_msgs__msg__MotorConfig__Sequence * input,
  node_control_msgs__msg__MotorConfig__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // NODE_CONTROL_MSGS__MSG__DETAIL__MOTOR_CONFIG__FUNCTIONS_H_
