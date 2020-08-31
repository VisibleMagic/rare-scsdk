// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: standard_cyborg/proto/sc3d/perspective_camera.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
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
#include "standard_cyborg/proto/math/core.pb.h"
#include "standard_cyborg/proto/math/transform.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto;
namespace standard_cyborg {
namespace proto {
namespace sc3d {
class PinholeCamera;
class PinholeCameraDefaultTypeInternal;
extern PinholeCameraDefaultTypeInternal _PinholeCamera_default_instance_;
}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg
PROTOBUF_NAMESPACE_OPEN
template<> ::standard_cyborg::proto::sc3d::PinholeCamera* Arena::CreateMaybeMessage<::standard_cyborg::proto::sc3d::PinholeCamera>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace standard_cyborg {
namespace proto {
namespace sc3d {

// ===================================================================

class PinholeCamera :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:standard_cyborg.proto.sc3d.PinholeCamera) */ {
 public:
  PinholeCamera();
  virtual ~PinholeCamera();

  PinholeCamera(const PinholeCamera& from);
  PinholeCamera(PinholeCamera&& from) noexcept
    : PinholeCamera() {
    *this = ::std::move(from);
  }

  inline PinholeCamera& operator=(const PinholeCamera& from) {
    CopyFrom(from);
    return *this;
  }
  inline PinholeCamera& operator=(PinholeCamera&& from) noexcept {
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
  static const PinholeCamera& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PinholeCamera* internal_default_instance() {
    return reinterpret_cast<const PinholeCamera*>(
               &_PinholeCamera_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PinholeCamera& a, PinholeCamera& b) {
    a.Swap(&b);
  }
  inline void Swap(PinholeCamera* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PinholeCamera* New() const final {
    return CreateMaybeMessage<PinholeCamera>(nullptr);
  }

  PinholeCamera* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PinholeCamera>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PinholeCamera& from);
  void MergeFrom(const PinholeCamera& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PinholeCamera* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "standard_cyborg.proto.sc3d.PinholeCamera";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto);
    return ::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRadialDistortionCoefficientsFieldNumber = 32,
    kFrameFieldNumber = 1,
    kFocalLengthFieldNumber = 10,
    kPrincipalPointFieldNumber = 11,
    kSensorTransformFieldNumber = 20,
    kSensorSkewFieldNumber = 12,
    kImageHeightFieldNumber = 13,
    kImageWidthFieldNumber = 14,
    kPixelPitchWidthMmFieldNumber = 30,
    kPixelPitchHeightMmFieldNumber = 31,
  };
  // repeated float radial_distortion_coefficients = 32;
  int radial_distortion_coefficients_size() const;
  private:
  int _internal_radial_distortion_coefficients_size() const;
  public:
  void clear_radial_distortion_coefficients();
  private:
  float _internal_radial_distortion_coefficients(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      _internal_radial_distortion_coefficients() const;
  void _internal_add_radial_distortion_coefficients(float value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      _internal_mutable_radial_distortion_coefficients();
  public:
  float radial_distortion_coefficients(int index) const;
  void set_radial_distortion_coefficients(int index, float value);
  void add_radial_distortion_coefficients(float value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
      radial_distortion_coefficients() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
      mutable_radial_distortion_coefficients();

  // string frame = 1;
  void clear_frame();
  const std::string& frame() const;
  void set_frame(const std::string& value);
  void set_frame(std::string&& value);
  void set_frame(const char* value);
  void set_frame(const char* value, size_t size);
  std::string* mutable_frame();
  std::string* release_frame();
  void set_allocated_frame(std::string* frame);
  private:
  const std::string& _internal_frame() const;
  void _internal_set_frame(const std::string& value);
  std::string* _internal_mutable_frame();
  public:

  // .standard_cyborg.proto.math.Vec2 focal_length = 10;
  bool has_focal_length() const;
  private:
  bool _internal_has_focal_length() const;
  public:
  void clear_focal_length();
  const ::standard_cyborg::proto::math::Vec2& focal_length() const;
  ::standard_cyborg::proto::math::Vec2* release_focal_length();
  ::standard_cyborg::proto::math::Vec2* mutable_focal_length();
  void set_allocated_focal_length(::standard_cyborg::proto::math::Vec2* focal_length);
  private:
  const ::standard_cyborg::proto::math::Vec2& _internal_focal_length() const;
  ::standard_cyborg::proto::math::Vec2* _internal_mutable_focal_length();
  public:

  // .standard_cyborg.proto.math.Vec2 principal_point = 11;
  bool has_principal_point() const;
  private:
  bool _internal_has_principal_point() const;
  public:
  void clear_principal_point();
  const ::standard_cyborg::proto::math::Vec2& principal_point() const;
  ::standard_cyborg::proto::math::Vec2* release_principal_point();
  ::standard_cyborg::proto::math::Vec2* mutable_principal_point();
  void set_allocated_principal_point(::standard_cyborg::proto::math::Vec2* principal_point);
  private:
  const ::standard_cyborg::proto::math::Vec2& _internal_principal_point() const;
  ::standard_cyborg::proto::math::Vec2* _internal_mutable_principal_point();
  public:

  // .standard_cyborg.proto.math.Transform sensor_transform = 20;
  bool has_sensor_transform() const;
  private:
  bool _internal_has_sensor_transform() const;
  public:
  void clear_sensor_transform();
  const ::standard_cyborg::proto::math::Transform& sensor_transform() const;
  ::standard_cyborg::proto::math::Transform* release_sensor_transform();
  ::standard_cyborg::proto::math::Transform* mutable_sensor_transform();
  void set_allocated_sensor_transform(::standard_cyborg::proto::math::Transform* sensor_transform);
  private:
  const ::standard_cyborg::proto::math::Transform& _internal_sensor_transform() const;
  ::standard_cyborg::proto::math::Transform* _internal_mutable_sensor_transform();
  public:

  // float sensor_skew = 12;
  void clear_sensor_skew();
  float sensor_skew() const;
  void set_sensor_skew(float value);
  private:
  float _internal_sensor_skew() const;
  void _internal_set_sensor_skew(float value);
  public:

  // int64 image_height = 13;
  void clear_image_height();
  ::PROTOBUF_NAMESPACE_ID::int64 image_height() const;
  void set_image_height(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_image_height() const;
  void _internal_set_image_height(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // int64 image_width = 14;
  void clear_image_width();
  ::PROTOBUF_NAMESPACE_ID::int64 image_width() const;
  void set_image_width(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_image_width() const;
  void _internal_set_image_width(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // double pixel_pitch_width_mm = 30;
  void clear_pixel_pitch_width_mm();
  double pixel_pitch_width_mm() const;
  void set_pixel_pitch_width_mm(double value);
  private:
  double _internal_pixel_pitch_width_mm() const;
  void _internal_set_pixel_pitch_width_mm(double value);
  public:

  // double pixel_pitch_height_mm = 31;
  void clear_pixel_pitch_height_mm();
  double pixel_pitch_height_mm() const;
  void set_pixel_pitch_height_mm(double value);
  private:
  double _internal_pixel_pitch_height_mm() const;
  void _internal_set_pixel_pitch_height_mm(double value);
  public:

  // @@protoc_insertion_point(class_scope:standard_cyborg.proto.sc3d.PinholeCamera)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< float > radial_distortion_coefficients_;
  mutable std::atomic<int> _radial_distortion_coefficients_cached_byte_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr frame_;
  ::standard_cyborg::proto::math::Vec2* focal_length_;
  ::standard_cyborg::proto::math::Vec2* principal_point_;
  ::standard_cyborg::proto::math::Transform* sensor_transform_;
  float sensor_skew_;
  ::PROTOBUF_NAMESPACE_ID::int64 image_height_;
  ::PROTOBUF_NAMESPACE_ID::int64 image_width_;
  double pixel_pitch_width_mm_;
  double pixel_pitch_height_mm_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PinholeCamera

// string frame = 1;
inline void PinholeCamera::clear_frame() {
  frame_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& PinholeCamera::frame() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.frame)
  return _internal_frame();
}
inline void PinholeCamera::set_frame(const std::string& value) {
  _internal_set_frame(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.PinholeCamera.frame)
}
inline std::string* PinholeCamera::mutable_frame() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.PinholeCamera.frame)
  return _internal_mutable_frame();
}
inline const std::string& PinholeCamera::_internal_frame() const {
  return frame_.GetNoArena();
}
inline void PinholeCamera::_internal_set_frame(const std::string& value) {
  
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void PinholeCamera::set_frame(std::string&& value) {
  
  frame_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:standard_cyborg.proto.sc3d.PinholeCamera.frame)
}
inline void PinholeCamera::set_frame(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:standard_cyborg.proto.sc3d.PinholeCamera.frame)
}
inline void PinholeCamera::set_frame(const char* value, size_t size) {
  
  frame_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:standard_cyborg.proto.sc3d.PinholeCamera.frame)
}
inline std::string* PinholeCamera::_internal_mutable_frame() {
  
  return frame_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* PinholeCamera::release_frame() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.PinholeCamera.frame)
  
  return frame_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void PinholeCamera::set_allocated_frame(std::string* frame) {
  if (frame != nullptr) {
    
  } else {
    
  }
  frame_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), frame);
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.PinholeCamera.frame)
}

// .standard_cyborg.proto.math.Vec2 focal_length = 10;
inline bool PinholeCamera::_internal_has_focal_length() const {
  return this != internal_default_instance() && focal_length_ != nullptr;
}
inline bool PinholeCamera::has_focal_length() const {
  return _internal_has_focal_length();
}
inline const ::standard_cyborg::proto::math::Vec2& PinholeCamera::_internal_focal_length() const {
  const ::standard_cyborg::proto::math::Vec2* p = focal_length_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Vec2*>(
      &::standard_cyborg::proto::math::_Vec2_default_instance_);
}
inline const ::standard_cyborg::proto::math::Vec2& PinholeCamera::focal_length() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.focal_length)
  return _internal_focal_length();
}
inline ::standard_cyborg::proto::math::Vec2* PinholeCamera::release_focal_length() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.PinholeCamera.focal_length)
  
