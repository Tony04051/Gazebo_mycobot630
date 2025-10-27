// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mypalletizer_interfaces:msg/MypalGripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__TRAITS_HPP_
#define MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__TRAITS_HPP_

#include "mypalletizer_interfaces/msg/detail/mypal_gripper_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::msg::MypalGripperStatus>()
{
  return "mypalletizer_interfaces::msg::MypalGripperStatus";
}

template<>
inline const char * name<mypalletizer_interfaces::msg::MypalGripperStatus>()
{
  return "mypalletizer_interfaces/msg/MypalGripperStatus";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::msg::MypalGripperStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::msg::MypalGripperStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::msg::MypalGripperStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYPALLETIZER_INTERFACES__MSG__DETAIL__MYPAL_GRIPPER_STATUS__TRAITS_HPP_
