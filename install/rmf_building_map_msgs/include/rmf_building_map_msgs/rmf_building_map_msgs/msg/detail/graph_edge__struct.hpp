// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rmf_building_map_msgs:msg/GraphEdge.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__STRUCT_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'params'
#include "rmf_building_map_msgs/msg/detail/param__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rmf_building_map_msgs__msg__GraphEdge __attribute__((deprecated))
#else
# define DEPRECATED__rmf_building_map_msgs__msg__GraphEdge __declspec(deprecated)
#endif

namespace rmf_building_map_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GraphEdge_
{
  using Type = GraphEdge_<ContainerAllocator>;

  explicit GraphEdge_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v1_idx = 0ul;
      this->v2_idx = 0ul;
      this->edge_type = 0;
    }
  }

  explicit GraphEdge_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->v1_idx = 0ul;
      this->v2_idx = 0ul;
      this->edge_type = 0;
    }
  }

  // field types and members
  using _v1_idx_type =
    uint32_t;
  _v1_idx_type v1_idx;
  using _v2_idx_type =
    uint32_t;
  _v2_idx_type v2_idx;
  using _params_type =
    std::vector<rmf_building_map_msgs::msg::Param_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Param_<ContainerAllocator>>>;
  _params_type params;
  using _edge_type_type =
    uint8_t;
  _edge_type_type edge_type;

  // setters for named parameter idiom
  Type & set__v1_idx(
    const uint32_t & _arg)
  {
    this->v1_idx = _arg;
    return *this;
  }
  Type & set__v2_idx(
    const uint32_t & _arg)
  {
    this->v2_idx = _arg;
    return *this;
  }
  Type & set__params(
    const std::vector<rmf_building_map_msgs::msg::Param_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rmf_building_map_msgs::msg::Param_<ContainerAllocator>>> & _arg)
  {
    this->params = _arg;
    return *this;
  }
  Type & set__edge_type(
    const uint8_t & _arg)
  {
    this->edge_type = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t EDGE_TYPE_BIDIRECTIONAL =
    0u;
  static constexpr uint8_t EDGE_TYPE_UNIDIRECTIONAL =
    1u;

  // pointer types
  using RawPtr =
    rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator> *;
  using ConstRawPtr =
    const rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rmf_building_map_msgs__msg__GraphEdge
    std::shared_ptr<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rmf_building_map_msgs__msg__GraphEdge
    std::shared_ptr<rmf_building_map_msgs::msg::GraphEdge_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GraphEdge_ & other) const
  {
    if (this->v1_idx != other.v1_idx) {
      return false;
    }
    if (this->v2_idx != other.v2_idx) {
      return false;
    }
    if (this->params != other.params) {
      return false;
    }
    if (this->edge_type != other.edge_type) {
      return false;
    }
    return true;
  }
  bool operator!=(const GraphEdge_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GraphEdge_

// alias to use template instance with default allocator
using GraphEdge =
  rmf_building_map_msgs::msg::GraphEdge_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GraphEdge_<ContainerAllocator>::EDGE_TYPE_BIDIRECTIONAL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t GraphEdge_<ContainerAllocator>::EDGE_TYPE_UNIDIRECTIONAL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__STRUCT_HPP_