  ::standard_cyborg::proto::math::Vec2* temp = focal_length_;
  focal_length_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Vec2* PinholeCamera::_internal_mutable_focal_length() {
  
  if (focal_length_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Vec2>(GetArenaNoVirtual());
    focal_length_ = p;
  }
  return focal_length_;
}
inline ::standard_cyborg::proto::math::Vec2* PinholeCamera::mutable_focal_length() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.PinholeCamera.focal_length)
  return _internal_mutable_focal_length();
}
inline void PinholeCamera::set_allocated_focal_length(::standard_cyborg::proto::math::Vec2* focal_length) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(focal_length_);
  }
  if (focal_length) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      focal_length = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, focal_length, submessage_arena);
    }
    
  } else {
    
  }
  focal_length_ = focal_length;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.PinholeCamera.focal_length)
}

// .standard_cyborg.proto.math.Vec2 principal_point = 11;
inline bool PinholeCamera::_internal_has_principal_point() const {
  return this != internal_default_instance() && principal_point_ != nullptr;
}
inline bool PinholeCamera::has_principal_point() const {
  return _internal_has_principal_point();
}
inline const ::standard_cyborg::proto::math::Vec2& PinholeCamera::_internal_principal_point() const {
  const ::standard_cyborg::proto::math::Vec2* p = principal_point_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Vec2*>(
      &::standard_cyborg::proto::math::_Vec2_default_instance_);
}
inline const ::standard_cyborg::proto::math::Vec2& PinholeCamera::principal_point() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.principal_point)
  return _internal_principal_point();
}
inline ::standard_cyborg::proto::math::Vec2* PinholeCamera::release_principal_point() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.PinholeCamera.principal_point)
  
  ::standard_cyborg::proto::math::Vec2* temp = principal_point_;
  principal_point_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Vec2* PinholeCamera::_internal_mutable_principal_point() {
  
  if (principal_point_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Vec2>(GetArenaNoVirtual());
    principal_point_ = p;
  }
  return principal_point_;
}
inline ::standard_cyborg::proto::math::Vec2* PinholeCamera::mutable_principal_point() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.PinholeCamera.principal_point)
  return _internal_mutable_principal_point();
}
inline void PinholeCamera::set_allocated_principal_point(::standard_cyborg::proto::math::Vec2* principal_point) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(principal_point_);
  }
  if (principal_point) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      principal_point = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, principal_point, submessage_arena);
    }
    
  } else {
    
  }
  principal_point_ = principal_point;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.PinholeCamera.principal_point)
}

