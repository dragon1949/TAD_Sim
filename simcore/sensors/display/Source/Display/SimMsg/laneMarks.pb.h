// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: laneMarks.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_laneMarks_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_laneMarks_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "header.pb.h"
#include "basic.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_laneMarks_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_laneMarks_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_laneMarks_2eproto;
namespace sim_msg {
class LaneMark;
class LaneMarkDefaultTypeInternal;
extern LaneMarkDefaultTypeInternal _LaneMark_default_instance_;
class LaneMarks;
class LaneMarksDefaultTypeInternal;
extern LaneMarksDefaultTypeInternal _LaneMarks_default_instance_;
}  // namespace sim_msg
PROTOBUF_NAMESPACE_OPEN
template<> ::sim_msg::LaneMark* Arena::CreateMaybeMessage<::sim_msg::LaneMark>(Arena*);
template<> ::sim_msg::LaneMarks* Arena::CreateMaybeMessage<::sim_msg::LaneMarks>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sim_msg {

// ===================================================================

class LaneMark :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.LaneMark) */ {
 public:
  LaneMark();
  virtual ~LaneMark();

  LaneMark(const LaneMark& from);
  LaneMark(LaneMark&& from) noexcept
    : LaneMark() {
    *this = ::std::move(from);
  }

  inline LaneMark& operator=(const LaneMark& from) {
    CopyFrom(from);
    return *this;
  }
  inline LaneMark& operator=(LaneMark&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LaneMark& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LaneMark* internal_default_instance() {
    return reinterpret_cast<const LaneMark*>(
               &_LaneMark_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LaneMark& a, LaneMark& b) {
    a.Swap(&b);
  }
  inline void Swap(LaneMark* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LaneMark* New() const final {
    return CreateMaybeMessage<LaneMark>(nullptr);
  }

  LaneMark* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LaneMark>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LaneMark& from);
  void MergeFrom(const LaneMark& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LaneMark* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.LaneMark";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_laneMarks_2eproto);
    return ::descriptor_table_laneMarks_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPointsFieldNumber = 4,
    kBackwardPointsFieldNumber = 5,
    kIdFieldNumber = 6,
    kColorFieldNumber = 1,
    kTypeFieldNumber = 2,
    kConfidenceFieldNumber = 3,
  };
  // repeated .sim_msg.Vec3 points = 4;
  int points_size() const;
  void clear_points();
  ::sim_msg::Vec3* mutable_points(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >*
      mutable_points();
  const ::sim_msg::Vec3& points(int index) const;
  ::sim_msg::Vec3* add_points();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >&
      points() const;

  // repeated .sim_msg.Vec3 backward_points = 5;
  int backward_points_size() const;
  void clear_backward_points();
  ::sim_msg::Vec3* mutable_backward_points(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >*
      mutable_backward_points();
  const ::sim_msg::Vec3& backward_points(int index) const;
  ::sim_msg::Vec3* add_backward_points();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >&
      backward_points() const;

  // string id = 6;
  void clear_id();
  const std::string& id() const;
  void set_id(const std::string& value);
  void set_id(std::string&& value);
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  std::string* mutable_id();
  std::string* release_id();
  void set_allocated_id(std::string* id);

  // int32 color = 1;
  void clear_color();
  ::PROTOBUF_NAMESPACE_ID::int32 color() const;
  void set_color(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 type = 2;
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::int32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::int32 value);

  // float confidence = 3;
  void clear_confidence();
  float confidence() const;
  void set_confidence(float value);

  // @@protoc_insertion_point(class_scope:sim_msg.LaneMark)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 > points_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 > backward_points_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr id_;
  ::PROTOBUF_NAMESPACE_ID::int32 color_;
  ::PROTOBUF_NAMESPACE_ID::int32 type_;
  float confidence_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_laneMarks_2eproto;
};
// -------------------------------------------------------------------

class LaneMarks :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:sim_msg.LaneMarks) */ {
 public:
  LaneMarks();
  virtual ~LaneMarks();

  LaneMarks(const LaneMarks& from);
  LaneMarks(LaneMarks&& from) noexcept
    : LaneMarks() {
    *this = ::std::move(from);
  }

  inline LaneMarks& operator=(const LaneMarks& from) {
    CopyFrom(from);
    return *this;
  }
  inline LaneMarks& operator=(LaneMarks&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const LaneMarks& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LaneMarks* internal_default_instance() {
    return reinterpret_cast<const LaneMarks*>(
               &_LaneMarks_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(LaneMarks& a, LaneMarks& b) {
    a.Swap(&b);
  }
  inline void Swap(LaneMarks* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline LaneMarks* New() const final {
    return CreateMaybeMessage<LaneMarks>(nullptr);
  }

  LaneMarks* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<LaneMarks>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const LaneMarks& from);
  void MergeFrom(const LaneMarks& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LaneMarks* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sim_msg.LaneMarks";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_laneMarks_2eproto);
    return ::descriptor_table_laneMarks_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLeftFieldNumber = 2,
    kRightFieldNumber = 3,
    kMiddlePointsFieldNumber = 14,
    kHeaderFieldNumber = 1,
    kRemainLengthFieldNumber = 4,
    kDisToCenterLineFieldNumber = 5,
    kDisToLeftBoundaryFieldNumber = 6,
    kDisToRightBoundaryFieldNumber = 7,
    kLaneNoFieldNumber = 8,
    kLaneKeepDurationFieldNumber = 9,
    kCarCountInPerceptionRangeFieldNumber = 10,
    kLaneArrowFieldNumber = 11,
    kLeftLanemarkNumFieldNumber = 12,
    kRightLanemarkNumFieldNumber = 13,
    kLeftLaneIdFieldNumber = 15,
    kBeginLanemarkToEgoFieldNumber = 17,
    kRightLaneIdFieldNumber = 16,
    kEgoDirectionWithLaneFieldNumber = 19,
    kEndLanemarkToEgoFieldNumber = 18,
    kLaneIdFieldNumber = 20,
    kSectionIdFieldNumber = 21,
    kRoadIdFieldNumber = 22,
  };
  // repeated .sim_msg.LaneMark left = 2;
  int left_size() const;
  void clear_left();
  ::sim_msg::LaneMark* mutable_left(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark >*
      mutable_left();
  const ::sim_msg::LaneMark& left(int index) const;
  ::sim_msg::LaneMark* add_left();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark >&
      left() const;

  // repeated .sim_msg.LaneMark right = 3;
  int right_size() const;
  void clear_right();
  ::sim_msg::LaneMark* mutable_right(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark >*
      mutable_right();
  const ::sim_msg::LaneMark& right(int index) const;
  ::sim_msg::LaneMark* add_right();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark >&
      right() const;

  // repeated .sim_msg.Vec3 middle_points = 14;
  int middle_points_size() const;
  void clear_middle_points();
  ::sim_msg::Vec3* mutable_middle_points(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >*
      mutable_middle_points();
  const ::sim_msg::Vec3& middle_points(int index) const;
  ::sim_msg::Vec3* add_middle_points();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >&
      middle_points() const;

  // .sim_msg.Header header = 1;
  bool has_header() const;
  void clear_header();
  const ::sim_msg::Header& header() const;
  ::sim_msg::Header* release_header();
  ::sim_msg::Header* mutable_header();
  void set_allocated_header(::sim_msg::Header* header);

  // double remain_length = 4;
  void clear_remain_length();
  double remain_length() const;
  void set_remain_length(double value);

  // float dis_to_center_line = 5;
  void clear_dis_to_center_line();
  float dis_to_center_line() const;
  void set_dis_to_center_line(float value);

  // float dis_to_left_boundary = 6;
  void clear_dis_to_left_boundary();
  float dis_to_left_boundary() const;
  void set_dis_to_left_boundary(float value);

  // float dis_to_right_boundary = 7;
  void clear_dis_to_right_boundary();
  float dis_to_right_boundary() const;
  void set_dis_to_right_boundary(float value);

  // uint32 lane_no = 8;
  void clear_lane_no();
  ::PROTOBUF_NAMESPACE_ID::uint32 lane_no() const;
  void set_lane_no(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // float lane_keep_duration = 9;
  void clear_lane_keep_duration();
  float lane_keep_duration() const;
  void set_lane_keep_duration(float value);

  // uint32 car_count_in_perception_range = 10;
  void clear_car_count_in_perception_range();
  ::PROTOBUF_NAMESPACE_ID::uint32 car_count_in_perception_range() const;
  void set_car_count_in_perception_range(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // int32 lane_arrow = 11;
  void clear_lane_arrow();
  ::PROTOBUF_NAMESPACE_ID::int32 lane_arrow() const;
  void set_lane_arrow(::PROTOBUF_NAMESPACE_ID::int32 value);

  // uint32 left_lanemark_num = 12;
  void clear_left_lanemark_num();
  ::PROTOBUF_NAMESPACE_ID::uint32 left_lanemark_num() const;
  void set_left_lanemark_num(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // uint32 right_lanemark_num = 13;
  void clear_right_lanemark_num();
  ::PROTOBUF_NAMESPACE_ID::uint32 right_lanemark_num() const;
  void set_right_lanemark_num(::PROTOBUF_NAMESPACE_ID::uint32 value);

  // int32 left_lane_id = 15;
  void clear_left_lane_id();
  ::PROTOBUF_NAMESPACE_ID::int32 left_lane_id() const;
  void set_left_lane_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // double begin_lanemark_to_ego = 17;
  void clear_begin_lanemark_to_ego();
  double begin_lanemark_to_ego() const;
  void set_begin_lanemark_to_ego(double value);

  // int32 right_lane_id = 16;
  void clear_right_lane_id();
  ::PROTOBUF_NAMESPACE_ID::int32 right_lane_id() const;
  void set_right_lane_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // float ego_direction_with_lane = 19;
  void clear_ego_direction_with_lane();
  float ego_direction_with_lane() const;
  void set_ego_direction_with_lane(float value);

  // double end_lanemark_to_ego = 18;
  void clear_end_lanemark_to_ego();
  double end_lanemark_to_ego() const;
  void set_end_lanemark_to_ego(double value);

  // int32 lane_id = 20;
  void clear_lane_id();
  ::PROTOBUF_NAMESPACE_ID::int32 lane_id() const;
  void set_lane_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 section_id = 21;
  void clear_section_id();
  ::PROTOBUF_NAMESPACE_ID::int32 section_id() const;
  void set_section_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // int32 road_id = 22;
  void clear_road_id();
  ::PROTOBUF_NAMESPACE_ID::int32 road_id() const;
  void set_road_id(::PROTOBUF_NAMESPACE_ID::int32 value);

  // @@protoc_insertion_point(class_scope:sim_msg.LaneMarks)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark > left_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark > right_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 > middle_points_;
  ::sim_msg::Header* header_;
  double remain_length_;
  float dis_to_center_line_;
  float dis_to_left_boundary_;
  float dis_to_right_boundary_;
  ::PROTOBUF_NAMESPACE_ID::uint32 lane_no_;
  float lane_keep_duration_;
  ::PROTOBUF_NAMESPACE_ID::uint32 car_count_in_perception_range_;
  ::PROTOBUF_NAMESPACE_ID::int32 lane_arrow_;
  ::PROTOBUF_NAMESPACE_ID::uint32 left_lanemark_num_;
  ::PROTOBUF_NAMESPACE_ID::uint32 right_lanemark_num_;
  ::PROTOBUF_NAMESPACE_ID::int32 left_lane_id_;
  double begin_lanemark_to_ego_;
  ::PROTOBUF_NAMESPACE_ID::int32 right_lane_id_;
  float ego_direction_with_lane_;
  double end_lanemark_to_ego_;
  ::PROTOBUF_NAMESPACE_ID::int32 lane_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 section_id_;
  ::PROTOBUF_NAMESPACE_ID::int32 road_id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_laneMarks_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LaneMark

// int32 color = 1;
inline void LaneMark::clear_color() {
  color_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LaneMark::color() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMark.color)
  return color_;
}
inline void LaneMark::set_color(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  color_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMark.color)
}

// int32 type = 2;
inline void LaneMark::clear_type() {
  type_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LaneMark::type() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMark.type)
  return type_;
}
inline void LaneMark::set_type(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMark.type)
}

// float confidence = 3;
inline void LaneMark::clear_confidence() {
  confidence_ = 0;
}
inline float LaneMark::confidence() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMark.confidence)
  return confidence_;
}
inline void LaneMark::set_confidence(float value) {
  
  confidence_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMark.confidence)
}

// repeated .sim_msg.Vec3 points = 4;
inline int LaneMark::points_size() const {
  return points_.size();
}
inline ::sim_msg::Vec3* LaneMark::mutable_points(int index) {
  // @@protoc_insertion_point(field_mutable:sim_msg.LaneMark.points)
  return points_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >*
LaneMark::mutable_points() {
  // @@protoc_insertion_point(field_mutable_list:sim_msg.LaneMark.points)
  return &points_;
}
inline const ::sim_msg::Vec3& LaneMark::points(int index) const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMark.points)
  return points_.Get(index);
}
inline ::sim_msg::Vec3* LaneMark::add_points() {
  // @@protoc_insertion_point(field_add:sim_msg.LaneMark.points)
  return points_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >&
LaneMark::points() const {
  // @@protoc_insertion_point(field_list:sim_msg.LaneMark.points)
  return points_;
}

// repeated .sim_msg.Vec3 backward_points = 5;
inline int LaneMark::backward_points_size() const {
  return backward_points_.size();
}
inline ::sim_msg::Vec3* LaneMark::mutable_backward_points(int index) {
  // @@protoc_insertion_point(field_mutable:sim_msg.LaneMark.backward_points)
  return backward_points_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >*
LaneMark::mutable_backward_points() {
  // @@protoc_insertion_point(field_mutable_list:sim_msg.LaneMark.backward_points)
  return &backward_points_;
}
inline const ::sim_msg::Vec3& LaneMark::backward_points(int index) const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMark.backward_points)
  return backward_points_.Get(index);
}
inline ::sim_msg::Vec3* LaneMark::add_backward_points() {
  // @@protoc_insertion_point(field_add:sim_msg.LaneMark.backward_points)
  return backward_points_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >&
LaneMark::backward_points() const {
  // @@protoc_insertion_point(field_list:sim_msg.LaneMark.backward_points)
  return backward_points_;
}

// string id = 6;
inline void LaneMark::clear_id() {
  id_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& LaneMark::id() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMark.id)
  return id_.GetNoArena();
}
inline void LaneMark::set_id(const std::string& value) {
  
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sim_msg.LaneMark.id)
}
inline void LaneMark::set_id(std::string&& value) {
  
  id_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sim_msg.LaneMark.id)
}
inline void LaneMark::set_id(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sim_msg.LaneMark.id)
}
inline void LaneMark::set_id(const char* value, size_t size) {
  
  id_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sim_msg.LaneMark.id)
}
inline std::string* LaneMark::mutable_id() {
  
  // @@protoc_insertion_point(field_mutable:sim_msg.LaneMark.id)
  return id_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* LaneMark::release_id() {
  // @@protoc_insertion_point(field_release:sim_msg.LaneMark.id)
  
  return id_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void LaneMark::set_allocated_id(std::string* id) {
  if (id != nullptr) {
    
  } else {
    
  }
  id_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:sim_msg.LaneMark.id)
}

// -------------------------------------------------------------------

// LaneMarks

// .sim_msg.Header header = 1;
inline bool LaneMarks::has_header() const {
  return this != internal_default_instance() && header_ != nullptr;
}
inline const ::sim_msg::Header& LaneMarks::header() const {
  const ::sim_msg::Header* p = header_;
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.header)
  return p != nullptr ? *p : *reinterpret_cast<const ::sim_msg::Header*>(
      &::sim_msg::_Header_default_instance_);
}
inline ::sim_msg::Header* LaneMarks::release_header() {
  // @@protoc_insertion_point(field_release:sim_msg.LaneMarks.header)
  
  ::sim_msg::Header* temp = header_;
  header_ = nullptr;
  return temp;
}
inline ::sim_msg::Header* LaneMarks::mutable_header() {
  
  if (header_ == nullptr) {
    auto* p = CreateMaybeMessage<::sim_msg::Header>(GetArenaNoVirtual());
    header_ = p;
  }
  // @@protoc_insertion_point(field_mutable:sim_msg.LaneMarks.header)
  return header_;
}
inline void LaneMarks::set_allocated_header(::sim_msg::Header* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  header_ = header;
  // @@protoc_insertion_point(field_set_allocated:sim_msg.LaneMarks.header)
}

// repeated .sim_msg.LaneMark left = 2;
inline int LaneMarks::left_size() const {
  return left_.size();
}
inline void LaneMarks::clear_left() {
  left_.Clear();
}
inline ::sim_msg::LaneMark* LaneMarks::mutable_left(int index) {
  // @@protoc_insertion_point(field_mutable:sim_msg.LaneMarks.left)
  return left_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark >*
LaneMarks::mutable_left() {
  // @@protoc_insertion_point(field_mutable_list:sim_msg.LaneMarks.left)
  return &left_;
}
inline const ::sim_msg::LaneMark& LaneMarks::left(int index) const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.left)
  return left_.Get(index);
}
inline ::sim_msg::LaneMark* LaneMarks::add_left() {
  // @@protoc_insertion_point(field_add:sim_msg.LaneMarks.left)
  return left_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark >&
LaneMarks::left() const {
  // @@protoc_insertion_point(field_list:sim_msg.LaneMarks.left)
  return left_;
}

// repeated .sim_msg.LaneMark right = 3;
inline int LaneMarks::right_size() const {
  return right_.size();
}
inline void LaneMarks::clear_right() {
  right_.Clear();
}
inline ::sim_msg::LaneMark* LaneMarks::mutable_right(int index) {
  // @@protoc_insertion_point(field_mutable:sim_msg.LaneMarks.right)
  return right_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark >*
LaneMarks::mutable_right() {
  // @@protoc_insertion_point(field_mutable_list:sim_msg.LaneMarks.right)
  return &right_;
}
inline const ::sim_msg::LaneMark& LaneMarks::right(int index) const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.right)
  return right_.Get(index);
}
inline ::sim_msg::LaneMark* LaneMarks::add_right() {
  // @@protoc_insertion_point(field_add:sim_msg.LaneMarks.right)
  return right_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::LaneMark >&
LaneMarks::right() const {
  // @@protoc_insertion_point(field_list:sim_msg.LaneMarks.right)
  return right_;
}

// double remain_length = 4;
inline void LaneMarks::clear_remain_length() {
  remain_length_ = 0;
}
inline double LaneMarks::remain_length() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.remain_length)
  return remain_length_;
}
inline void LaneMarks::set_remain_length(double value) {
  
  remain_length_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.remain_length)
}

