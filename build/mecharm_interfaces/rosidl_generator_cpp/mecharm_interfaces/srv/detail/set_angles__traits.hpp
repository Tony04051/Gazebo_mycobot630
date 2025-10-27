// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecharm_interfaces:srv/SetAngles.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__SRV__DETAIL__SET_ANGLES__TRAITS_HPP_
#define MECHARM_INTERFACES__SRV__DETAIL__SET_ANGLES__TRAITS_HPP_

#include "mecharm_interfaces/srv/detail/set_angles__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::srv::SetAngles_Request>()
{
  return "mecharm_interfaces::srv::SetAngles_Request";
}

template<>
inline const char * name<mecharm_interfaces::srv::SetAngles_Request>()
{
  return "mecharm_interfaces/srv/SetAngles_Request";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::SetAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::srv::SetAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::srv::SetAngles_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::srv::SetAngles_Response>()
{
  return "mecharm_interfaces::srv::SetAngles_Response";
}

template<>
inline const char * name<mecharm_interfaces::srv::SetAngles_Response>()
{
  return "mecharm_interfaces/srv/SetAngles_Response";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::SetAngles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::srv::SetAngles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::srv::SetAngles_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::srv::SetAngles>()
{
  return "mecharm_interfaces::srv::SetAngles";
}

template<>
inline const char * name<mecharm_interfaces::srv::SetAngles>()
{
  return "mecharm_interfaces/srv/SetAngles";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::SetAngles>
  : std::integral_constant<
    bool,
    has_fixed_size<mecharm_interfaces::srv::SetAngles_Request>::value &&
    has_fixed_size<mecharm_interfaces::srv::SetAngles_Response>::value
  >
{
};

template<>
struct has_bounded_size<mecharm_interfaces::srv::SetAngles>
  : std::integral_constant<
    bool,
    has_bounded_size<mecharm_interfaces::srv::SetAngles_Request>::value &&
    has_bounded_size<mecharm_interfaces::srv::SetAngles_Response>::value
  >
{
};

template<>
struct is_service<mecharm_interfaces::srv::SetAngles>
  : std::true_type
{
};

template<>
struct is_service_request<mecharm_interfaces::srv::SetAngles_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mecharm_interfaces::srv::SetAngles_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MECHARM_INTERFACES__SRV__DETAIL__SET_ANGLES__TRAITS_HPP_
