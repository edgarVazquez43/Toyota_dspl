// Generated by gencpp from file manip_msgs/InverseKinematicsPath.msg
// DO NOT EDIT!


#ifndef MANIP_MSGS_MESSAGE_INVERSEKINEMATICSPATH_H
#define MANIP_MSGS_MESSAGE_INVERSEKINEMATICSPATH_H

#include <ros/service_traits.h>


#include <manip_msgs/InverseKinematicsPathRequest.h>
#include <manip_msgs/InverseKinematicsPathResponse.h>


namespace manip_msgs
{

struct InverseKinematicsPath
{

typedef InverseKinematicsPathRequest Request;
typedef InverseKinematicsPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct InverseKinematicsPath
} // namespace manip_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::manip_msgs::InverseKinematicsPath > {
  static const char* value()
  {
    return "a5c97a40ea2d6c552050c61cfc35f302";
  }

  static const char* value(const ::manip_msgs::InverseKinematicsPath&) { return value(); }
};

template<>
struct DataType< ::manip_msgs::InverseKinematicsPath > {
  static const char* value()
  {
    return "manip_msgs/InverseKinematicsPath";
  }

  static const char* value(const ::manip_msgs::InverseKinematicsPath&) { return value(); }
};


// service_traits::MD5Sum< ::manip_msgs::InverseKinematicsPathRequest> should match 
// service_traits::MD5Sum< ::manip_msgs::InverseKinematicsPath > 
template<>
struct MD5Sum< ::manip_msgs::InverseKinematicsPathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::manip_msgs::InverseKinematicsPath >::value();
  }
  static const char* value(const ::manip_msgs::InverseKinematicsPathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::manip_msgs::InverseKinematicsPathRequest> should match 
// service_traits::DataType< ::manip_msgs::InverseKinematicsPath > 
template<>
struct DataType< ::manip_msgs::InverseKinematicsPathRequest>
{
  static const char* value()
  {
    return DataType< ::manip_msgs::InverseKinematicsPath >::value();
  }
  static const char* value(const ::manip_msgs::InverseKinematicsPathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::manip_msgs::InverseKinematicsPathResponse> should match 
// service_traits::MD5Sum< ::manip_msgs::InverseKinematicsPath > 
template<>
struct MD5Sum< ::manip_msgs::InverseKinematicsPathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::manip_msgs::InverseKinematicsPath >::value();
  }
  static const char* value(const ::manip_msgs::InverseKinematicsPathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::manip_msgs::InverseKinematicsPathResponse> should match 
// service_traits::DataType< ::manip_msgs::InverseKinematicsPath > 
template<>
struct DataType< ::manip_msgs::InverseKinematicsPathResponse>
{
  static const char* value()
  {
    return DataType< ::manip_msgs::InverseKinematicsPath >::value();
  }
  static const char* value(const ::manip_msgs::InverseKinematicsPathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MANIP_MSGS_MESSAGE_INVERSEKINEMATICSPATH_H