// float dis_to_center_line = 5;
inline void LaneMarks::clear_dis_to_center_line() {
  dis_to_center_line_ = 0;
}
inline float LaneMarks::dis_to_center_line() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.dis_to_center_line)
  return dis_to_center_line_;
}
inline void LaneMarks::set_dis_to_center_line(float value) {
  
  dis_to_center_line_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.dis_to_center_line)
}

// float dis_to_left_boundary = 6;
inline void LaneMarks::clear_dis_to_left_boundary() {
  dis_to_left_boundary_ = 0;
}
inline float LaneMarks::dis_to_left_boundary() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.dis_to_left_boundary)
  return dis_to_left_boundary_;
}
inline void LaneMarks::set_dis_to_left_boundary(float value) {
  
  dis_to_left_boundary_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.dis_to_left_boundary)
}

// float dis_to_right_boundary = 7;
inline void LaneMarks::clear_dis_to_right_boundary() {
  dis_to_right_boundary_ = 0;
}
inline float LaneMarks::dis_to_right_boundary() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.dis_to_right_boundary)
  return dis_to_right_boundary_;
}
inline void LaneMarks::set_dis_to_right_boundary(float value) {
  
  dis_to_right_boundary_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.dis_to_right_boundary)
}

// uint32 lane_no = 8;
inline void LaneMarks::clear_lane_no() {
  lane_no_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LaneMarks::lane_no() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.lane_no)
  return lane_no_;
}
inline void LaneMarks::set_lane_no(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  lane_no_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.lane_no)
}

