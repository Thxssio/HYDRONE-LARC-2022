// Generated by gencpp from file zed_interfaces/Skeleton2D.msg
// DO NOT EDIT!


#ifndef ZED_INTERFACES_MESSAGE_SKELETON2D_H
#define ZED_INTERFACES_MESSAGE_SKELETON2D_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <zed_interfaces/Keypoint2Df.h>

namespace zed_interfaces
{
template <class ContainerAllocator>
struct Skeleton2D_
{
  typedef Skeleton2D_<ContainerAllocator> Type;

  Skeleton2D_()
    : keypoints()  {
    }
  Skeleton2D_(const ContainerAllocator& _alloc)
    : keypoints()  {
  (void)_alloc;
      keypoints.assign( ::zed_interfaces::Keypoint2Df_<ContainerAllocator> (_alloc));
  }



   typedef boost::array< ::zed_interfaces::Keypoint2Df_<ContainerAllocator> , 18>  _keypoints_type;
  _keypoints_type keypoints;





  typedef boost::shared_ptr< ::zed_interfaces::Skeleton2D_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::zed_interfaces::Skeleton2D_<ContainerAllocator> const> ConstPtr;

}; // struct Skeleton2D_

typedef ::zed_interfaces::Skeleton2D_<std::allocator<void> > Skeleton2D;

typedef boost::shared_ptr< ::zed_interfaces::Skeleton2D > Skeleton2DPtr;
typedef boost::shared_ptr< ::zed_interfaces::Skeleton2D const> Skeleton2DConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::zed_interfaces::Skeleton2D_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::zed_interfaces::Skeleton2D_<ContainerAllocator1> & lhs, const ::zed_interfaces::Skeleton2D_<ContainerAllocator2> & rhs)
{
  return lhs.keypoints == rhs.keypoints;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::zed_interfaces::Skeleton2D_<ContainerAllocator1> & lhs, const ::zed_interfaces::Skeleton2D_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace zed_interfaces

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::zed_interfaces::Skeleton2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::zed_interfaces::Skeleton2D_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::zed_interfaces::Skeleton2D_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1754703e1a6ce338ad28b9ee81fb712a";
  }

  static const char* value(const ::zed_interfaces::Skeleton2D_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1754703e1a6ce338ULL;
  static const uint64_t static_value2 = 0xad28b9ee81fb712aULL;
};

template<class ContainerAllocator>
struct DataType< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "zed_interfaces/Skeleton2D";
  }

  static const char* value(const ::zed_interfaces::Skeleton2D_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Skeleton joints indices\n"
"#        16-14   15-17\n"
"#             \\ /\n"
"#              0\n"
"#              |\n"
"#       2------1------5\n"
"#       |    |   |    |\n"
"#	    |    |   |    |\n"
"#       3    |   |    6\n"
"#       |    |   |    |\n"
"#       |    |   |    |\n"
"#       4    8   11   7\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#            9   12\n"
"#            |   |\n"
"#            |   |\n"
"#            |   |\n"
"#           10   13\n"
"zed_interfaces/Keypoint2Df[18] keypoints\n"
"\n"
"================================================================================\n"
"MSG: zed_interfaces/Keypoint2Df\n"
"float32[2] kp\n"
;
  }

  static const char* value(const ::zed_interfaces::Skeleton2D_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.keypoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Skeleton2D_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::zed_interfaces::Skeleton2D_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::zed_interfaces::Skeleton2D_<ContainerAllocator>& v)
  {
    s << indent << "keypoints[]" << std::endl;
    for (size_t i = 0; i < v.keypoints.size(); ++i)
    {
      s << indent << "  keypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::zed_interfaces::Keypoint2Df_<ContainerAllocator> >::stream(s, indent + "    ", v.keypoints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ZED_INTERFACES_MESSAGE_SKELETON2D_H
