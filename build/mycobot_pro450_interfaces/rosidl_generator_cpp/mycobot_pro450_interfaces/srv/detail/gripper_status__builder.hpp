// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mycobot_pro450_interfaces:srv/GripperStatus.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__BUILDER_HPP_
#define MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__BUILDER_HPP_

#include "mycobot_pro450_interfaces/srv/detail/gripper_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mycobot_pro450_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperStatus_Request_status
{
public:
  Init_GripperStatus_Request_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mycobot_pro450_interfaces::srv::GripperStatus_Request status(::mycobot_pro450_interfaces::srv::GripperStatus_Request::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mycobot_pro450_interfaces::srv::GripperStatus_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_pro450_interfaces::srv::GripperStatus_Request>()
{
  return mycobot_pro450_interfaces::srv::builder::Init_GripperStatus_Request_status();
}

}  // namespace mycobot_pro450_interfaces


namespace mycobot_pro450_interfaces
{

namespace srv
{

namespace builder
{

class Init_GripperStatus_Response_flag
{
public:
  Init_GripperStatus_Response_flag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mycobot_pro450_interfaces::srv::GripperStatus_Response flag(::mycobot_pro450_interfaces::srv::GripperStatus_Response::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mycobot_pro450_interfaces::srv::GripperStatus_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_pro450_interfaces::srv::GripperStatus_Response>()
{
  return mycobot_pro450_interfaces::srv::builder::Init_GripperStatus_Response_flag();
}

}  // namespace mycobot_pro450_interfaces

#endif  // MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GRIPPER_STATUS__BUILDER_HPP_
