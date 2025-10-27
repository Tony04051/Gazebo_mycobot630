// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mycobot_pro450_interfaces:msg/MycobotAngles.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_ANGLES__TRAITS_HPP_
#define MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_ANGLES__TRAITS_HPP_

#include "mycobot_pro450_interfaces/msg/detail/mycobot_angles__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_pro450_interfaces::msg::MycobotAngles>()
{
  return "mycobot_pro450_interfaces::msg::MycobotAngles";
}

template<>
inline const char * name<mycobot_pro450_interfaces::msg::MycobotAngles>()
{
  return "mycobot_pro450_interfaces/msg/MycobotAngles";
}

template<>
struct has_fixed_size<mycobot_pro450_interfaces::msg::MycobotAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_pro450_interfaces::msg::MycobotAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_pro450_interfaces::msg::MycobotAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_ANGLES__TRAITS_HPP_
