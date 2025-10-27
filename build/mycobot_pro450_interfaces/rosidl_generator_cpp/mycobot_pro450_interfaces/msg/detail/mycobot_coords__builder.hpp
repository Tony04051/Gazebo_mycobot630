// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mycobot_pro450_interfaces:msg/MycobotCoords.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_COORDS__BUILDER_HPP_
#define MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_COORDS__BUILDER_HPP_

#include "mycobot_pro450_interfaces/msg/detail/mycobot_coords__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mycobot_pro450_interfaces
{

namespace msg
{

namespace builder
{

class Init_MycobotCoords_rz
{
public:
  explicit Init_MycobotCoords_rz(::mycobot_pro450_interfaces::msg::MycobotCoords & msg)
  : msg_(msg)
  {}
  ::mycobot_pro450_interfaces::msg::MycobotCoords rz(::mycobot_pro450_interfaces::msg::MycobotCoords::_rz_type arg)
  {
    msg_.rz = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mycobot_pro450_interfaces::msg::MycobotCoords msg_;
};

class Init_MycobotCoords_ry
{
public:
  explicit Init_MycobotCoords_ry(::mycobot_pro450_interfaces::msg::MycobotCoords & msg)
  : msg_(msg)
  {}
  Init_MycobotCoords_rz ry(::mycobot_pro450_interfaces::msg::MycobotCoords::_ry_type arg)
  {
    msg_.ry = std::move(arg);
    return Init_MycobotCoords_rz(msg_);
  }

private:
  ::mycobot_pro450_interfaces::msg::MycobotCoords msg_;
};

class Init_MycobotCoords_rx
{
public:
  explicit Init_MycobotCoords_rx(::mycobot_pro450_interfaces::msg::MycobotCoords & msg)
  : msg_(msg)
  {}
  Init_MycobotCoords_ry rx(::mycobot_pro450_interfaces::msg::MycobotCoords::_rx_type arg)
  {
    msg_.rx = std::move(arg);
    return Init_MycobotCoords_ry(msg_);
  }

private:
  ::mycobot_pro450_interfaces::msg::MycobotCoords msg_;
};

class Init_MycobotCoords_z
{
public:
  explicit Init_MycobotCoords_z(::mycobot_pro450_interfaces::msg::MycobotCoords & msg)
  : msg_(msg)
  {}
  Init_MycobotCoords_rx z(::mycobot_pro450_interfaces::msg::MycobotCoords::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_MycobotCoords_rx(msg_);
  }

private:
  ::mycobot_pro450_interfaces::msg::MycobotCoords msg_;
};

class Init_MycobotCoords_y
{
public:
  explicit Init_MycobotCoords_y(::mycobot_pro450_interfaces::msg::MycobotCoords & msg)
  : msg_(msg)
  {}
  Init_MycobotCoords_z y(::mycobot_pro450_interfaces::msg::MycobotCoords::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_MycobotCoords_z(msg_);
  }

private:
  ::mycobot_pro450_interfaces::msg::MycobotCoords msg_;
};

class Init_MycobotCoords_x
{
public:
  Init_MycobotCoords_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MycobotCoords_y x(::mycobot_pro450_interfaces::msg::MycobotCoords::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_MycobotCoords_y(msg_);
  }

private:
  ::mycobot_pro450_interfaces::msg::MycobotCoords msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mycobot_pro450_interfaces::msg::MycobotCoords>()
{
  return mycobot_pro450_interfaces::msg::builder::Init_MycobotCoords_x();
}

}  // namespace mycobot_pro450_interfaces

#endif  // MYCOBOT_PRO450_INTERFACES__MSG__DETAIL__MYCOBOT_COORDS__BUILDER_HPP_
