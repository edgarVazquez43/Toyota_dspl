// Generated by gencpp from file manip_msgs/InverseKinematicsFloatArray.msg
// DO NOT EDIT!


#ifndef MANIP_MSGS_MESSAGE_INVERSEKINEMATICSFLOATARRAY_H
#define MANIP_MSGS_MESSAGE_INVERSEKINEMATICSFLOATARRAY_H

#include <ros/service_traits.h>


#include <manip_msgs/InverseKinematicsFloatArrayRequest.h>
#include <manip_msgs/InverseKinematicsFloatArrayResponse.h>


namespace manip_msgs
{

struct InverseKinematicsFloatArray
{

typedef InverseKinematicsFloatArrayRequest Request;
typedef InverseKinematicsFloatArrayResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct InverseKinematicsFloatArray
} // namespace manip_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::manip_msgs::InverseKinematicsFloatArray > {
  static const char* value()
  {
    return "5286aef9c86ebe7d94286a61bc7ebe60";
  }

  static const char* value(const ::manip_msgs::InverseKinematicsFloatArray&) { return value(); }
};

template<>
struct DataType< ::manip_msgs::InverseKinematicsFloatArray > {
  static const char* value()
  {
    return "manip_msgs/InverseKinematicsFloatArray";
  }

  static const char* value(const ::manip_msgs::InverseKinematicsFloatArray&) { return value(); }
};


// service_traits::MD5Sum< ::manip_msgs::InverseKinematicsFloatArrayRequest> should match 
// service_traits::MD5Sum< ::manip_msgs::InverseKinematicsFloatArray > 
template<>
struct MD5Sum< ::manip_msgs::InverseKinematicsFloatArrayRequest>
{
  static const char* value()
  {
    return MD5Sum< ::manip_msgs::InverseKinematicsFloatArray >::value();
  }
  static const char* value(const ::manip_msgs::InverseKinematicsFloatArrayRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::manip_msgs::InverseKinematicsFloatArrayRequest> should match 
// service_traits::DataType< ::manip_msgs::InverseKinematicsFloatArray > 
template<>
struct DataType< ::manip_msgs::InverseKinematicsFloatArrayRequest>
{
  static const char* value()
  {
    return DataType< ::manip_msgs::InverseKinematicsFloatArray >::value();
  }
  static const char* value(const ::manip_msgs::InverseKinematicsFloatArrayRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::manip_msgs::InverseKinematicsFloatArrayResponse> should match 
// service_traits::MD5Sum< ::manip_msgs::InverseKinematicsFloatArray > 
template<>
struct MD5Sum< ::manip_msgs::InverseKinematicsFloatArrayResponse>
{
  static const char* value()
  {
    return MD5Sum< ::manip_msgs::InverseKinematicsFloatArray >::value();
  }
  static const char* value(const ::manip_msgs::InverseKinematicsFloatArrayResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::manip_msgs::InverseKinematicsFloatArrayResponse> should match 
// service_traits::DataType< ::manip_msgs::InverseKinematicsFloatArray > 
template<>
struct DataType< ::manip_msgs::InverseKinematicsFloatArrayResponse>
{
  static const char* value()
  {
    return DataType< ::manip_msgs::InverseKinematicsFloatArray >::value();
  }
  static const char* value(const ::manip_msgs::InverseKinematicsFloatArrayResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MANIP_MSGS_MESSAGE_INVERSEKINEMATICSFLOATARRAY_H
