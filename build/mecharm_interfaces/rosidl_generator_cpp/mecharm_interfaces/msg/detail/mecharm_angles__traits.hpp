// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecharm_interfaces:msg/MecharmAngles.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_ANGLES__TRAITS_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_ANGLES__TRAITS_HPP_

#include "mecharm_interfaces/msg/detail/mecharm_angles__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::msg::MecharmAngles>()
{
  return "mecharm_interfaces::msg::MecharmAngles";
}

template<>
inline const char * name<mecharm_interfaces::msg::MecharmAngles>()
{
  return "mecharm_interfaces/msg/MecharmAngles";
}

template<>
struct has_fixed_size<mecharm_interfaces::msg::MecharmAngles>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::msg::MecharmAngles>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::msg::MecharmAngles>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_ANGLES__TRAITS_HPP_
