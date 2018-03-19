// Generated by gencpp from file vision_msgs/GetPanoramicRequest.msg
// DO NOT EDIT!


#ifndef VISION_MSGS_MESSAGE_GETPANORAMICREQUEST_H
#define VISION_MSGS_MESSAGE_GETPANORAMICREQUEST_H


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
struct GetPanoramicRequest_
{
  typedef GetPanoramicRequest_<ContainerAllocator> Type;

  GetPanoramicRequest_()
    : head_pan_min(0.0)
    , head_pan_max(0.0)
    , head_tilt_min(0.0)
    , head_tilt_max(0.0)  {
    }
  GetPanoramicRequest_(const ContainerAllocator& _alloc)
    : head_pan_min(0.0)
    , head_pan_max(0.0)
    , head_tilt_min(0.0)
    , head_tilt_max(0.0)  {
  (void)_alloc;
    }



   typedef float _head_pan_min_type;
  _head_pan_min_type head_pan_min;

   typedef float _head_pan_max_type;
  _head_pan_max_type head_pan_max;

   typedef float _head_tilt_min_type;
  _head_tilt_min_type head_tilt_min;

   typedef float _head_tilt_max_type;
  _head_tilt_max_type head_tilt_max;




  typedef boost::shared_ptr< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPanoramicRequest_

typedef ::vision_msgs::GetPanoramicRequest_<std::allocator<void> > GetPanoramicRequest;

typedef boost::shared_ptr< ::vision_msgs::GetPanoramicRequest > GetPanoramicRequestPtr;
typedef boost::shared_ptr< ::vision_msgs::GetPanoramicRequest const> GetPanoramicRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b149da6f54b371a0f2a877e89f17bd10";
  }

  static const char* value(const ::vision_msgs::GetPanoramicRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb149da6f54b371a0ULL;
  static const uint64_t static_value2 = 0xf2a877e89f17bd10ULL;
};

template<class ContainerAllocator>
struct DataType< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "vision_msgs/GetPanoramicRequest";
  }

  static const char* value(const ::vision_msgs::GetPanoramicRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 head_pan_min\n\
float32 head_pan_max\n\
float32 head_tilt_min\n\
float32 head_tilt_max\n\
";
  }

  static const char* value(const ::vision_msgs::GetPanoramicRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.head_pan_min);
      stream.next(m.head_pan_max);
      stream.next(m.head_tilt_min);
      stream.next(m.head_tilt_max);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPanoramicRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::vision_msgs::GetPanoramicRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::vision_msgs::GetPanoramicRequest_<ContainerAllocator>& v)
  {
    s << indent << "head_pan_min: ";
    Printer<float>::stream(s, indent + "  ", v.head_pan_min);
    s << indent << "head_pan_max: ";
    Printer<float>::stream(s, indent + "  ", v.head_pan_max);
    s << indent << "head_tilt_min: ";
    Printer<float>::stream(s, indent + "  ", v.head_tilt_min);
    s << indent << "head_tilt_max: ";
    Printer<float>::stream(s, indent + "  ", v.head_tilt_max);
  }
};

} // namespace message_operations
} // namespace ros

#endif // VISION_MSGS_MESSAGE_GETPANORAMICREQUEST_H
