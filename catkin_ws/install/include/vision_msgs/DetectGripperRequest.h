// Generated by gencpp from file vision_msgs/DetectGripperRequest.msg
// DO NOT EDIT!


#ifndef VISION_MSGS_MESSAGE_DETECTGRIPPERREQUEST_H
#define VISION_MSGS_MESSAGE_DETECTGRIPPERREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace vision_msgs
{
template <class ContainerAllocator>
struct DetectGripperRequest_
{
  typedef DetectGripperRequest_<ContainerAllocator> Type;

  DetectGripperRequest_()
    {
    }
  DetectGripperRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DetectGripperRequest_

typedef ::vision_msgs::DetectGripperRequest_<std::allocator<void> > DetectGripperRequest;

typedef boost::shared_ptr< ::vision_msgs::DetectGripperRequest > DetectGripperRequestPtr;
typedef boost::shared_ptr< ::vision_msgs::DetectGripperRequest const> DetectGripperRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vision_msgs::DetectGripperRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace vision_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'vision_msgs': ['/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/vision/vision_msgs/msg', '/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/vision/vision_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::vision_msgs::DetectGripperRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vision_msgs/DetectGripperRequest";
  }

  static const char* value(const ::vision_msgs::DetectGripperRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::vision_msgs::DetectGripperRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DetectGripperRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vision_msgs::DetectGripperRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::vision_msgs::DetectGripperRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // VISION_MSGS_MESSAGE_DETECTGRIPPERREQUEST_H