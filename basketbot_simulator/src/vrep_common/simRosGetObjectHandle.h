/* Auto-generated by genmsg_cpp for file /home/matteo/catkin_ws/src/vrep/vrep_common/srv/simRosGetObjectHandle.srv */
#ifndef VREP_COMMON_SERVICE_SIMROSGETOBJECTHANDLE_H
#define VREP_COMMON_SERVICE_SIMROSGETOBJECTHANDLE_H
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
struct simRosGetObjectHandleRequest_ {
  typedef simRosGetObjectHandleRequest_<ContainerAllocator> Type;

  simRosGetObjectHandleRequest_()
  : objectName()
  {
  }

  simRosGetObjectHandleRequest_(const ContainerAllocator& _alloc)
  : objectName(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _objectName_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  objectName;


  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosGetObjectHandleRequest
typedef  ::vrep_common::simRosGetObjectHandleRequest_<std::allocator<void> > simRosGetObjectHandleRequest;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectHandleRequest> simRosGetObjectHandleRequestPtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectHandleRequest const> simRosGetObjectHandleRequestConstPtr;



template <class ContainerAllocator>
struct simRosGetObjectHandleResponse_ {
  typedef simRosGetObjectHandleResponse_<ContainerAllocator> Type;

  simRosGetObjectHandleResponse_()
  : handle(0)
  {
  }

  simRosGetObjectHandleResponse_(const ContainerAllocator& _alloc)
  : handle(0)
  {
  }

  typedef int32_t _handle_type;
  int32_t handle;


  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct simRosGetObjectHandleResponse
typedef  ::vrep_common::simRosGetObjectHandleResponse_<std::allocator<void> > simRosGetObjectHandleResponse;

typedef boost::shared_ptr< ::vrep_common::simRosGetObjectHandleResponse> simRosGetObjectHandleResponsePtr;
typedef boost::shared_ptr< ::vrep_common::simRosGetObjectHandleResponse const> simRosGetObjectHandleResponseConstPtr;


struct simRosGetObjectHandle
{

typedef simRosGetObjectHandleRequest Request;
typedef simRosGetObjectHandleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct simRosGetObjectHandle
} // namespace vrep_common

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5d6700ec420d7f32e8dc7b117e3b8b51";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x5d6700ec420d7f32ULL;
  static const uint64_t static_value2 = 0xe8dc7b117e3b8b51ULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectHandleRequest";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
\n\
string objectName\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "92535b678299d2bdda959704e78c275e";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x92535b678299d2bdULL;
  static const uint64_t static_value2 = 0xda959704e78c275eULL;
};

template<class ContainerAllocator>
struct DataType< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectHandleResponse";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 handle\n\
\n\
\n\
";
  }

  static const char* value(const  ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.objectName);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosGetObjectHandleRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.handle);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct simRosGetObjectHandleResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<vrep_common::simRosGetObjectHandle> {
  static const char* value() 
  {
    return "5ede8bf5f32716bfd1ea7a68b46333e8";
  }

  static const char* value(const vrep_common::simRosGetObjectHandle&) { return value(); } 
};

template<>
struct DataType<vrep_common::simRosGetObjectHandle> {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectHandle";
  }

  static const char* value(const vrep_common::simRosGetObjectHandle&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5ede8bf5f32716bfd1ea7a68b46333e8";
  }

  static const char* value(const vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectHandle";
  }

  static const char* value(const vrep_common::simRosGetObjectHandleRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "5ede8bf5f32716bfd1ea7a68b46333e8";
  }

  static const char* value(const vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "vrep_common/simRosGetObjectHandle";
  }

  static const char* value(const vrep_common::simRosGetObjectHandleResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // VREP_COMMON_SERVICE_SIMROSGETOBJECTHANDLE_H
