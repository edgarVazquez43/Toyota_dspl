// Generated by gencpp from file knowledge_msgs/place_object.msg
// DO NOT EDIT!


#ifndef KNOWLEDGE_MSGS_MESSAGE_PLACE_OBJECT_H
#define KNOWLEDGE_MSGS_MESSAGE_PLACE_OBJECT_H

#include <ros/service_traits.h>


#include <knowledge_msgs/place_objectRequest.h>
#include <knowledge_msgs/place_objectResponse.h>


namespace knowledge_msgs
{

struct place_object
{

typedef place_objectRequest Request;
typedef place_objectResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct place_object
} // namespace knowledge_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::knowledge_msgs::place_object > {
  static const char* value()
  {
    return "72e5fc1d3c709f9c79fea87497774dd9";
  }

  static const char* value(const ::knowledge_msgs::place_object&) { return value(); }
};

template<>
struct DataType< ::knowledge_msgs::place_object > {
  static const char* value()
  {
    return "knowledge_msgs/place_object";
  }

  static const char* value(const ::knowledge_msgs::place_object&) { return value(); }
};


// service_traits::MD5Sum< ::knowledge_msgs::place_objectRequest> should match 
// service_traits::MD5Sum< ::knowledge_msgs::place_object > 
template<>
struct MD5Sum< ::knowledge_msgs::place_objectRequest>
{
  static const char* value()
  {
    return MD5Sum< ::knowledge_msgs::place_object >::value();
  }
  static const char* value(const ::knowledge_msgs::place_objectRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::knowledge_msgs::place_objectRequest> should match 
// service_traits::DataType< ::knowledge_msgs::place_object > 
template<>
struct DataType< ::knowledge_msgs::place_objectRequest>
{
  static const char* value()
  {
    return DataType< ::knowledge_msgs::place_object >::value();
  }
  static const char* value(const ::knowledge_msgs::place_objectRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::knowledge_msgs::place_objectResponse> should match 
// service_traits::MD5Sum< ::knowledge_msgs::place_object > 
template<>
struct MD5Sum< ::knowledge_msgs::place_objectResponse>
{
  static const char* value()
  {
    return MD5Sum< ::knowledge_msgs::place_object >::value();
  }
  static const char* value(const ::knowledge_msgs::place_objectResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::knowledge_msgs::place_objectResponse> should match 
// service_traits::DataType< ::knowledge_msgs::place_object > 
template<>
struct DataType< ::knowledge_msgs::place_objectResponse>
{
  static const char* value()
  {
    return DataType< ::knowledge_msgs::place_object >::value();
  }
  static const char* value(const ::knowledge_msgs::place_objectResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // KNOWLEDGE_MSGS_MESSAGE_PLACE_OBJECT_H
