// Generated by gencpp from file mirte_msgs/SetLEDValueResponse.msg
// DO NOT EDIT!


#ifndef MIRTE_MSGS_MESSAGE_SETLEDVALUERESPONSE_H
#define MIRTE_MSGS_MESSAGE_SETLEDVALUERESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace mirte_msgs
{
template <class ContainerAllocator>
struct SetLEDValueResponse_
{
  typedef SetLEDValueResponse_<ContainerAllocator> Type;

  SetLEDValueResponse_()
    : status(false)  {
    }
  SetLEDValueResponse_(const ContainerAllocator& _alloc)
    : status(false)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;





  typedef boost::shared_ptr< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetLEDValueResponse_

typedef ::mirte_msgs::SetLEDValueResponse_<std::allocator<void> > SetLEDValueResponse;

typedef boost::shared_ptr< ::mirte_msgs::SetLEDValueResponse > SetLEDValueResponsePtr;
typedef boost::shared_ptr< ::mirte_msgs::SetLEDValueResponse const> SetLEDValueResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator1> & lhs, const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator1> & lhs, const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mirte_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3a1255d4d998bd4d6585c64639b5ee9a";
  }

  static const char* value(const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3a1255d4d998bd4dULL;
  static const uint64_t static_value2 = 0x6585c64639b5ee9aULL;
};

template<class ContainerAllocator>
struct DataType< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mirte_msgs/SetLEDValueResponse";
  }

  static const char* value(const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool status\n"
"\n"
"\n"
;
  }

  static const char* value(const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetLEDValueResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mirte_msgs::SetLEDValueResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIRTE_MSGS_MESSAGE_SETLEDVALUERESPONSE_H