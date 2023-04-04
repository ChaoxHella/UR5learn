// Generated by gencpp from file ur_msgs/Analog.msg
// DO NOT EDIT!


#ifndef UR_MSGS_MESSAGE_ANALOG_H
#define UR_MSGS_MESSAGE_ANALOG_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur_msgs
{
template <class ContainerAllocator>
struct Analog_
{
  typedef Analog_<ContainerAllocator> Type;

  Analog_()
    : pin(0)
    , domain(0)
    , state(0.0)  {
    }
  Analog_(const ContainerAllocator& _alloc)
    : pin(0)
    , domain(0)
    , state(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _pin_type;
  _pin_type pin;

   typedef uint8_t _domain_type;
  _domain_type domain;

   typedef float _state_type;
  _state_type state;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(CURRENT)
  #undef CURRENT
#endif
#if defined(_WIN32) && defined(VOLTAGE)
  #undef VOLTAGE
#endif

  enum {
    CURRENT = 0u,
    VOLTAGE = 1u,
  };


  typedef boost::shared_ptr< ::ur_msgs::Analog_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur_msgs::Analog_<ContainerAllocator> const> ConstPtr;

}; // struct Analog_

typedef ::ur_msgs::Analog_<std::allocator<void> > Analog;

typedef boost::shared_ptr< ::ur_msgs::Analog > AnalogPtr;
typedef boost::shared_ptr< ::ur_msgs::Analog const> AnalogConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur_msgs::Analog_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur_msgs::Analog_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ur_msgs::Analog_<ContainerAllocator1> & lhs, const ::ur_msgs::Analog_<ContainerAllocator2> & rhs)
{
  return lhs.pin == rhs.pin &&
    lhs.domain == rhs.domain &&
    lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ur_msgs::Analog_<ContainerAllocator1> & lhs, const ::ur_msgs::Analog_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ur_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::Analog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur_msgs::Analog_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::Analog_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur_msgs::Analog_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::Analog_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur_msgs::Analog_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur_msgs::Analog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6be678008703fe11fbea12281a3d6d23";
  }

  static const char* value(const ::ur_msgs::Analog_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6be678008703fe11ULL;
  static const uint64_t static_value2 = 0xfbea12281a3d6d23ULL;
};

template<class ContainerAllocator>
struct DataType< ::ur_msgs::Analog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur_msgs/Analog";
  }

  static const char* value(const ::ur_msgs::Analog_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur_msgs::Analog_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 CURRENT=0\n"
"uint8 VOLTAGE=1\n"
"\n"
"uint8 pin\n"
"uint8 domain # can be VOLTAGE or CURRENT\n"
"float32 state\n"
;
  }

  static const char* value(const ::ur_msgs::Analog_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur_msgs::Analog_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pin);
      stream.next(m.domain);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Analog_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur_msgs::Analog_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur_msgs::Analog_<ContainerAllocator>& v)
  {
    s << indent << "pin: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.pin);
    s << indent << "domain: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.domain);
    s << indent << "state: ";
    Printer<float>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR_MSGS_MESSAGE_ANALOG_H
