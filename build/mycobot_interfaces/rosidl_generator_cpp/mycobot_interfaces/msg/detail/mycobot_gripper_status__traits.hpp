// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mycobot_interfaces:msg/MycobotGripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_INTERFACES__MSG__DETAIL__MYCOBOT_GRIPPER_STATUS__TRAITS_HPP_
#define MYCOBOT_INTERFACES__MSG__DETAIL__MYCOBOT_GRIPPER_STATUS__TRAITS_HPP_

#include "mycobot_interfaces/msg/detail/mycobot_gripper_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_interfaces::msg::MycobotGripperStatus>()
{
  return "mycobot_interfaces::msg::MycobotGripperStatus";
}

template<>
inline const char * name<mycobot_interfaces::msg::MycobotGripperStatus>()
{
  return "mycobot_interfaces/msg/MycobotGripperStatus";
}

template<>
struct has_fixed_size<mycobot_interfaces::msg::MycobotGripperStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_interfaces::msg::MycobotGripperStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_interfaces::msg::MycobotGripperStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYCOBOT_INTERFACES__MSG__DETAIL__MYCOBOT_GRIPPER_STATUS__TRAITS_HPP_