// float lane_keep_duration = 9;
inline void LaneMarks::clear_lane_keep_duration() {
  lane_keep_duration_ = 0;
}
inline float LaneMarks::lane_keep_duration() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.lane_keep_duration)
  return lane_keep_duration_;
}
inline void LaneMarks::set_lane_keep_duration(float value) {
  
  lane_keep_duration_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.lane_keep_duration)
}

// uint32 car_count_in_perception_range = 10;
inline void LaneMarks::clear_car_count_in_perception_range() {
  car_count_in_perception_range_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LaneMarks::car_count_in_perception_range() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.car_count_in_perception_range)
  return car_count_in_perception_range_;
}
inline void LaneMarks::set_car_count_in_perception_range(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  car_count_in_perception_range_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.car_count_in_perception_range)
}

// int32 lane_arrow = 11;
inline void LaneMarks::clear_lane_arrow() {
  lane_arrow_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LaneMarks::lane_arrow() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.lane_arrow)
  return lane_arrow_;
}
inline void LaneMarks::set_lane_arrow(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  lane_arrow_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.lane_arrow)
}

// uint32 left_lanemark_num = 12;
inline void LaneMarks::clear_left_lanemark_num() {
  left_lanemark_num_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LaneMarks::left_lanemark_num() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.left_lanemark_num)
  return left_lanemark_num_;
}
inline void LaneMarks::set_left_lanemark_num(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  left_lanemark_num_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.left_lanemark_num)
}

