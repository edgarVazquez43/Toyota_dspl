// Generated by gencpp from file bbros_bridge/Default_ROS_BB_Bridge.msg
// DO NOT EDIT!


#ifndef BBROS_BRIDGE_MESSAGE_DEFAULT_ROS_BB_BRIDGE_H
#define BBROS_BRIDGE_MESSAGE_DEFAULT_ROS_BB_BRIDGE_H

#include <ros/service_traits.h>


#include <bbros_bridge/Default_ROS_BB_BridgeRequest.h>
#include <bbros_bridge/Default_ROS_BB_BridgeResponse.h>


namespace bbros_bridge
{

struct Default_ROS_BB_Bridge
{

typedef Default_ROS_BB_BridgeRequest Request;
typedef Default_ROS_BB_BridgeResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Default_ROS_BB_Bridge
} // namespace bbros_bridge


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::bbros_bridge::Default_ROS_BB_Bridge > {
  static const char* value()
  {
    return "dc72b6691678f98c1cd8b4c963031bd5";
  }

  static const char* value(const ::bbros_bridge::Default_ROS_BB_Bridge&) { return value(); }
};

template<>
struct DataType< ::bbros_bridge::Default_ROS_BB_Bridge > {
  static const char* value()
  {
    return "bbros_bridge/Default_ROS_BB_Bridge";
  }

  static const char* value(const ::bbros_bridge::Default_ROS_BB_Bridge&) { return value(); }
};


// service_traits::MD5Sum< ::bbros_bridge::Default_ROS_BB_BridgeRequest> should match 
// service_traits::MD5Sum< ::bbros_bridge::Default_ROS_BB_Bridge > 
template<>
struct MD5Sum< ::bbros_bridge::Default_ROS_BB_BridgeRequest>
{
  static const char* value()
  {
    return MD5Sum< ::bbros_bridge::Default_ROS_BB_Bridge >::value();
  }
  static const char* value(const ::bbros_bridge::Default_ROS_BB_BridgeRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::bbros_bridge::Default_ROS_BB_BridgeRequest> should match 
// service_traits::DataType< ::bbros_bridge::Default_ROS_BB_Bridge > 
template<>
struct DataType< ::bbros_bridge::Default_ROS_BB_BridgeRequest>
{
  static const char* value()
  {
    return DataType< ::bbros_bridge::Default_ROS_BB_Bridge >::value();
  }
  static const char* value(const ::bbros_bridge::Default_ROS_BB_BridgeRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::bbros_bridge::Default_ROS_BB_BridgeResponse> should match 
// service_traits::MD5Sum< ::bbros_bridge::Default_ROS_BB_Bridge > 
template<>
struct MD5Sum< ::bbros_bridge::Default_ROS_BB_BridgeResponse>
{
  static const char* value()
  {
    return MD5Sum< ::bbros_bridge::Default_ROS_BB_Bridge >::value();
  }
  static const char* value(const ::bbros_bridge::Default_ROS_BB_BridgeResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::bbros_bridge::Default_ROS_BB_BridgeResponse> should match 
// service_traits::DataType< ::bbros_bridge::Default_ROS_BB_Bridge > 
template<>
struct DataType< ::bbros_bridge::Default_ROS_BB_BridgeResponse>
{
  static const char* value()
  {
    return DataType< ::bbros_bridge::Default_ROS_BB_Bridge >::value();
  }
  static const char* value(const ::bbros_bridge::Default_ROS_BB_BridgeResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // BBROS_BRIDGE_MESSAGE_DEFAULT_ROS_BB_BRIDGE_H
