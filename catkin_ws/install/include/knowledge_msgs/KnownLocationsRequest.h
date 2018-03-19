// Generated by gencpp from file knowledge_msgs/KnownLocationsRequest.msg
// DO NOT EDIT!


#ifndef KNOWLEDGE_MSGS_MESSAGE_KNOWNLOCATIONSREQUEST_H
#define KNOWLEDGE_MSGS_MESSAGE_KNOWNLOCATIONSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace knowledge_msgs
{
template <class ContainerAllocator>
struct KnownLocationsRequest_
{
  typedef KnownLocationsRequest_<ContainerAllocator> Type;

  KnownLocationsRequest_()
    {
    }
  KnownLocationsRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct KnownLocationsRequest_

typedef ::knowledge_msgs::KnownLocationsRequest_<std::allocator<void> > KnownLocationsRequest;

typedef boost::shared_ptr< ::knowledge_msgs::KnownLocationsRequest > KnownLocationsRequestPtr;
typedef boost::shared_ptr< ::knowledge_msgs::KnownLocationsRequest const> KnownLocationsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace knowledge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vision_msgs': ['/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/vision/vision_msgs/msg'], 'knowledge_msgs': ['/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/planning/knowledge_msgs/msg', '/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/planning/knowledge_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "knowledge_msgs/KnownLocationsRequest";
  }

  static const char* value(const ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KnownLocationsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::knowledge_msgs::KnownLocationsRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // KNOWLEDGE_MSGS_MESSAGE_KNOWNLOCATIONSREQUEST_H
