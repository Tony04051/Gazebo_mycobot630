// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mycobot_interfaces:msg/MycobotPumpStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mycobot_interfaces/msg/detail/mycobot_pump_status__rosidl_typesupport_introspection_c.h"
#include "mycobot_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mycobot_interfaces/msg/detail/mycobot_pump_status__functions.h"
#include "mycobot_interfaces/msg/detail/mycobot_pump_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mycobot_interfaces__msg__MycobotPumpStatus__init(message_memory);
}

void MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_fini_function(void * message_memory)
{
  mycobot_interfaces__msg__MycobotPumpStatus__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_message_member_array[3] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__msg__MycobotPumpStatus, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pin1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__msg__MycobotPumpStatus, pin1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pin2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mycobot_interfaces__msg__MycobotPumpStatus, pin2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_message_members = {
  "mycobot_interfaces__msg",  // message namespace
  "MycobotPumpStatus",  // message name
  3,  // number of fields
  sizeof(mycobot_interfaces__msg__MycobotPumpStatus),
  MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_message_member_array,  // message members
  MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_message_type_support_handle = {
  0,
  &MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mycobot_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mycobot_interfaces, msg, MycobotPumpStatus)() {
  if (!MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_message_type_support_handle.typesupport_identifier) {
    MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MycobotPumpStatus__rosidl_typesupport_introspection_c__MycobotPumpStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
