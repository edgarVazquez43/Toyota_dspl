// Generated by gencpp from file knowledge_msgs/StrQueryKDBResponse.msg
// DO NOT EDIT!


#ifndef KNOWLEDGE_MSGS_MESSAGE_STRQUERYKDBRESPONSE_H
#define KNOWLEDGE_MSGS_MESSAGE_STRQUERYKDBRESPONSE_H


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
struct StrQueryKDBResponse_
{
  typedef StrQueryKDBResponse_<ContainerAllocator> Type;

  StrQueryKDBResponse_()
    : result()  {
    }
  StrQueryKDBResponse_(const ContainerAllocator& _alloc)
    : result(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _result_type;
  _result_type result;




  typedef boost::shared_ptr< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> const> ConstPtr;

}; // struct StrQueryKDBResponse_

typedef ::knowledge_msgs::StrQueryKDBResponse_<std::allocator<void> > StrQueryKDBResponse;

typedef boost::shared_ptr< ::knowledge_msgs::StrQueryKDBResponse > StrQueryKDBResponsePtr;
typedef boost::shared_ptr< ::knowledge_msgs::StrQueryKDBResponse const> StrQueryKDBResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c22f2a1ed8654a0b365f1bb3f7ff2c0f";
  }

  static const char* value(const ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc22f2a1ed8654a0bULL;
  static const uint64_t static_value2 = 0x365f1bb3f7ff2c0fULL;
};

template<class ContainerAllocator>
struct DataType< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "knowledge_msgs/StrQueryKDBResponse";
  }

  static const char* value(const ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string result\n\
\n\
";
  }

  static const char* value(const ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StrQueryKDBResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::knowledge_msgs::StrQueryKDBResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // KNOWLEDGE_MSGS_MESSAGE_STRQUERYKDBRESPONSE_H
