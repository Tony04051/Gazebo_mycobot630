// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mycobot_pro450_interfaces:srv/SetAngles.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__SET_ANGLES__TRAITS_HPP_
#define MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__SET_ANGLES__TRAITS_HPP_

#include "mycobot_pro450_interfaces/srv/detail/set_angles__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_pro450_interfaces::srv::SetAngles_Request>()
{
  return "mycobot_pro450_interfaces::srv::SetAngles_Request";
}

template<>
inline const char * name<mycobot_pro450_interfaces::srv::SetAngles_Request>()
{
  return "mycobot_pro450_interfaces/srv/SetAngles_Request";
}

template<>
struct has_fixed_size<mycobot_pro450_interfaces::srv::SetAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_pro450_interfaces::srv::SetAngles_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_pro450_interfaces::srv::SetAngles_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_pro450_interfaces::srv::SetAngles_Response>()
{
  return "mycobot_pro450_interfaces::srv::SetAngles_Response";
}

template<>
inline const char * name<mycobot_pro450_interfaces::srv::SetAngles_Response>()
{
  return "mycobot_pro450_interfaces/srv/SetAngles_Response";
}

template<>
struct has_fixed_size<mycobot_pro450_interfaces::srv::SetAngles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mycobot_pro450_interfaces::srv::SetAngles_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mycobot_pro450_interfaces::srv::SetAngles_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mycobot_pro450_interfaces::srv::SetAngles>()
{
  return "mycobot_pro450_interfaces::srv::SetAngles";
}

template<>
inline const char * name<mycobot_pro450_interfaces::srv::SetAngles>()
{
  return "mycobot_pro450_interfaces/srv/SetAngles";
}

template<>
struct has_fixed_size<mycobot_pro450_interfaces::srv::SetAngles>
  : std::integral_constant<
    bool,
    has_fixed_size<mycobot_pro450_interfaces::srv::SetAngles_Request>::value &&
    has_fixed_size<mycobot_pro450_interfaces::srv::SetAngles_Response>::value
  >
{
};

template<>
struct has_bounded_size<mycobot_pro450_interfaces::srv::SetAngles>
  : std::integral_constant<
    bool,
    has_bounded_size<mycobot_pro450_interfaces::srv::SetAngles_Request>::value &&
    has_bounded_size<mycobot_pro450_interfaces::srv::SetAngles_Response>::value
  >
{
};

template<>
struct is_service<mycobot_pro450_interfaces::srv::SetAngles>
  : std::true_type
{
};

template<>
struct is_service_request<mycobot_pro450_interfaces::srv::SetAngles_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mycobot_pro450_interfaces::srv::SetAngles_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__SET_ANGLES__TRAITS_HPP_
