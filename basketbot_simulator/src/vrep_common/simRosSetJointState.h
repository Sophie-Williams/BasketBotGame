/* Auto-generated by genmsg_cpp for file /home/matteo/catkin_ws/src/vrep/vrep_common/srv/simRosSetJointState.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSSETJOINTSTATE_H
#define VREP_COMMON_SERVICE_SIMROSSETJOINTSTATE_H
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
struct simRosSetJointStateRequest_ {
  typedef simRosSetJointStateRequest_<ContainerAllocator> Type;

  simRosSetJointStateRequest_()
  : handles()
  , setModes()
  , values()
  {
  }

  simRosSetJointStateRequest_(const ContainerAllocator& _alloc)
  : handles(_alloc)
  , setModes(_alloc)
  , values(_alloc)
  {
  }

  typedef std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  _handles_type;
  std::vector<int32_t, typename ContainerAllocator::template rebind<int32_t>::other >  handles;

  typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _setModes_type;
  std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  setModes;

  typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _values_type;
  std::vector<float, typename ContainerAllocator::template rebind<float>::other >  values;


  typedef boost::shared_ptr< ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosSetJointStateRequest
typedef  ::vrep_common::simRosSetJointStateRequest_<std::allocator<void> > simRosSetJointStateRequest;

typedef boost::shared_ptr< ::vrep_common::simRosSetJointStateRequest> simRosSetJointStateRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetJointStateRequest const> simRosSetJointStateRequestConstPtr;



template <class ContainerAllocator>
struct simRosSetJointStateResponse_ {
  typedef simRosSetJointStateResponse_<ContainerAllocator> Type;

  simRosSetJointStateResponse_()
  : result(0)
  {
  }

  simRosSetJointStateResponse_(const ContainerAllocator& _alloc)
  : result(0)
  {
  }

  typedef int32_t _result_type;
  int32_t result;


  typedef boost::shared_ptr< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosSetJointStateResponse
typedef  ::vrep_common::simRosSetJointStateResponse_<std::allocator<void> > simRosSetJointStateResponse;

typedef boost::shared_ptr< ::vrep_common::simRosSetJointStateResponse> simRosSetJointStateResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosSetJointStateResponse const> simRosSetJointStateResponseConstPtr;


struct simRosSetJointState
{

typedef simRosSetJointStateRequest Request;
typedef simRosSetJointStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosSetJointState
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "321f1f7210ed1893ea6a335b3eae0c68";
  }

  static const char* value(const  ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x321f1f7210ed1893ULL;
  static const uint64_t static_value2 = 0xea6a335b3eae0c68ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointStateRequest";
  }

  static const char* value(const  ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
int32[] handles\n\
uint8[] setModes\n\
float32[] values\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const  ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointStateResponse";
  }

  static const char* value(const  ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 result\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetJointStateRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.handles);
    stream.next(m.setModes);
    stream.next(m.values);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosSetJointStateRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosSetJointStateResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.result);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosSetJointStateResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosSetJointState> {
  static const char* value() 
  {
    return "f0dcb80e3d9c4b8b983ca341425c1996";
  }

  static const char* value(const vrep_common::simRosSetJointState&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosSetJointState> {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointState";
  }

  static const char* value(const vrep_common::simRosSetJointState&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosSetJointStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f0dcb80e3d9c4b8b983ca341425c1996";
  }

  static const char* value(const vrep_common::simRosSetJointStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosSetJointStateRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointState";
  }

  static const char* value(const vrep_common::simRosSetJointStateRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosSetJointStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f0dcb80e3d9c4b8b983ca341425c1996";
  }

  static const char* value(const vrep_common::simRosSetJointStateResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosSetJointStateResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosSetJointState";
  }

  static const char* value(const vrep_common::simRosSetJointStateResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSSETJOINTSTATE_H
