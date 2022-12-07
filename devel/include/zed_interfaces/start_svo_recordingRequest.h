// Generated by gencpp from file zed_interfaces/start_svo_recordingRequest.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_START_SVO_RECORDINGREQUEST_H
#define ZED_INTERFACES_MESSAGE_START_SVO_RECORDINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace zed_interfaces
{
template <class ContainerAllocator>
struct start_svo_recordingRequest_
{
  typedef start_svo_recordingRequest_<ContainerAllocator> Type;

  start_svo_recordingRequest_()
    : svo_filename()  {
    }
  start_svo_recordingRequest_(const ContainerAllocator& _alloc)
    : svo_filename(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _svo_filename_type;
  _svo_filename_type svo_filename;





  typedef boost::shared_ptr< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct start_svo_recordingRequest_

typedef ::zed_interfaces::start_svo_recordingRequest_<std::allocator<void> > start_svo_recordingRequest;

typedef boost::shared_ptr< ::zed_interfaces::start_svo_recordingRequest > start_svo_recordingRequestPtr;
typedef boost::shared_ptr< ::zed_interfaces::start_svo_recordingRequest const> start_svo_recordingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator1> & lhs, const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator2> & rhs)
{
  return lhs.svo_filename == rhs.svo_filename;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator1> & lhs, const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d53367c1321809b5cdba020b6f0085ff";
  }

  static const char* value(const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd53367c1321809b5ULL;
  static const uint64_t static_value2 = 0xcdba020b6f0085ffULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/start_svo_recordingRequest";
  }

  static const char* value(const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Full path is required no relative paths\n"
"string svo_filename \n"
;
  }

  static const char* value(const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.svo_filename);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct start_svo_recordingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::start_svo_recordingRequest_<ContainerAllocator>& v)
  {
    s << indent << "svo_filename: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.svo_filename);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_START_SVO_RECORDINGREQUEST_H