// uint32 right_lanemark_num = 13;
inline void LaneMarks::clear_right_lanemark_num() {
  right_lanemark_num_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 LaneMarks::right_lanemark_num() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.right_lanemark_num)
  return right_lanemark_num_;
}
inline void LaneMarks::set_right_lanemark_num(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  right_lanemark_num_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.right_lanemark_num)
}

// repeated .sim_msg.Vec3 middle_points = 14;
inline int LaneMarks::middle_points_size() const {
  return middle_points_.size();
}
inline ::sim_msg::Vec3* LaneMarks::mutable_middle_points(int index) {
  // @@protoc_insertion_point(field_mutable:sim_msg.LaneMarks.middle_points)
  return middle_points_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >*
LaneMarks::mutable_middle_points() {
  // @@protoc_insertion_point(field_mutable_list:sim_msg.LaneMarks.middle_points)
  return &middle_points_;
}
inline const ::sim_msg::Vec3& LaneMarks::middle_points(int index) const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.middle_points)
  return middle_points_.Get(index);
}
inline ::sim_msg::Vec3* LaneMarks::add_middle_points() {
  // @@protoc_insertion_point(field_add:sim_msg.LaneMarks.middle_points)
  return middle_points_.Add();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sim_msg::Vec3 >&
LaneMarks::middle_points() const {
  // @@protoc_insertion_point(field_list:sim_msg.LaneMarks.middle_points)
  return middle_points_;
}

// int32 left_lane_id = 15;
inline void LaneMarks::clear_left_lane_id() {
  left_lane_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LaneMarks::left_lane_id() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.left_lane_id)
  return left_lane_id_;
}
inline void LaneMarks::set_left_lane_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  left_lane_id_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.left_lane_id)
}

