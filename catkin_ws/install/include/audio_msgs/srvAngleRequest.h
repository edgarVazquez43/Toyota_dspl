// Generated by gencpp from file audio_msgs/srvAngleRequest.msg
// DO NOT EDIT!


#ifndef AUDIO_MSGS_MESSAGE_SRVANGLEREQUEST_H
#define AUDIO_MSGS_MESSAGE_SRVANGLEREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace audio_msgs
{
template <class ContainerAllocator>
struct srvAngleRequest_
{
  typedef srvAngleRequest_<ContainerAllocator> Type;

  srvAngleRequest_()
    {
    }
  srvAngleRequest_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::audio_msgs::srvAngleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::audio_msgs::srvAngleRequest_<ContainerAllocator> const> ConstPtr;

}; // struct srvAngleRequest_

typedef ::audio_msgs::srvAngleRequest_<std::allocator<void> > srvAngleRequest;

typedef boost::shared_ptr< ::audio_msgs::srvAngleRequest > srvAngleRequestPtr;
typedef boost::shared_ptr< ::audio_msgs::srvAngleRequest const> srvAngleRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::audio_msgs::srvAngleRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace audio_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::audio_msgs::srvAngleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::audio_msgs::srvAngleRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::audio_msgs::srvAngleRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::audio_msgs::srvAngleRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "audio_msgs/srvAngleRequest";
  }

  static const char* value(const ::audio_msgs::srvAngleRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::audio_msgs::srvAngleRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct srvAngleRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::audio_msgs::srvAngleRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::audio_msgs::srvAngleRequest_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // AUDIO_MSGS_MESSAGE_SRVANGLEREQUEST_H