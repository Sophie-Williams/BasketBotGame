/* Auto-generated by genmsg_cpp for file /home/matteo/catkin_ws/src/vrep/vrep_common/srv/simRosSetJointPosition.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSSETJOINTPOSITION_H
#define VREP_COMMON_SERVICE_SIMROSSETJOINTPOSITION_H
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
struct simRosSetJointPositionRequest_ {
  typedef simRosSetJointPositionRequest_<ContainerAllocator> Type;

  simRosSetJointPositionRequest_()
  : handle(0)
  , position(0.0)
  {
  }

  simRosSetJointPositionRequest_(const ContainerAllocator& _alloc)
  : handle(0)
  , position(0.0)
  {
  }

  typedef int32_t _handle_type;
  int32_t handle;

  typedef double _position_type;
  double position;


  typedef boost::shared_ptr< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosSetJointPositionRequest
typedef  ::vrep_common::simRosSetJointPositionRequest_<std::allocator<void> > simRosSetJointPositionRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetJointPositionRequest> simRosSetJointPositionRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetJointPositionRequest const> simRosSetJointPositionRequestConstPtr;



template <class ContainerAllocator>
struct simRosSetJointPositionResponse_ {
  typedef simRosSetJointPositionResponse_<ContainerAllocator> Type;

  simRosSetJointPositionResponse_()
  : result(0)
  {
  }

  simRosSetJointPositionResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;


  typedef boost::shared_ptr< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosSetJointPositionResponse
typedef  ::vrep_common::simRosSetJointPositionResponse_<std::allocator<void> > simRosSetJointPositionResponse;

typedef boost::shared_ptr< ::vrep_common::simRosSetJointPositionResponse> simRosSetJointPositionResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetJointPositionResponse const> simRosSetJointPositionResponseConstPtr;


struct simRosSetJointPosition
{

typedef simRosSetJointPositionRequest Request;
typedef simRosSetJointPositionResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosSetJointPosition
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e628527e6b66a50ae279ed5e0b1eaea0";
  }

  static const char* value(const  ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe628527e6b66a50aULL;
  static const uint64_t static_value2 = 0xe279ed5e0b1eaea0ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointPositionRequest";
  }

  static const char* value(const  ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
int32 handle\n\
float64 position\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const  ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointPositionResponse";
  }

  static const char* value(const  ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 result\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.handle);
    stream.next(m.position);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosSetJointPositionRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosSetJointPositionResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosSetJointPosition> {
  static const char* value() 
  {
    return "126349edc9c2951f8756d658f1fbb6a6";
  }

  static const char* value(const vrep_common::simRosSetJointPosition&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosSetJointPosition> {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointPosition";
  }

  static const char* value(const vrep_common::simRosSetJointPosition&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "126349edc9c2951f8756d658f1fbb6a6";
  }

  static const char* value(const vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointPosition";
  }

  static const char* value(const vrep_common::simRosSetJointPositionRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "126349edc9c2951f8756d658f1fbb6a6";
  }

  static const char* value(const vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointPosition";
  }

  static const char* value(const vrep_common::simRosSetJointPositionResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSSETJOINTPOSITION_H