// int32 right_lane_id = 16;
inline void LaneMarks::clear_right_lane_id() {
  right_lane_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LaneMarks::right_lane_id() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.right_lane_id)
  return right_lane_id_;
}
inline void LaneMarks::set_right_lane_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  right_lane_id_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.right_lane_id)
}

// double begin_lanemark_to_ego = 17;
inline void LaneMarks::clear_begin_lanemark_to_ego() {
  begin_lanemark_to_ego_ = 0;
}
inline double LaneMarks::begin_lanemark_to_ego() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.begin_lanemark_to_ego)
  return begin_lanemark_to_ego_;
}
inline void LaneMarks::set_begin_lanemark_to_ego(double value) {
  
  begin_lanemark_to_ego_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.begin_lanemark_to_ego)
}

// double end_lanemark_to_ego = 18;
inline void LaneMarks::clear_end_lanemark_to_ego() {
  end_lanemark_to_ego_ = 0;
}
inline double LaneMarks::end_lanemark_to_ego() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.end_lanemark_to_ego)
  return end_lanemark_to_ego_;
}
inline void LaneMarks::set_end_lanemark_to_ego(double value) {
  
  end_lanemark_to_ego_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.end_lanemark_to_ego)
}

// float ego_direction_with_lane = 19;
inline void LaneMarks::clear_ego_direction_with_lane() {
  ego_direction_with_lane_ = 0;
}
inline float LaneMarks::ego_direction_with_lane() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.ego_direction_with_lane)
  return ego_direction_with_lane_;
}
inline void LaneMarks::set_ego_direction_with_lane(float value) {
  
  ego_direction_with_lane_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.ego_direction_with_lane)
}

// int32 lane_id = 20;
inline void LaneMarks::clear_lane_id() {
  lane_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LaneMarks::lane_id() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.lane_id)
  return lane_id_;
}
inline void LaneMarks::set_lane_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  lane_id_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.lane_id)
}

// int32 section_id = 21;
inline void LaneMarks::clear_section_id() {
  section_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LaneMarks::section_id() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.section_id)
  return section_id_;
}
inline void LaneMarks::set_section_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  section_id_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.section_id)
}

// int32 road_id = 22;
inline void LaneMarks::clear_road_id() {
  road_id_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 LaneMarks::road_id() const {
  // @@protoc_insertion_point(field_get:sim_msg.LaneMarks.road_id)
  return road_id_;
}
inline void LaneMarks::set_road_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  road_id_ = value;
  // @@protoc_insertion_point(field_set:sim_msg.LaneMarks.road_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sim_msg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_laneMarks_2eproto