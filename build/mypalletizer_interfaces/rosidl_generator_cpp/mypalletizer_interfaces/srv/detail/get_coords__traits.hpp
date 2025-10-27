// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mypalletizer_interfaces:srv/GetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_
#define MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_

#include "mypalletizer_interfaces/srv/detail/get_coords__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::srv::GetCoords_Request>()
{
  return "mypalletizer_interfaces::srv::GetCoords_Request";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::GetCoords_Request>()
{
  return "mypalletizer_interfaces/srv/GetCoords_Request";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::GetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::GetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::srv::GetCoords_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::srv::GetCoords_Response>()
{
  return "mypalletizer_interfaces::srv::GetCoords_Response";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::GetCoords_Response>()
{
  return "mypalletizer_interfaces/srv/GetCoords_Response";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::GetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::GetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mypalletizer_interfaces::srv::GetCoords_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mypalletizer_interfaces::srv::GetCoords>()
{
  return "mypalletizer_interfaces::srv::GetCoords";
}

template<>
inline const char * name<mypalletizer_interfaces::srv::GetCoords>()
{
  return "mypalletizer_interfaces/srv/GetCoords";
}

template<>
struct has_fixed_size<mypalletizer_interfaces::srv::GetCoords>
  : std::integral_constant<
    bool,
    has_fixed_size<mypalletizer_interfaces::srv::GetCoords_Request>::value &&
    has_fixed_size<mypalletizer_interfaces::srv::GetCoords_Response>::value
  >
{
};

template<>
struct has_bounded_size<mypalletizer_interfaces::srv::GetCoords>
  : std::integral_constant<
    bool,
    has_bounded_size<mypalletizer_interfaces::srv::GetCoords_Request>::value &&
    has_bounded_size<mypalletizer_interfaces::srv::GetCoords_Response>::value
  >
{
};

template<>
struct is_service<mypalletizer_interfaces::srv::GetCoords>
  : std::true_type
{
};

template<>
struct is_service_request<mypalletizer_interfaces::srv::GetCoords_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mypalletizer_interfaces::srv::GetCoords_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYPALLETIZER_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_
