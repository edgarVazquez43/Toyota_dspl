// Generated by gencpp from file sp_rec/ActivateDictionariesResponse.msg
// DO NOT EDIT!


#ifndef SP_REC_MESSAGE_ACTIVATEDICTIONARIESRESPONSE_H
#define SP_REC_MESSAGE_ACTIVATEDICTIONARIESRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace sp_rec
{
template <class ContainerAllocator>
struct ActivateDictionariesResponse_
{
  typedef ActivateDictionariesResponse_<ContainerAllocator> Type;

  ActivateDictionariesResponse_()
    : result(false)
    , message()  {
    }
  ActivateDictionariesResponse_(const ContainerAllocator& _alloc)
    : result(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _result_type;
  _result_type result;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;




  typedef boost::shared_ptr< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> const> ConstPtr;

}; // struct ActivateDictionariesResponse_

typedef ::sp_rec::ActivateDictionariesResponse_<std::allocator<void> > ActivateDictionariesResponse;

typedef boost::shared_ptr< ::sp_rec::ActivateDictionariesResponse > ActivateDictionariesResponsePtr;
typedef boost::shared_ptr< ::sp_rec::ActivateDictionariesResponse const> ActivateDictionariesResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sp_rec

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b543fbd3518c791be28589b850702201";
  }

  static const char* value(const ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb543fbd3518c791bULL;
  static const uint64_t static_value2 = 0xe28589b850702201ULL;
};

template<class ContainerAllocator>
struct DataType< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sp_rec/ActivateDictionariesResponse";
  }

  static const char* value(const ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
\n\
bool result\n\
\n\
\n\
string message\n\
\n\
";
  }

  static const char* value(const ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ActivateDictionariesResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sp_rec::ActivateDictionariesResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.result);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SP_REC_MESSAGE_ACTIVATEDICTIONARIESRESPONSE_H
