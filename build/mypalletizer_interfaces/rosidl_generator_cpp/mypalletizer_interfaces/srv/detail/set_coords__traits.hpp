// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mypalletizer_interfaces:srv/SetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_

#include "mypalletizer_interfaces/srv/detail/set_coords__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::srv::SetCoords_Request>()
{
  return "mypalletizer_interfaces::srv::SetCoords_Request";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::SetCoords_Request>()
{
  return "mypalletizer_interfaces/srv/SetCoords_Request";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::SetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::SetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::srv::SetCoords_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::srv::SetCoords_Response>()
{
  return "mypalletizer_interfaces::srv::SetCoords_Response";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::SetCoords_Response>()
{
  return "mypalletizer_interfaces/srv/SetCoords_Response";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::SetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::SetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::srv::SetCoords_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::srv::SetCoords>()
{
  return "mypalletizer_interfaces::srv::SetCoords";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::SetCoords>()
{
  return "mypalletizer_interfaces/srv/SetCoords";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::SetCoords>
  : std::integral_constant<
    bool,
    has_fixed_size<mypalletizer_interfaces::srv::SetCoords_Request>::value &&
    has_fixed_size<mypalletizer_interfaces::srv::SetCoords_Response>::value
  >
{
};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::SetCoords>
  : std::integral_constant<
    bool,
    has_bounded_size<mypalletizer_interfaces::srv::SetCoords_Request>::value &&
    has_bounded_size<mypalletizer_interfaces::srv::SetCoords_Response>::value
  >
{
};

template<>
struct is_service<mypalletizer_interfaces::srv::SetCoords>
  : std::true_type
{
};

template<>
struct is_service_request<mypalletizer_interfaces::srv::SetCoords_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mypalletizer_interfaces::srv::SetCoords_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__SET_COORDS__TRAITS_HPP_
