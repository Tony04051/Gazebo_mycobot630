// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mycobot_pro450_interfaces:srv/GetGripperValue.idl
// generated code does not contain a copyright notice

#ifndef MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__STRUCT_HPP_
#define MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mycobot_pro450_interfaces__srv__GetGripperValue_Request __attribute__((deprecated))
#else
# define DEPRECATED__mycobot_pro450_interfaces__srv__GetGripperValue_Request __declspec(deprecated)
#endif

namespace mycobot_pro450_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGripperValue_Request_
{
  using Type = GetGripperValue_Request_<ContainerAllocator>;

  explicit GetGripperValue_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetGripperValue_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mycobot_pro450_interfaces__srv__GetGripperValue_Request
    std::shared_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mycobot_pro450_interfaces__srv__GetGripperValue_Request
    std::shared_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGripperValue_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGripperValue_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGripperValue_Request_

// alias to use template instance with default allocator
using GetGripperValue_Request =
  mycobot_pro450_interfaces::srv::GetGripperValue_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mycobot_pro450_interfaces


#ifndef _WIN32
# define DEPRECATED__mycobot_pro450_interfaces__srv__GetGripperValue_Response __attribute__((deprecated))
#else
# define DEPRECATED__mycobot_pro450_interfaces__srv__GetGripperValue_Response __declspec(deprecated)
#endif

namespace mycobot_pro450_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGripperValue_Response_
{
  using Type = GetGripperValue_Response_<ContainerAllocator>;

  explicit GetGripperValue_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_angle = 0;
    }
  }

  explicit GetGripperValue_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->gripper_angle = 0;
    }
  }

  // field types and members
  using _gripper_angle_type =
    int8_t;
  _gripper_angle_type gripper_angle;

  // setters for named parameter idiom
  Type & set__gripper_angle(
    const int8_t & _arg)
  {
    this->gripper_angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mycobot_pro450_interfaces__srv__GetGripperValue_Response
    std::shared_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mycobot_pro450_interfaces__srv__GetGripperValue_Response
    std::shared_ptr<mycobot_pro450_interfaces::srv::GetGripperValue_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGripperValue_Response_ & other) const
  {
    if (this->gripper_angle != other.gripper_angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGripperValue_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGripperValue_Response_

// alias to use template instance with default allocator
using GetGripperValue_Response =
  mycobot_pro450_interfaces::srv::GetGripperValue_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mycobot_pro450_interfaces

namespace mycobot_pro450_interfaces
{

namespace srv
{

struct GetGripperValue
{
  using Request = mycobot_pro450_interfaces::srv::GetGripperValue_Request;
  using Response = mycobot_pro450_interfaces::srv::GetGripperValue_Response;
};

}  // namespace srv

}  // namespace mycobot_pro450_interfaces

#endif  // MYCOBOT_PRO450_INTERFACES__SRV__DETAIL__GET_GRIPPER_VALUE__STRUCT_HPP_
