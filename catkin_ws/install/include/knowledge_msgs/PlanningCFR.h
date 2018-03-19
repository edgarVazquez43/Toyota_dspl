// Generated by gencpp from file knowledge_msgs/PlanningCFR.msg
// DO NOT EDIT!


#ifndef KNOWLEDGE_MSGS_MESSAGE_PLANNINGCFR_H
#define KNOWLEDGE_MSGS_MESSAGE_PLANNINGCFR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <knowledge_msgs/CFRParams.h>

namespace knowledge_msgs
{
template <class ContainerAllocator>
struct PlanningCFR_
{
  typedef PlanningCFR_<ContainerAllocator> Type;

  PlanningCFR_()
    : command()
    , params()  {
    }
  PlanningCFR_(const ContainerAllocator& _alloc)
    : command(_alloc)
    , params(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _command_type;
  _command_type command;

   typedef std::vector< ::knowledge_msgs::CFRParams_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::knowledge_msgs::CFRParams_<ContainerAllocator> >::other >  _params_type;
  _params_type params;




  typedef boost::shared_ptr< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> const> ConstPtr;

}; // struct PlanningCFR_

typedef ::knowledge_msgs::PlanningCFR_<std::allocator<void> > PlanningCFR;

typedef boost::shared_ptr< ::knowledge_msgs::PlanningCFR > PlanningCFRPtr;
typedef boost::shared_ptr< ::knowledge_msgs::PlanningCFR const> PlanningCFRConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::knowledge_msgs::PlanningCFR_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1bda369640b5ce77a1917aec327930a1";
  }

  static const char* value(const ::knowledge_msgs::PlanningCFR_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1bda369640b5ce77ULL;
  static const uint64_t static_value2 = 0xa1917aec327930a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "knowledge_msgs/PlanningCFR";
  }

  static const char* value(const ::knowledge_msgs::PlanningCFR_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string command\n\
CFRParams[] params\n\
\n\
================================================================================\n\
MSG: knowledge_msgs/CFRParams\n\
string frame_id\n\
string frame_value\n\
";
  }

  static const char* value(const ::knowledge_msgs::PlanningCFR_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.command);
      stream.next(m.params);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlanningCFR_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::knowledge_msgs::PlanningCFR_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::knowledge_msgs::PlanningCFR_<ContainerAllocator>& v)
  {
    s << indent << "command: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.command);
    s << indent << "params[]" << std::endl;
    for (size_t i = 0; i < v.params.size(); ++i)
    {
      s << indent << "  params[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::knowledge_msgs::CFRParams_<ContainerAllocator> >::stream(s, indent + "    ", v.params[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // KNOWLEDGE_MSGS_MESSAGE_PLANNINGCFR_H
