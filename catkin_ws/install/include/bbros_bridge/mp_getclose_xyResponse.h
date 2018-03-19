// Generated by gencpp from file bbros_bridge/mp_getclose_xyResponse.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYRESPONSE_H
#define BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace bbros_bridge
{
template <class ContainerAllocator>
struct mp_getclose_xyResponse_
{
  typedef mp_getclose_xyResponse_<ContainerAllocator> Type;

  mp_getclose_xyResponse_()
    : error()  {
    }
  mp_getclose_xyResponse_(const ContainerAllocator& _alloc)
    : error(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _error_type;
  _error_type error;




  typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> const> ConstPtr;

}; // struct mp_getclose_xyResponse_

typedef ::bbros_bridge::mp_getclose_xyResponse_<std::allocator<void> > mp_getclose_xyResponse;

typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyResponse > mp_getclose_xyResponsePtr;
typedef boost::shared_ptr< ::bbros_bridge::mp_getclose_xyResponse const> mp_getclose_xyResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace bbros_bridge

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'bbros_bridge': ['/home/hsr_pumas/HSR_PUMAS/catkin_ws/src/interoperation/bbros_bridge/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "52f61832eab3a7c7b495ac0b338dd373";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x52f61832eab3a7c7ULL;
  static const uint64_t static_value2 = 0xb495ac0b338dd373ULL;
};

template<class ContainerAllocator>
struct DataType< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bbros_bridge/mp_getclose_xyResponse";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String error\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mp_getclose_xyResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::bbros_bridge::mp_getclose_xyResponse_<ContainerAllocator>& v)
  {
    s << indent << "error: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.error);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_MP_GETCLOSE_XYRESPONSE_H
