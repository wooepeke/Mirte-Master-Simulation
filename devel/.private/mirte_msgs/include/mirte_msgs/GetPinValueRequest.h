// Generated by gencpp from file mirte_msgs/GetPinValueRequest.msg
// DO NOT EDIT!


#ifndef MIRTE_MSGS_MESSAGE_GETPINVALUEREQUEST_H
#define MIRTE_MSGS_MESSAGE_GETPINVALUEREQUEST_H


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
struct GetPinValueRequest_
{
  typedef GetPinValueRequest_<ContainerAllocator> Type;

  GetPinValueRequest_()
    : pin()
    , type()  {
    }
  GetPinValueRequest_(const ContainerAllocator& _alloc)
    : pin(_alloc)
    , type(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _pin_type;
  _pin_type pin;

   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _type_type;
  _type_type type;





  typedef boost::shared_ptr< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> const> ConstPtr;

}; // struct GetPinValueRequest_

typedef ::mirte_msgs::GetPinValueRequest_<std::allocator<void> > GetPinValueRequest;

typedef boost::shared_ptr< ::mirte_msgs::GetPinValueRequest > GetPinValueRequestPtr;
typedef boost::shared_ptr< ::mirte_msgs::GetPinValueRequest const> GetPinValueRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator1> & lhs, const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator2> & rhs)
{
  return lhs.pin == rhs.pin &&
    lhs.type == rhs.type;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator1> & lhs, const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace mirte_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "176f3cff9baa4e39513be1a7970f8b24";
  }

  static const char* value(const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x176f3cff9baa4e39ULL;
  static const uint64_t static_value2 = 0x513be1a7970f8b24ULL;
};

template<class ContainerAllocator>
struct DataType< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mirte_msgs/GetPinValueRequest";
  }

  static const char* value(const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string pin\n"
"string type\n"
;
  }

  static const char* value(const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pin);
      stream.next(m.type);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPinValueRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mirte_msgs::GetPinValueRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mirte_msgs::GetPinValueRequest_<ContainerAllocator>& v)
  {
    s << indent << "pin: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.pin);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.type);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MIRTE_MSGS_MESSAGE_GETPINVALUEREQUEST_H
