// Generated by gencpp from file knowledge_msgs/AddUpdateKnownLocRequest.msg
// DO NOT EDIT!


#ifndef KNOWLEDGE_MSGS_MESSAGE_ADDUPDATEKNOWNLOCREQUEST_H
#define KNOWLEDGE_MSGS_MESSAGE_ADDUPDATEKNOWNLOCREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <knowledge_msgs/MapKnownLocation.h>

namespace knowledge_msgs
{
template <class ContainerAllocator>
struct AddUpdateKnownLocRequest_
{
  typedef AddUpdateKnownLocRequest_<ContainerAllocator> Type;

  AddUpdateKnownLocRequest_()
    : loc()  {
    }
  AddUpdateKnownLocRequest_(const ContainerAllocator& _alloc)
    : loc(_alloc)  {
  (void)_alloc;
    }



   typedef  ::knowledge_msgs::MapKnownLocation_<ContainerAllocator>  _loc_type;
  _loc_type loc;




  typedef boost::shared_ptr< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AddUpdateKnownLocRequest_

typedef ::knowledge_msgs::AddUpdateKnownLocRequest_<std::allocator<void> > AddUpdateKnownLocRequest;

typedef boost::shared_ptr< ::knowledge_msgs::AddUpdateKnownLocRequest > AddUpdateKnownLocRequestPtr;
typedef boost::shared_ptr< ::knowledge_msgs::AddUpdateKnownLocRequest const> AddUpdateKnownLocRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace knowledge_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'vision_msgs': ['/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/vision/vision_msgs/msg'], 'knowledge_msgs': ['/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/planning/knowledge_msgs/msg', '/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/planning/knowledge_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c8eea2400325e7fa5b296976b0201acc";
  }

  static const char* value(const ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc8eea2400325e7faULL;
  static const uint64_t static_value2 = 0x5b296976b0201accULL;
};

template<class ContainerAllocator>
struct DataType< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "knowledge_msgs/AddUpdateKnownLocRequest";
  }

  static const char* value(const ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MapKnownLocation loc\n\
\n\
================================================================================\n\
MSG: knowledge_msgs/MapKnownLocation\n\
string name\n\
float32[] value\n\
";
  }

  static const char* value(const ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.loc);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AddUpdateKnownLocRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::knowledge_msgs::AddUpdateKnownLocRequest_<ContainerAllocator>& v)
  {
    s << indent << "loc: ";
    s << std::endl;
    Printer< ::knowledge_msgs::MapKnownLocation_<ContainerAllocator> >::stream(s, indent + "  ", v.loc);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KNOWLEDGE_MSGS_MESSAGE_ADDUPDATEKNOWNLOCREQUEST_H
