// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mycobot_pro450_interfaces:srv/GetGripperValue.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__STRUCT_H_
#define MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/GetGripperValue in the package mycobot_pro450_interfaces.
typedef struct mycobot_pro450_interfaces__srv__GetGripperValue_Request
{
  uint8_t structure_needs_at_least_one_member;
} mycobot_pro450_interfaces__srv__GetGripperValue_Request;

// Struct for a sequence of mycobot_pro450_interfaces__srv__GetGripperValue_Request.
typedef struct mycobot_pro450_interfaces__srv__GetGripperValue_Request__Sequence
{
  mycobot_pro450_interfaces__srv__GetGripperValue_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_pro450_interfaces__srv__GetGripperValue_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/GetGripperValue in the package mycobot_pro450_interfaces.
typedef struct mycobot_pro450_interfaces__srv__GetGripperValue_Response
{
  int8_t gripper_angle;
} mycobot_pro450_interfaces__srv__GetGripperValue_Response;

// Struct for a sequence of mycobot_pro450_interfaces__srv__GetGripperValue_Response.
typedef struct mycobot_pro450_interfaces__srv__GetGripperValue_Response__Sequence
{
  mycobot_pro450_interfaces__srv__GetGripperValue_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mycobot_pro450_interfaces__srv__GetGripperValue_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__STRUCT_H_
