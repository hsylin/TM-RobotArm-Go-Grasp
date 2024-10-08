// Generated by gencpp from file gqcnn/GQCNNGraspPlanner.msg
// DO NOT EDIT!


#ifndef GQCNN_MESSAGE_GQCNNGRASPPLANNER_H
#define GQCNN_MESSAGE_GQCNNGRASPPLANNER_H

#include <ros/service_traits.h>


#include <gqcnn/GQCNNGraspPlannerRequest.h>
#include <gqcnn/GQCNNGraspPlannerResponse.h>


namespace gqcnn
{

struct GQCNNGraspPlanner
{

typedef GQCNNGraspPlannerRequest Request;
typedef GQCNNGraspPlannerResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GQCNNGraspPlanner
} // namespace gqcnn


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::gqcnn::GQCNNGraspPlanner > {
  static const char* value()
  {
    return "be2b5a0ae6a907891671c87f1b537a42";
  }

  static const char* value(const ::gqcnn::GQCNNGraspPlanner&) { return value(); }
};

template<>
struct DataType< ::gqcnn::GQCNNGraspPlanner > {
  static const char* value()
  {
    return "gqcnn/GQCNNGraspPlanner";
  }

  static const char* value(const ::gqcnn::GQCNNGraspPlanner&) { return value(); }
};


// service_traits::MD5Sum< ::gqcnn::GQCNNGraspPlannerRequest> should match
// service_traits::MD5Sum< ::gqcnn::GQCNNGraspPlanner >
template<>
struct MD5Sum< ::gqcnn::GQCNNGraspPlannerRequest>
{
  static const char* value()
  {
    return MD5Sum< ::gqcnn::GQCNNGraspPlanner >::value();
  }
  static const char* value(const ::gqcnn::GQCNNGraspPlannerRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::gqcnn::GQCNNGraspPlannerRequest> should match
// service_traits::DataType< ::gqcnn::GQCNNGraspPlanner >
template<>
struct DataType< ::gqcnn::GQCNNGraspPlannerRequest>
{
  static const char* value()
  {
    return DataType< ::gqcnn::GQCNNGraspPlanner >::value();
  }
  static const char* value(const ::gqcnn::GQCNNGraspPlannerRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::gqcnn::GQCNNGraspPlannerResponse> should match
// service_traits::MD5Sum< ::gqcnn::GQCNNGraspPlanner >
template<>
struct MD5Sum< ::gqcnn::GQCNNGraspPlannerResponse>
{
  static const char* value()
  {
    return MD5Sum< ::gqcnn::GQCNNGraspPlanner >::value();
  }
  static const char* value(const ::gqcnn::GQCNNGraspPlannerResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::gqcnn::GQCNNGraspPlannerResponse> should match
// service_traits::DataType< ::gqcnn::GQCNNGraspPlanner >
template<>
struct DataType< ::gqcnn::GQCNNGraspPlannerResponse>
{
  static const char* value()
  {
    return DataType< ::gqcnn::GQCNNGraspPlanner >::value();
  }
  static const char* value(const ::gqcnn::GQCNNGraspPlannerResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // GQCNN_MESSAGE_GQCNNGRASPPLANNER_H
