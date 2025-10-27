// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mycobot_interfaces:srv/GetCoords.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_
#define MYCOBOT_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_

#include "mycobot_interfaces/srv/detail/get_coords__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_interfaces::srv::GetCoords_Request>()
{
  return "mycobot_interfaces::srv::GetCoords_Request";
}

template<>
inline const char * name<mycobot_interfaces::srv::GetCoords_Request>()
{
  return "mycobot_interfaces/srv/GetCoords_Request";
}

template<>
struct has_fixed_size<mycobot_interfaces::srv::GetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_interfaces::srv::GetCoords_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_interfaces::srv::GetCoords_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_interfaces::srv::GetCoords_Response>()
{
  return "mycobot_interfaces::srv::GetCoords_Response";
}

template<>
inline const char * name<mycobot_interfaces::srv::GetCoords_Response>()
{
  return "mycobot_interfaces/srv/GetCoords_Response";
}

template<>
struct has_fixed_size<mycobot_interfaces::srv::GetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_interfaces::srv::GetCoords_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_interfaces::srv::GetCoords_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_interfaces::srv::GetCoords>()
{
  return "mycobot_interfaces::srv::GetCoords";
}

template<>
inline const char * name<mycobot_interfaces::srv::GetCoords>()
{
  return "mycobot_interfaces/srv/GetCoords";
}

template<>
struct has_fixed_size<mycobot_interfaces::srv::GetCoords>
  : std::integral_constant<
    bool,
    has_fixed_size<mycobot_interfaces::srv::GetCoords_Request>::value &&
    has_fixed_size<mycobot_interfaces::srv::GetCoords_Response>::value
  >
{
};

template<>
struct has_bounded_size<mycobot_interfaces::srv::GetCoords>
  : std::integral_constant<
    bool,
    has_bounded_size<mycobot_interfaces::srv::GetCoords_Request>::value &&
    has_bounded_size<mycobot_interfaces::srv::GetCoords_Response>::value
  >
{
};

template<>
struct is_service<mycobot_interfaces::srv::GetCoords>
  : std::true_type
{
};

template<>
struct is_service_request<mycobot_interfaces::srv::GetCoords_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mycobot_interfaces::srv::GetCoords_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYCOBOT_INTERFACES__SRV__DETAIL__GET_COORDS__TRAITS_HPP_
