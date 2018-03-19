// Generated by gencpp from file manip_msgs/DirectKinematicsFloatArray.msg
// DO NOT EDIT!


#ifndef MANIP_MSGS_MESSAGE_DIRECTKINEMATICSFLOATARRAY_H
#define MANIP_MSGS_MESSAGE_DIRECTKINEMATICSFLOATARRAY_H

#include <ros/service_traits.h>


#include <manip_msgs/DirectKinematicsFloatArrayRequest.h>
#include <manip_msgs/DirectKinematicsFloatArrayResponse.h>


namespace manip_msgs
{

struct DirectKinematicsFloatArray
{

typedef DirectKinematicsFloatArrayRequest Request;
typedef DirectKinematicsFloatArrayResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct DirectKinematicsFloatArray
} // namespace manip_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::manip_msgs::DirectKinematicsFloatArray > {
  static const char* value()
  {
    return "6d3e3a04e953772f57d61cd8e812ab2e";
  }

  static const char* value(const ::manip_msgs::DirectKinematicsFloatArray&) { return value(); }
};

template<>
struct DataType< ::manip_msgs::DirectKinematicsFloatArray > {
  static const char* value()
  {
    return "manip_msgs/DirectKinematicsFloatArray";
  }

  static const char* value(const ::manip_msgs::DirectKinematicsFloatArray&) { return value(); }
};


// service_traits::MD5Sum< ::manip_msgs::DirectKinematicsFloatArrayRequest> should match 
// service_traits::MD5Sum< ::manip_msgs::DirectKinematicsFloatArray > 
template<>
struct MD5Sum< ::manip_msgs::DirectKinematicsFloatArrayRequest>
{
  static const char* value()
  {
    return MD5Sum< ::manip_msgs::DirectKinematicsFloatArray >::value();
  }
  static const char* value(const ::manip_msgs::DirectKinematicsFloatArrayRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::manip_msgs::DirectKinematicsFloatArrayRequest> should match 
// service_traits::DataType< ::manip_msgs::DirectKinematicsFloatArray > 
template<>
struct DataType< ::manip_msgs::DirectKinematicsFloatArrayRequest>
{
  static const char* value()
  {
    return DataType< ::manip_msgs::DirectKinematicsFloatArray >::value();
  }
  static const char* value(const ::manip_msgs::DirectKinematicsFloatArrayRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::manip_msgs::DirectKinematicsFloatArrayResponse> should match 
// service_traits::MD5Sum< ::manip_msgs::DirectKinematicsFloatArray > 
template<>
struct MD5Sum< ::manip_msgs::DirectKinematicsFloatArrayResponse>
{
  static const char* value()
  {
    return MD5Sum< ::manip_msgs::DirectKinematicsFloatArray >::value();
  }
  static const char* value(const ::manip_msgs::DirectKinematicsFloatArrayResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::manip_msgs::DirectKinematicsFloatArrayResponse> should match 
// service_traits::DataType< ::manip_msgs::DirectKinematicsFloatArray > 
template<>
struct DataType< ::manip_msgs::DirectKinematicsFloatArrayResponse>
{
  static const char* value()
  {
    return DataType< ::manip_msgs::DirectKinematicsFloatArray >::value();
  }
  static const char* value(const ::manip_msgs::DirectKinematicsFloatArrayResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MANIP_MSGS_MESSAGE_DIRECTKINEMATICSFLOATARRAY_H
