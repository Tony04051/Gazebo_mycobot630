// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecharm_interfaces:msg/MecharmSetCoords.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__TRAITS_HPP_
#define MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__TRAITS_HPP_

#include "mecharm_interfaces/msg/detail/mecharm_set_coords__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::msg::MecharmSetCoords>()
{
  return "mecharm_interfaces::msg::MecharmSetCoords";
}

template<>
inline const char * name<mecharm_interfaces::msg::MecharmSetCoords>()
{
  return "mecharm_interfaces/msg/MecharmSetCoords";
}

template<>
struct has_fixed_size<mecharm_interfaces::msg::MecharmSetCoords>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::msg::MecharmSetCoords>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::msg::MecharmSetCoords>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MECHARM_INTERFACES__MSG__DETAIL__MECHARM_SET_COORDS__TRAITS_HPP_
