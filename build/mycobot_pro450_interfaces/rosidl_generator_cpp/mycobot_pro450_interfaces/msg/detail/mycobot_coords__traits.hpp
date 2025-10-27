// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mycobot_pro450_interfaces:msg/MycobotCoords.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_COORDS__TRAITS_HPP_
#define MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_COORDS__TRAITS_HPP_

#include "mycobot_pro450_interfaces/msg/detail/mycobot_coords__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_pro450_interfaces::msg::MycobotCoords>()
{
  return "mycobot_pro450_interfaces::msg::MycobotCoords";
}

template<>
inline const char * name<mycobot_pro450_interfaces::msg::MycobotCoords>()
{
  return "mycobot_pro450_interfaces/msg/MycobotCoords";
}

template<>
struct has_fixed_size<mycobot_pro450_interfaces::msg::MycobotCoords>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_pro450_interfaces::msg::MycobotCoords>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_pro450_interfaces::msg::MycobotCoords>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_COORDS__TRAITS_HPP_
