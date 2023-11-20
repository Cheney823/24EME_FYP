// Generated by gencpp from file robotiq_ft_sensor/sensor_accessor.msg
// DO NOT EDIT!


#ifndef ROBOTIQ_FT_SENSOR_MESSAGE_SENSOR_ACCESSOR_H
#define ROBOTIQ_FT_SENSOR_MESSAGE_SENSOR_ACCESSOR_H

#include <ros/service_traits.h>


#include <robotiq_ft_sensor/sensor_accessorRequest.h>
#include <robotiq_ft_sensor/sensor_accessorResponse.h>


namespace robotiq_ft_sensor
{

struct sensor_accessor
{

typedef sensor_accessorRequest Request;
typedef sensor_accessorResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct sensor_accessor
} // namespace robotiq_ft_sensor


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::robotiq_ft_sensor::sensor_accessor > {
  static const char* value()
  {
    return "c8c699ce907261a9c404410e16c0ef0d";
  }

  static const char* value(const ::robotiq_ft_sensor::sensor_accessor&) { return value(); }
};

template<>
struct DataType< ::robotiq_ft_sensor::sensor_accessor > {
  static const char* value()
  {
    return "robotiq_ft_sensor/sensor_accessor";
  }

  static const char* value(const ::robotiq_ft_sensor::sensor_accessor&) { return value(); }
};


// service_traits::MD5Sum< ::robotiq_ft_sensor::sensor_accessorRequest> should match
// service_traits::MD5Sum< ::robotiq_ft_sensor::sensor_accessor >
template<>
struct MD5Sum< ::robotiq_ft_sensor::sensor_accessorRequest>
{
  static const char* value()
  {
    return MD5Sum< ::robotiq_ft_sensor::sensor_accessor >::value();
  }
  static const char* value(const ::robotiq_ft_sensor::sensor_accessorRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotiq_ft_sensor::sensor_accessorRequest> should match
// service_traits::DataType< ::robotiq_ft_sensor::sensor_accessor >
template<>
struct DataType< ::robotiq_ft_sensor::sensor_accessorRequest>
{
  static const char* value()
  {
    return DataType< ::robotiq_ft_sensor::sensor_accessor >::value();
  }
  static const char* value(const ::robotiq_ft_sensor::sensor_accessorRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::robotiq_ft_sensor::sensor_accessorResponse> should match
// service_traits::MD5Sum< ::robotiq_ft_sensor::sensor_accessor >
template<>
struct MD5Sum< ::robotiq_ft_sensor::sensor_accessorResponse>
{
  static const char* value()
  {
    return MD5Sum< ::robotiq_ft_sensor::sensor_accessor >::value();
  }
  static const char* value(const ::robotiq_ft_sensor::sensor_accessorResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::robotiq_ft_sensor::sensor_accessorResponse> should match
// service_traits::DataType< ::robotiq_ft_sensor::sensor_accessor >
template<>
struct DataType< ::robotiq_ft_sensor::sensor_accessorResponse>
{
  static const char* value()
  {
    return DataType< ::robotiq_ft_sensor::sensor_accessor >::value();
  }
  static const char* value(const ::robotiq_ft_sensor::sensor_accessorResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // ROBOTIQ_FT_SENSOR_MESSAGE_SENSOR_ACCESSOR_H
