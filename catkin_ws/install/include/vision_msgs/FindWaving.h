// Generated by gencpp from file vision_msgs/FindWaving.msg
// DO NOT EDIT!


#ifndef VISION_MSGS_MESSAGE_FINDWAVING_H
#define VISION_MSGS_MESSAGE_FINDWAVING_H

#include <ros/service_traits.h>


#include <vision_msgs/FindWavingRequest.h>
#include <vision_msgs/FindWavingResponse.h>


namespace vision_msgs
{

struct FindWaving
{

typedef FindWavingRequest Request;
typedef FindWavingResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct FindWaving
} // namespace vision_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::vision_msgs::FindWaving > {
  static const char* value()
  {
    return "a5efa18c4fad16dbe94cb16a4d7151ec";
  }

  static const char* value(const ::vision_msgs::FindWaving&) { return value(); }
};

template<>
struct DataType< ::vision_msgs::FindWaving > {
  static const char* value()
  {
    return "vision_msgs/FindWaving";
  }

  static const char* value(const ::vision_msgs::FindWaving&) { return value(); }
};


// service_traits::MD5Sum< ::vision_msgs::FindWavingRequest> should match 
// service_traits::MD5Sum< ::vision_msgs::FindWaving > 
template<>
struct MD5Sum< ::vision_msgs::FindWavingRequest>
{
  static const char* value()
  {
    return MD5Sum< ::vision_msgs::FindWaving >::value();
  }
  static const char* value(const ::vision_msgs::FindWavingRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::vision_msgs::FindWavingRequest> should match 
// service_traits::DataType< ::vision_msgs::FindWaving > 
template<>
struct DataType< ::vision_msgs::FindWavingRequest>
{
  static const char* value()
  {
    return DataType< ::vision_msgs::FindWaving >::value();
  }
  static const char* value(const ::vision_msgs::FindWavingRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::vision_msgs::FindWavingResponse> should match 
// service_traits::MD5Sum< ::vision_msgs::FindWaving > 
template<>
struct MD5Sum< ::vision_msgs::FindWavingResponse>
{
  static const char* value()
  {
    return MD5Sum< ::vision_msgs::FindWaving >::value();
  }
  static const char* value(const ::vision_msgs::FindWavingResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::vision_msgs::FindWavingResponse> should match 
// service_traits::DataType< ::vision_msgs::FindWaving > 
template<>
struct DataType< ::vision_msgs::FindWavingResponse>
{
  static const char* value()
  {
    return DataType< ::vision_msgs::FindWaving >::value();
  }
  static const char* value(const ::vision_msgs::FindWavingResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // VISION_MSGS_MESSAGE_FINDWAVING_H