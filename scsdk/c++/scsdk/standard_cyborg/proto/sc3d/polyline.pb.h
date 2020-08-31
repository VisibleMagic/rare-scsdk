// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: standard_cyborg/proto/sc3d/polyline.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto

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
#include "standard_cyborg/proto/math/tensor.pb.h"
#include "standard_cyborg/proto/math/core.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto;
namespace standard_cyborg {
namespace proto {
namespace sc3d {
class Polyline;
class PolylineDefaultTypeInternal;
extern PolylineDefaultTypeInternal _Polyline_default_instance_;
}  // namespace sc3d
}  // namespace proto
}  // namespace standard_cyborg
PROTOBUF_NAMESPACE_OPEN
template<> ::standard_cyborg::proto::sc3d::Polyline* Arena::CreateMaybeMessage<::standard_cyborg::proto::sc3d::Polyline>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace standard_cyborg {
namespace proto {
namespace sc3d {

// ===================================================================

class Polyline :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:standard_cyborg.proto.sc3d.Polyline) */ {
 public:
  Polyline();
  virtual ~Polyline();

  Polyline(const Polyline& from);
  Polyline(Polyline&& from) noexcept
    : Polyline() {
    *this = ::std::move(from);
  }

  inline Polyline& operator=(const Polyline& from) {
    CopyFrom(from);
    return *this;
  }
  inline Polyline& operator=(Polyline&& from) noexcept {
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
  static const Polyline& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Polyline* internal_default_instance() {
    return reinterpret_cast<const Polyline*>(
               &_Polyline_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Polyline& a, Polyline& b) {
    a.Swap(&b);
  }
  inline void Swap(Polyline* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Polyline* New() const final {
    return CreateMaybeMessage<Polyline>(nullptr);
  }

  Polyline* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Polyline>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Polyline& from);
  void MergeFrom(const Polyline& from);
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
  void InternalSwap(Polyline* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "standard_cyborg.proto.sc3d.Polyline";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto);
    return ::descriptor_table_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPositionsFieldNumber = 1,
  };
  // repeated .standard_cyborg.proto.math.Vec3 positions = 1;
  int positions_size() const;
  private:
  int _internal_positions_size() const;
  public:
  void clear_positions();
  ::standard_cyborg::proto::math::Vec3* mutable_positions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::math::Vec3 >*
      mutable_positions();
  private:
  const ::standard_cyborg::proto::math::Vec3& _internal_positions(int index) const;
  ::standard_cyborg::proto::math::Vec3* _internal_add_positions();
  public:
  const ::standard_cyborg::proto::math::Vec3& positions(int index) const;
  ::standard_cyborg::proto::math::Vec3* add_positions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::math::Vec3 >&
      positions() const;

  // @@protoc_insertion_point(class_scope:standard_cyborg.proto.sc3d.Polyline)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::math::Vec3 > positions_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Polyline

// repeated .standard_cyborg.proto.math.Vec3 positions = 1;
inline int Polyline::_internal_positions_size() const {
  return positions_.size();
}
inline int Polyline::positions_size() const {
  return _internal_positions_size();
}
inline ::standard_cyborg::proto::math::Vec3* Polyline::mutable_positions(int index) {
  // @@protoc_insertion_point(field_mutable:standard_cyborg.proto.sc3d.Polyline.positions)
  return positions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::math::Vec3 >*
Polyline::mutable_positions() {
  // @@protoc_insertion_point(field_mutable_list:standard_cyborg.proto.sc3d.Polyline.positions)
  return &positions_;
}
inline const ::standard_cyborg::proto::math::Vec3& Polyline::_internal_positions(int index) const {
  return positions_.Get(index);
}
inline const ::standard_cyborg::proto::math::Vec3& Polyline::positions(int index) const {
  // @@protoc_insertion_point(field_get:standard_cyborg.proto.sc3d.Polyline.positions)
  return _internal_positions(index);
}
inline ::standard_cyborg::proto::math::Vec3* Polyline::_internal_add_positions() {
  return positions_.Add();
}
inline ::standard_cyborg::proto::math::Vec3* Polyline::add_positions() {
  // @@protoc_insertion_point(field_add:standard_cyborg.proto.sc3d.Polyline.positions)
  return _internal_add_positions();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::standard_cyborg::proto::math::Vec3 >&
Polyline::positions() const {
  // @@protoc_insertion_point(field_list:standard_cyborg.proto.sc3d.Polyline.positions)
  return positions_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_standard_5fcyborg_2fproto_2fsc3d_2fpolyline_2eproto
