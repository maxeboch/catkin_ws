// Generated by gencpp from file chapter2_tutorials/chapter2_msg1.msg
// DO NOT EDIT!


#ifndef CHAPTER2_TUTORIALS_MESSAGE_CHAPTER2_MSG1_H
#define CHAPTER2_TUTORIALS_MESSAGE_CHAPTER2_MSG1_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace chapter2_tutorials
{
template <class ContainerAllocator>
struct chapter2_msg1_
{
  typedef chapter2_msg1_<ContainerAllocator> Type;

  chapter2_msg1_()
    : A(0)
    , B(0)
    , C(0)  {
    }
  chapter2_msg1_(const ContainerAllocator& _alloc)
    : A(0)
    , B(0)
    , C(0)  {
  (void)_alloc;
    }



   typedef int32_t _A_type;
  _A_type A;

   typedef int32_t _B_type;
  _B_type B;

   typedef int32_t _C_type;
  _C_type C;





  typedef boost::shared_ptr< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> const> ConstPtr;

}; // struct chapter2_msg1_

typedef ::chapter2_tutorials::chapter2_msg1_<std::allocator<void> > chapter2_msg1;

typedef boost::shared_ptr< ::chapter2_tutorials::chapter2_msg1 > chapter2_msg1Ptr;
typedef boost::shared_ptr< ::chapter2_tutorials::chapter2_msg1 const> chapter2_msg1ConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace chapter2_tutorials

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'chapter2_tutorials': ['/home/max/catkin_ws/src/chapter2_tutorials/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e7a68ce4e0b75a9719b4950a7069c9d4";
  }

  static const char* value(const ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe7a68ce4e0b75a97ULL;
  static const uint64_t static_value2 = 0x19b4950a7069c9d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "chapter2_tutorials/chapter2_msg1";
  }

  static const char* value(const ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 A\n\
int32 B\n\
int32 C\n\
";
  }

  static const char* value(const ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.A);
      stream.next(m.B);
      stream.next(m.C);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct chapter2_msg1_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::chapter2_tutorials::chapter2_msg1_<ContainerAllocator>& v)
  {
    s << indent << "A: ";
    Printer<int32_t>::stream(s, indent + "  ", v.A);
    s << indent << "B: ";
    Printer<int32_t>::stream(s, indent + "  ", v.B);
    s << indent << "C: ";
    Printer<int32_t>::stream(s, indent + "  ", v.C);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHAPTER2_TUTORIALS_MESSAGE_CHAPTER2_MSG1_H