// float sensor_skew = 12;
inline void PinholeCamera::clear_sensor_skew() {
  sensor_skew_ = 0;
}
inline float PinholeCamera::_internal_sensor_skew() const {
  return sensor_skew_;
}
inline float PinholeCamera::sensor_skew() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.sensor_skew)
  return _internal_sensor_skew();
}
inline void PinholeCamera::_internal_set_sensor_skew(float value) {
  
  sensor_skew_ = value;
}
inline void PinholeCamera::set_sensor_skew(float value) {
  _internal_set_sensor_skew(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.PinholeCamera.sensor_skew)
}

// int64 image_height = 13;
inline void PinholeCamera::clear_image_height() {
  image_height_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 PinholeCamera::_internal_image_height() const {
  return image_height_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 PinholeCamera::image_height() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.image_height)
  return _internal_image_height();
}
inline void PinholeCamera::_internal_set_image_height(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  image_height_ = value;
}
inline void PinholeCamera::set_image_height(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_image_height(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.PinholeCamera.image_height)
}

// int64 image_width = 14;
inline void PinholeCamera::clear_image_width() {
  image_width_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 PinholeCamera::_internal_image_width() const {
  return image_width_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 PinholeCamera::image_width() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.image_width)
  return _internal_image_width();
}
inline void PinholeCamera::_internal_set_image_width(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  image_width_ = value;
}
inline void PinholeCamera::set_image_width(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_image_width(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.PinholeCamera.image_width)
}

