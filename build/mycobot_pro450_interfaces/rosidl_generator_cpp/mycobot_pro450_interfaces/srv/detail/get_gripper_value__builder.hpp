// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mycobot_pro450_interfaces:srv/GetGripperValue.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__BUILDER_HPP_
#define MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__BUILDER_HPP_

#include "mycobot_pro450_interfaces/srv/detail/get_gripper_value__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mycobot_pro450_interfaces
{

namespace srv
{


}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_pro450_interfaces::srv::GetGripperValue_Request>()
{
  return ::mycobot_pro450_interfaces::srv::GetGripperValue_Request(rosidl_runtime_cpp::MessageInitialization::ZERO);
}

}  // namespace mycobot_pro450_interfaces


namespace mycobot_pro450_interfaces
{

namespace srv
{

namespace builder
{

class Init_GetGripperValue_Response_gripper_angle
{
public:
  Init_GetGripperValue_Response_gripper_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mycobot_pro450_interfaces::srv::GetGripperValue_Response gripper_angle(::mycobot_pro450_interfaces::srv::GetGripperValue_Response::_gripper_angle_type arg)
  {
    msg_.gripper_angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mycobot_pro450_interfaces::srv::GetGripperValue_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_pro450_interfaces::srv::GetGripperValue_Response>()
{
  return mycobot_pro450_interfaces::srv::builder::Init_GetGripperValue_Response_gripper_angle();
}

}  // namespace mycobot_pro450_interfaces

#endif  // MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__BUILDER_HPP_
