// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mecharm_interfaces:srv/PumpStatus.idl
// generated code does not contain a copyright notice

#ifndef MECHARM_INTERFACES__SRV__DETAIL__PUMP_STATUS__TRAITS_HPP_
#define MECHARM_INTERFACES__SRV__DETAIL__PUMP_STATUS__TRAITS_HPP_

#include "mecharm_interfaces/srv/detail/pump_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::srv::PumpStatus_Request>()
{
  return "mecharm_interfaces::srv::PumpStatus_Request";
}

template<>
inline const char * name<mecharm_interfaces::srv::PumpStatus_Request>()
{
  return "mecharm_interfaces/srv/PumpStatus_Request";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::PumpStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::srv::PumpStatus_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::srv::PumpStatus_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::srv::PumpStatus_Response>()
{
  return "mecharm_interfaces::srv::PumpStatus_Response";
}

template<>
inline const char * name<mecharm_interfaces::srv::PumpStatus_Response>()
{
  return "mecharm_interfaces/srv/PumpStatus_Response";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::PumpStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mecharm_interfaces::srv::PumpStatus_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mecharm_interfaces::srv::PumpStatus_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mecharm_interfaces::srv::PumpStatus>()
{
  return "mecharm_interfaces::srv::PumpStatus";
}

template<>
inline const char * name<mecharm_interfaces::srv::PumpStatus>()
{
  return "mecharm_interfaces/srv/PumpStatus";
}

template<>
struct has_fixed_size<mecharm_interfaces::srv::PumpStatus>
  : std::integral_constant<
    bool,
    has_fixed_size<mecharm_interfaces::srv::PumpStatus_Request>::value &&
    has_fixed_size<mecharm_interfaces::srv::PumpStatus_Response>::value
  >
{
};

template<>
struct has_bounded_size<mecharm_interfaces::srv::PumpStatus>
  : std::integral_constant<
    bool,
    has_bounded_size<mecharm_interfaces::srv::PumpStatus_Request>::value &&
    has_bounded_size<mecharm_interfaces::srv::PumpStatus_Response>::value
  >
{
};

template<>
struct is_service<mecharm_interfaces::srv::PumpStatus>
  : std::true_type
{
};

template<>
struct is_service_request<mecharm_interfaces::srv::PumpStatus_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mecharm_interfaces::srv::PumpStatus_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MECHARM_INTERFACES__SRV__DETAIL__PUMP_STATUS__TRAITS_HPP_