// .standard_cyborg.proto.math.Transform sensor_transform = 20;
inline bool PinholeCamera::_internal_has_sensor_transform() const {
  return this != internal_default_instance() && sensor_transform_ != nullptr;
}
inline bool PinholeCamera::has_sensor_transform() const {
  return _internal_has_sensor_transform();
}
inline const ::standard_cyborg::proto::math::Transform& PinholeCamera::_internal_sensor_transform() const {
  const ::standard_cyborg::proto::math::Transform* p = sensor_transform_;
  return p != nullptr ? *p : *reinterpret_cast<const ::standard_cyborg::proto::math::Transform*>(
      &::standard_cyborg::proto::math::_Transform_default_instance_);
}
inline const ::standard_cyborg::proto::math::Transform& PinholeCamera::sensor_transform() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.sensor_transform)
  return _internal_sensor_transform();
}
inline ::standard_cyborg::proto::math::Transform* PinholeCamera::release_sensor_transform() {
  // @@protoc_insertion_point(field_release:standard_cyborg.proto.sc3d.PinholeCamera.sensor_transform)
  
  ::standard_cyborg::proto::math::Transform* temp = sensor_transform_;
  sensor_transform_ = nullptr;
  return temp;
}
inline ::standard_cyborg::proto::math::Transform* PinholeCamera::_internal_mutable_sensor_transform() {
  
  if (sensor_transform_ == nullptr) {
    auto* p = CreateMaybeMessage<::standard_cyborg::proto::math::Transform>(GetArenaNoVirtual());
    sensor_transform_ = p;
  }
  return sensor_transform_;
}
inline ::standard_cyborg::proto::math::Transform* PinholeCamera::mutable_sensor_transform() {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.PinholeCamera.sensor_transform)
  return _internal_mutable_sensor_transform();
}
inline void PinholeCamera::set_allocated_sensor_transform(::standard_cyborg::proto::math::Transform* sensor_transform) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(sensor_transform_);
  }
  if (sensor_transform) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      sensor_transform = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sensor_transform, submessage_arena);
    }
    
  } else {
    
  }
  sensor_transform_ = sensor_transform;
  // @@protoc_insertion_point(field_set_allocated:standard_cyborg.proto.sc3d.PinholeCamera.sensor_transform)
}

