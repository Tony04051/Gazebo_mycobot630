// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from mycobot_pro450_interfaces:srv/GetGripperValue.idl
// generated code does not contain a copyright notice
#include "mycobot_pro450_interfaces/srv/detail/get_gripper_value__rosidl_typesupport_fastrtps_cpp.hpp"
#include "mycobot_pro450_interfaces/srv/detail/get_gripper_value__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mycobot_pro450_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mycobot_pro450_interfaces
cdr_serialize(
  const mycobot_pro450_interfaces::srv::GetGripperValue_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mycobot_pro450_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mycobot_pro450_interfaces::srv::GetGripperValue_Request & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mycobot_pro450_interfaces
get_serialized_size(
  const mycobot_pro450_interfaces::srv::GetGripperValue_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mycobot_pro450_interfaces
max_serialized_size_GetGripperValue_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetGripperValue_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mycobot_pro450_interfaces::srv::GetGripperValue_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetGripperValue_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mycobot_pro450_interfaces::srv::GetGripperValue_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetGripperValue_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mycobot_pro450_interfaces::srv::GetGripperValue_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetGripperValue_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetGripperValue_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _GetGripperValue_Request__callbacks = {
  "mycobot_pro450_interfaces::srv",
  "GetGripperValue_Request",
  _GetGripperValue_Request__cdr_serialize,
  _GetGripperValue_Request__cdr_deserialize,
  _GetGripperValue_Request__get_serialized_size,
  _GetGripperValue_Request__max_serialized_size
};

static rosidl_message_type_support_t _GetGripperValue_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetGripperValue_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mycobot_pro450_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mycobot_pro450_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mycobot_pro450_interfaces::srv::GetGripperValue_Request>()
{
  return &mycobot_pro450_interfaces::srv::typesupport_fastrtps_cpp::_GetGripperValue_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mycobot_pro450_interfaces, srv, GetGripperValue_Request)() {
  return &mycobot_pro450_interfaces::srv::typesupport_fastrtps_cpp::_GetGripperValue_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace mycobot_pro450_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mycobot_pro450_interfaces
cdr_serialize(
  const mycobot_pro450_interfaces::srv::GetGripperValue_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: gripper_angle
  cdr << ros_message.gripper_angle;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mycobot_pro450_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  mycobot_pro450_interfaces::srv::GetGripperValue_Response & ros_message)
{
  // Member: gripper_angle
  cdr >> ros_message.gripper_angle;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mycobot_pro450_interfaces
get_serialized_size(
  const mycobot_pro450_interfaces::srv::GetGripperValue_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: gripper_angle
  {
    size_t item_size = sizeof(ros_message.gripper_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_mycobot_pro450_interfaces
max_serialized_size_GetGripperValue_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: gripper_angle
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _GetGripperValue_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const mycobot_pro450_interfaces::srv::GetGripperValue_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GetGripperValue_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<mycobot_pro450_interfaces::srv::GetGripperValue_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GetGripperValue_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const mycobot_pro450_interfaces::srv::GetGripperValue_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GetGripperValue_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_GetGripperValue_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _GetGripperValue_Response__callbacks = {
  "mycobot_pro450_interfaces::srv",
  "GetGripperValue_Response",
  _GetGripperValue_Response__cdr_serialize,
  _GetGripperValue_Response__cdr_deserialize,
  _GetGripperValue_Response__get_serialized_size,
  _GetGripperValue_Response__max_serialized_size
};

static rosidl_message_type_support_t _GetGripperValue_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetGripperValue_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mycobot_pro450_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mycobot_pro450_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<mycobot_pro450_interfaces::srv::GetGripperValue_Response>()
{
  return &mycobot_pro450_interfaces::srv::typesupport_fastrtps_cpp::_GetGripperValue_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mycobot_pro450_interfaces, srv, GetGripperValue_Response)() {
  return &mycobot_pro450_interfaces::srv::typesupport_fastrtps_cpp::_GetGripperValue_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace mycobot_pro450_interfaces
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _GetGripperValue__callbacks = {
  "mycobot_pro450_interfaces::srv",
  "GetGripperValue",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mycobot_pro450_interfaces, srv, GetGripperValue_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mycobot_pro450_interfaces, srv, GetGripperValue_Response)(),
};

static rosidl_service_type_support_t _GetGripperValue__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GetGripperValue__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace mycobot_pro450_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_mycobot_pro450_interfaces
const rosidl_service_type_support_t *
get_service_type_support_handle<mycobot_pro450_interfaces::srv::GetGripperValue>()
{
  return &mycobot_pro450_interfaces::srv::typesupport_fastrtps_cpp::_GetGripperValue__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mycobot_pro450_interfaces, srv, GetGripperValue)() {
  return &mycobot_pro450_interfaces::srv::typesupport_fastrtps_cpp::_GetGripperValue__handle;
}

#ifdef __cplusplus
}
#endif
