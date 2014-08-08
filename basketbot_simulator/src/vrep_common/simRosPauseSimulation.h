/* Auto-generated by genmsg_cpp for file /home/matteo/catkin_ws/src/vrep/vrep_common/srv/simRosPauseSimulation.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSPAUSESIMULATION_H
#define VREP_COMMON_SERVICE_SIMROSPAUSESIMULATION_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"




namespace vrep_common
{
template <class ContainerAllocator>
struct simRosPauseSimulationRequest_ {
  typedef simRosPauseSimulationRequest_<ContainerAllocator> Type;

  simRosPauseSimulationRequest_()
  {
  }

  simRosPauseSimulationRequest_(const ContainerAllocator& _alloc)
  {
  }


  typedef boost::shared_ptr< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosPauseSimulationRequest
typedef  ::vrep_common::simRosPauseSimulationRequest_<std::allocator<void> > simRosPauseSimulationRequest;

typedef boost::shared_ptr< ::vrep_common::simRosPauseSimulationRequest> simRosPauseSimulationRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosPauseSimulationRequest const> simRosPauseSimulationRequestConstPtr;



template <class ContainerAllocator>
struct simRosPauseSimulationResponse_ {
  typedef simRosPauseSimulationResponse_<ContainerAllocator> Type;

  simRosPauseSimulationResponse_()
  : result(0)
  {
  }

  simRosPauseSimulationResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;


  typedef boost::shared_ptr< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosPauseSimulationResponse
typedef  ::vrep_common::simRosPauseSimulationResponse_<std::allocator<void> > simRosPauseSimulationResponse;

typedef boost::shared_ptr< ::vrep_common::simRosPauseSimulationResponse> simRosPauseSimulationResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosPauseSimulationResponse const> simRosPauseSimulationResponseConstPtr;


struct simRosPauseSimulation
{

typedef simRosPauseSimulationRequest Request;
typedef simRosPauseSimulationResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosPauseSimulation
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const  ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosPauseSimulationRequest";
  }

  static const char* value(const  ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const  ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosPauseSimulationResponse";
  }

  static const char* value(const  ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 result\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosPauseSimulationRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosPauseSimulationResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosPauseSimulation> {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const vrep_common::simRosPauseSimulation&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosPauseSimulation> {
  static const char* value() 
  {
    return "vrep_common/simRosPauseSimulation";
  }

  static const char* value(const vrep_common::simRosPauseSimulation&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosPauseSimulation";
  }

  static const char* value(const vrep_common::simRosPauseSimulationRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosPauseSimulation";
  }

  static const char* value(const vrep_common::simRosPauseSimulationResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSPAUSESIMULATION_H
