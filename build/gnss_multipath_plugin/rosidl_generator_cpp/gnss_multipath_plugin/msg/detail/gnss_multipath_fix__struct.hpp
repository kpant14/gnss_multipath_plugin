// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from gnss_multipath_plugin:msg/GNSSMultipathFix.idl
// generated code does not contain a copyright notice

#ifndef GNSS_MULTIPATH_PLUGIN__MSG__DETAIL__GNSS_MULTIPATH_FIX__STRUCT_HPP_
#define GNSS_MULTIPATH_PLUGIN__MSG__DETAIL__GNSS_MULTIPATH_FIX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'navsatfix'
#include "sensor_msgs/msg/detail/nav_sat_fix__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__gnss_multipath_plugin__msg__GNSSMultipathFix __attribute__((deprecated))
#else
# define DEPRECATED__gnss_multipath_plugin__msg__GNSSMultipathFix __declspec(deprecated)
#endif

namespace gnss_multipath_plugin
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GNSSMultipathFix_
{
  using Type = GNSSMultipathFix_<ContainerAllocator>;

  explicit GNSSMultipathFix_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    navsatfix(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_vis_sat = 0l;
      this->num_block_sat = 0l;
    }
  }

  explicit GNSSMultipathFix_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    navsatfix(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_vis_sat = 0l;
      this->num_block_sat = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _navsatfix_type =
    sensor_msgs::msg::NavSatFix_<ContainerAllocator>;
  _navsatfix_type navsatfix;
  using _range_offset_type =
    std::vector<float, typename ContainerAllocator::template rebind<float>::other>;
  _range_offset_type range_offset;
  using _sats_blocked_type =
    std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other>;
  _sats_blocked_type sats_blocked;
  using _num_vis_sat_type =
    int32_t;
  _num_vis_sat_type num_vis_sat;
  using _num_block_sat_type =
    int32_t;
  _num_block_sat_type num_block_sat;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__navsatfix(
    const sensor_msgs::msg::NavSatFix_<ContainerAllocator> & _arg)
  {
    this->navsatfix = _arg;
    return *this;
  }
  Type & set__range_offset(
    const std::vector<float, typename ContainerAllocator::template rebind<float>::other> & _arg)
  {
    this->range_offset = _arg;
    return *this;
  }
  Type & set__sats_blocked(
    const std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other> & _arg)
  {
    this->sats_blocked = _arg;
    return *this;
  }
  Type & set__num_vis_sat(
    const int32_t & _arg)
  {
    this->num_vis_sat = _arg;
    return *this;
  }
  Type & set__num_block_sat(
    const int32_t & _arg)
  {
    this->num_block_sat = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator> *;
  using ConstRawPtr =
    const gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__gnss_multipath_plugin__msg__GNSSMultipathFix
    std::shared_ptr<gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__gnss_multipath_plugin__msg__GNSSMultipathFix
    std::shared_ptr<gnss_multipath_plugin::msg::GNSSMultipathFix_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GNSSMultipathFix_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->navsatfix != other.navsatfix) {
      return false;
    }
    if (this->range_offset != other.range_offset) {
      return false;
    }
    if (this->sats_blocked != other.sats_blocked) {
      return false;
    }
    if (this->num_vis_sat != other.num_vis_sat) {
      return false;
    }
    if (this->num_block_sat != other.num_block_sat) {
      return false;
    }
    return true;
  }
  bool operator!=(const GNSSMultipathFix_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GNSSMultipathFix_

// alias to use template instance with default allocator
using GNSSMultipathFix =
  gnss_multipath_plugin::msg::GNSSMultipathFix_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace gnss_multipath_plugin

#endif  // GNSS_MULTIPATH_PLUGIN__MSG__DETAIL__GNSS_MULTIPATH_FIX__STRUCT_HPP_