// double pixel_pitch_width_mm = 30;
inline void PinholeCamera::clear_pixel_pitch_width_mm() {
  pixel_pitch_width_mm_ = 0;
}
inline double PinholeCamera::_internal_pixel_pitch_width_mm() const {
  return pixel_pitch_width_mm_;
}
inline double PinholeCamera::pixel_pitch_width_mm() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.pixel_pitch_width_mm)
  return _internal_pixel_pitch_width_mm();
}
inline void PinholeCamera::_internal_set_pixel_pitch_width_mm(double value) {
  
  pixel_pitch_width_mm_ = value;
}
inline void PinholeCamera::set_pixel_pitch_width_mm(double value) {
  _internal_set_pixel_pitch_width_mm(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.PinholeCamera.pixel_pitch_width_mm)
}

// double pixel_pitch_height_mm = 31;
inline void PinholeCamera::clear_pixel_pitch_height_mm() {
  pixel_pitch_height_mm_ = 0;
}
inline double PinholeCamera::_internal_pixel_pitch_height_mm() const {
  return pixel_pitch_height_mm_;
}
inline double PinholeCamera::pixel_pitch_height_mm() const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.pixel_pitch_height_mm)
  return _internal_pixel_pitch_height_mm();
}
inline void PinholeCamera::_internal_set_pixel_pitch_height_mm(double value) {
  
  pixel_pitch_height_mm_ = value;
}
inline void PinholeCamera::set_pixel_pitch_height_mm(double value) {
  _internal_set_pixel_pitch_height_mm(value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.PinholeCamera.pixel_pitch_height_mm)
}

// repeated float radial_distortion_coefficients = 32;
inline int PinholeCamera::_internal_radial_distortion_coefficients_size() const {
  return radial_distortion_coefficients_.size();
}
inline int PinholeCamera::radial_distortion_coefficients_size() const {
  return _internal_radial_distortion_coefficients_size();
}
inline void PinholeCamera::clear_radial_distortion_coefficients() {
  radial_distortion_coefficients_.Clear();
}
inline float PinholeCamera::_internal_radial_distortion_coefficients(int index) const {
  return radial_distortion_coefficients_.Get(index);
}
inline float PinholeCamera::radial_distortion_coefficients(int index) const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.PinholeCamera.radial_distortion_coefficients)
  return _internal_radial_distortion_coefficients(index);
}
inline void PinholeCamera::set_radial_distortion_coefficients(int index, float value) {
  radial_distortion_coefficients_.Set(index, value);
  // @@protoc_insertion_point(field_set:standard_cyborg.proto.sc3d.PinholeCamera.radial_distortion_coefficients)
}
inline void PinholeCamera::_internal_add_radial_distortion_coefficients(float value) {
  radial_distortion_coefficients_.Add(value);
}
inline void PinholeCamera::add_radial_distortion_coefficients(float value) {
  _internal_add_radial_distortion_coefficients(value);
  // @@protoc_insertion_point(field_add:standard_cyborg.proto.sc3d.PinholeCamera.radial_distortion_coefficients)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
PinholeCamera::_internal_radial_distortion_coefficients() const {
  return radial_distortion_coefficients_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >&
PinholeCamera::radial_distortion_coefficients() const {
  // @@protoc_insertion_point(field_list:standard_cyborg.proto.sc3d.PinholeCamera.radial_distortion_coefficients)
  return _internal_radial_distortion_coefficients();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
PinholeCamera::_internal_mutable_radial_distortion_coefficients() {
  return &radial_distortion_coefficients_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< float >*
PinholeCamera::mutable_radial_distortion_coefficients() {
  // @@protoc_insertion_point(field_mutable_list:standard_cyborg.proto.sc3d.PinholeCamera.radial_distortion_coefficients)
  return _internal_mutable_radial_distortion_coefficients();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fperspective_5fcamera_2eproto
