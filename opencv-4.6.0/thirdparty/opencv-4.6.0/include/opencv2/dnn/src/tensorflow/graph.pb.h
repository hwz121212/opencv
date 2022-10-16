// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: graph.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_graph_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_graph_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/map.h>  // IWYU pragma: export
#include <google/protobuf/map_entry.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include "attr_value.pb.h"
#include "function.pb.h"
#include "versions.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_graph_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_graph_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_graph_2eproto;
namespace opencv_tensorflow {
class GraphDef;
struct GraphDefDefaultTypeInternal;
extern GraphDefDefaultTypeInternal _GraphDef_default_instance_;
class NodeDef;
struct NodeDefDefaultTypeInternal;
extern NodeDefDefaultTypeInternal _NodeDef_default_instance_;
class NodeDef_AttrEntry_DoNotUse;
struct NodeDef_AttrEntry_DoNotUseDefaultTypeInternal;
extern NodeDef_AttrEntry_DoNotUseDefaultTypeInternal _NodeDef_AttrEntry_DoNotUse_default_instance_;
}  // namespace opencv_tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::opencv_tensorflow::GraphDef* Arena::CreateMaybeMessage<::opencv_tensorflow::GraphDef>(Arena*);
template<> ::opencv_tensorflow::NodeDef* Arena::CreateMaybeMessage<::opencv_tensorflow::NodeDef>(Arena*);
template<> ::opencv_tensorflow::NodeDef_AttrEntry_DoNotUse* Arena::CreateMaybeMessage<::opencv_tensorflow::NodeDef_AttrEntry_DoNotUse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace opencv_tensorflow {

// ===================================================================

class GraphDef final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:opencv_tensorflow.GraphDef) */ {
 public:
  inline GraphDef() : GraphDef(nullptr) {}
  ~GraphDef() override;
  explicit PROTOBUF_CONSTEXPR GraphDef(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GraphDef(const GraphDef& from);
  GraphDef(GraphDef&& from) noexcept
    : GraphDef() {
    *this = ::std::move(from);
  }

  inline GraphDef& operator=(const GraphDef& from) {
    CopyFrom(from);
    return *this;
  }
  inline GraphDef& operator=(GraphDef&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GraphDef& default_instance() {
    return *internal_default_instance();
  }
  static inline const GraphDef* internal_default_instance() {
    return reinterpret_cast<const GraphDef*>(
               &_GraphDef_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GraphDef& a, GraphDef& b) {
    a.Swap(&b);
  }
  inline void Swap(GraphDef* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GraphDef* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GraphDef* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GraphDef>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GraphDef& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GraphDef& from) {
    GraphDef::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(GraphDef* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "opencv_tensorflow.GraphDef";
  }
  protected:
  explicit GraphDef(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNodeFieldNumber = 1,
    kLibraryFieldNumber = 2,
    kVersionsFieldNumber = 4,
    kVersionFieldNumber = 3,
  };
  // repeated .opencv_tensorflow.NodeDef node = 1;
  int node_size() const;
  private:
  int _internal_node_size() const;
  public:
  void clear_node();
  ::opencv_tensorflow::NodeDef* mutable_node(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opencv_tensorflow::NodeDef >*
      mutable_node();
  private:
  const ::opencv_tensorflow::NodeDef& _internal_node(int index) const;
  ::opencv_tensorflow::NodeDef* _internal_add_node();
  public:
  const ::opencv_tensorflow::NodeDef& node(int index) const;
  ::opencv_tensorflow::NodeDef* add_node();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opencv_tensorflow::NodeDef >&
      node() const;

  // .opencv_tensorflow.FunctionDefLibrary library = 2;
  bool has_library() const;
  private:
  bool _internal_has_library() const;
  public:
  void clear_library();
  const ::opencv_tensorflow::FunctionDefLibrary& library() const;
  PROTOBUF_NODISCARD ::opencv_tensorflow::FunctionDefLibrary* release_library();
  ::opencv_tensorflow::FunctionDefLibrary* mutable_library();
  void set_allocated_library(::opencv_tensorflow::FunctionDefLibrary* library);
  private:
  const ::opencv_tensorflow::FunctionDefLibrary& _internal_library() const;
  ::opencv_tensorflow::FunctionDefLibrary* _internal_mutable_library();
  public:
  void unsafe_arena_set_allocated_library(
      ::opencv_tensorflow::FunctionDefLibrary* library);
  ::opencv_tensorflow::FunctionDefLibrary* unsafe_arena_release_library();

  // .opencv_tensorflow.VersionDef versions = 4;
  bool has_versions() const;
  private:
  bool _internal_has_versions() const;
  public:
  void clear_versions();
  const ::opencv_tensorflow::VersionDef& versions() const;
  PROTOBUF_NODISCARD ::opencv_tensorflow::VersionDef* release_versions();
  ::opencv_tensorflow::VersionDef* mutable_versions();
  void set_allocated_versions(::opencv_tensorflow::VersionDef* versions);
  private:
  const ::opencv_tensorflow::VersionDef& _internal_versions() const;
  ::opencv_tensorflow::VersionDef* _internal_mutable_versions();
  public:
  void unsafe_arena_set_allocated_versions(
      ::opencv_tensorflow::VersionDef* versions);
  ::opencv_tensorflow::VersionDef* unsafe_arena_release_versions();

  // int32 version = 3 [deprecated = true];
  PROTOBUF_DEPRECATED void clear_version();
  PROTOBUF_DEPRECATED int32_t version() const;
  PROTOBUF_DEPRECATED void set_version(int32_t value);
  private:
  int32_t _internal_version() const;
  void _internal_set_version(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:opencv_tensorflow.GraphDef)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opencv_tensorflow::NodeDef > node_;
    ::opencv_tensorflow::FunctionDefLibrary* library_;
    ::opencv_tensorflow::VersionDef* versions_;
    int32_t version_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_graph_2eproto;
};
// -------------------------------------------------------------------

class NodeDef_AttrEntry_DoNotUse : public ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<NodeDef_AttrEntry_DoNotUse, 
    std::string, ::opencv_tensorflow::AttrValue,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> {
public:
  typedef ::PROTOBUF_NAMESPACE_ID::internal::MapEntry<NodeDef_AttrEntry_DoNotUse, 
    std::string, ::opencv_tensorflow::AttrValue,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> SuperType;
  NodeDef_AttrEntry_DoNotUse();
  explicit PROTOBUF_CONSTEXPR NodeDef_AttrEntry_DoNotUse(
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);
  explicit NodeDef_AttrEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  void MergeFrom(const NodeDef_AttrEntry_DoNotUse& other);
  static const NodeDef_AttrEntry_DoNotUse* internal_default_instance() { return reinterpret_cast<const NodeDef_AttrEntry_DoNotUse*>(&_NodeDef_AttrEntry_DoNotUse_default_instance_); }
  static bool ValidateKey(std::string* s) {
    return ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(s->data(), static_cast<int>(s->size()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::PARSE, "opencv_tensorflow.NodeDef.AttrEntry.key");
 }
  static bool ValidateValue(void*) { return true; }
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  friend struct ::TableStruct_graph_2eproto;
};

// -------------------------------------------------------------------

class NodeDef final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:opencv_tensorflow.NodeDef) */ {
 public:
  inline NodeDef() : NodeDef(nullptr) {}
  ~NodeDef() override;
  explicit PROTOBUF_CONSTEXPR NodeDef(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NodeDef(const NodeDef& from);
  NodeDef(NodeDef&& from) noexcept
    : NodeDef() {
    *this = ::std::move(from);
  }

  inline NodeDef& operator=(const NodeDef& from) {
    CopyFrom(from);
    return *this;
  }
  inline NodeDef& operator=(NodeDef&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const NodeDef& default_instance() {
    return *internal_default_instance();
  }
  static inline const NodeDef* internal_default_instance() {
    return reinterpret_cast<const NodeDef*>(
               &_NodeDef_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(NodeDef& a, NodeDef& b) {
    a.Swap(&b);
  }
  inline void Swap(NodeDef* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NodeDef* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NodeDef* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NodeDef>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const NodeDef& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const NodeDef& from) {
    NodeDef::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(NodeDef* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "opencv_tensorflow.NodeDef";
  }
  protected:
  explicit NodeDef(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  enum : int {
    kInputFieldNumber = 3,
    kAttrFieldNumber = 5,
    kNameFieldNumber = 1,
    kOpFieldNumber = 2,
    kDeviceFieldNumber = 4,
  };
  // repeated string input = 3;
  int input_size() const;
  private:
  int _internal_input_size() const;
  public:
  void clear_input();
  const std::string& input(int index) const;
  std::string* mutable_input(int index);
  void set_input(int index, const std::string& value);
  void set_input(int index, std::string&& value);
  void set_input(int index, const char* value);
  void set_input(int index, const char* value, size_t size);
  std::string* add_input();
  void add_input(const std::string& value);
  void add_input(std::string&& value);
  void add_input(const char* value);
  void add_input(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& input() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_input();
  private:
  const std::string& _internal_input(int index) const;
  std::string* _internal_add_input();
  public:

  // map<string, .opencv_tensorflow.AttrValue> attr = 5;
  int attr_size() const;
  private:
  int _internal_attr_size() const;
  public:
  void clear_attr();
  private:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::opencv_tensorflow::AttrValue >&
      _internal_attr() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::opencv_tensorflow::AttrValue >*
      _internal_mutable_attr();
  public:
  const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::opencv_tensorflow::AttrValue >&
      attr() const;
  ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::opencv_tensorflow::AttrValue >*
      mutable_attr();

  // string name = 1;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string op = 2;
  void clear_op();
  const std::string& op() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_op(ArgT0&& arg0, ArgT... args);
  std::string* mutable_op();
  PROTOBUF_NODISCARD std::string* release_op();
  void set_allocated_op(std::string* op);
  private:
  const std::string& _internal_op() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_op(const std::string& value);
  std::string* _internal_mutable_op();
  public:

  // string device = 4;
  void clear_device();
  const std::string& device() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_device(ArgT0&& arg0, ArgT... args);
  std::string* mutable_device();
  PROTOBUF_NODISCARD std::string* release_device();
  void set_allocated_device(std::string* device);
  private:
  const std::string& _internal_device() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_device(const std::string& value);
  std::string* _internal_mutable_device();
  public:

  // @@protoc_insertion_point(class_scope:opencv_tensorflow.NodeDef)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> input_;
    ::PROTOBUF_NAMESPACE_ID::internal::MapField<
        NodeDef_AttrEntry_DoNotUse,
        std::string, ::opencv_tensorflow::AttrValue,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_STRING,
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::TYPE_MESSAGE> attr_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr op_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr device_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_graph_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GraphDef

// repeated .opencv_tensorflow.NodeDef node = 1;
inline int GraphDef::_internal_node_size() const {
  return _impl_.node_.size();
}
inline int GraphDef::node_size() const {
  return _internal_node_size();
}
inline void GraphDef::clear_node() {
  _impl_.node_.Clear();
}
inline ::opencv_tensorflow::NodeDef* GraphDef::mutable_node(int index) {
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.GraphDef.node)
  return _impl_.node_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opencv_tensorflow::NodeDef >*
GraphDef::mutable_node() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.GraphDef.node)
  return &_impl_.node_;
}
inline const ::opencv_tensorflow::NodeDef& GraphDef::_internal_node(int index) const {
  return _impl_.node_.Get(index);
}
inline const ::opencv_tensorflow::NodeDef& GraphDef::node(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.GraphDef.node)
  return _internal_node(index);
}
inline ::opencv_tensorflow::NodeDef* GraphDef::_internal_add_node() {
  return _impl_.node_.Add();
}
inline ::opencv_tensorflow::NodeDef* GraphDef::add_node() {
  ::opencv_tensorflow::NodeDef* _add = _internal_add_node();
  // @@protoc_insertion_point(field_add:opencv_tensorflow.GraphDef.node)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::opencv_tensorflow::NodeDef >&
GraphDef::node() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.GraphDef.node)
  return _impl_.node_;
}

// .opencv_tensorflow.VersionDef versions = 4;
inline bool GraphDef::_internal_has_versions() const {
  return this != internal_default_instance() && _impl_.versions_ != nullptr;
}
inline bool GraphDef::has_versions() const {
  return _internal_has_versions();
}
inline const ::opencv_tensorflow::VersionDef& GraphDef::_internal_versions() const {
  const ::opencv_tensorflow::VersionDef* p = _impl_.versions_;
  return p != nullptr ? *p : reinterpret_cast<const ::opencv_tensorflow::VersionDef&>(
      ::opencv_tensorflow::_VersionDef_default_instance_);
}
inline const ::opencv_tensorflow::VersionDef& GraphDef::versions() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.GraphDef.versions)
  return _internal_versions();
}
inline void GraphDef::unsafe_arena_set_allocated_versions(
    ::opencv_tensorflow::VersionDef* versions) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.versions_);
  }
  _impl_.versions_ = versions;
  if (versions) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:opencv_tensorflow.GraphDef.versions)
}
inline ::opencv_tensorflow::VersionDef* GraphDef::release_versions() {
  
  ::opencv_tensorflow::VersionDef* temp = _impl_.versions_;
  _impl_.versions_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::opencv_tensorflow::VersionDef* GraphDef::unsafe_arena_release_versions() {
  // @@protoc_insertion_point(field_release:opencv_tensorflow.GraphDef.versions)
  
  ::opencv_tensorflow::VersionDef* temp = _impl_.versions_;
  _impl_.versions_ = nullptr;
  return temp;
}
inline ::opencv_tensorflow::VersionDef* GraphDef::_internal_mutable_versions() {
  
  if (_impl_.versions_ == nullptr) {
    auto* p = CreateMaybeMessage<::opencv_tensorflow::VersionDef>(GetArenaForAllocation());
    _impl_.versions_ = p;
  }
  return _impl_.versions_;
}
inline ::opencv_tensorflow::VersionDef* GraphDef::mutable_versions() {
  ::opencv_tensorflow::VersionDef* _msg = _internal_mutable_versions();
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.GraphDef.versions)
  return _msg;
}
inline void GraphDef::set_allocated_versions(::opencv_tensorflow::VersionDef* versions) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.versions_);
  }
  if (versions) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(versions));
    if (message_arena != submessage_arena) {
      versions = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, versions, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.versions_ = versions;
  // @@protoc_insertion_point(field_set_allocated:opencv_tensorflow.GraphDef.versions)
}

// int32 version = 3 [deprecated = true];
inline void GraphDef::clear_version() {
  _impl_.version_ = 0;
}
inline int32_t GraphDef::_internal_version() const {
  return _impl_.version_;
}
inline int32_t GraphDef::version() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.GraphDef.version)
  return _internal_version();
}
inline void GraphDef::_internal_set_version(int32_t value) {
  
  _impl_.version_ = value;
}
inline void GraphDef::set_version(int32_t value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.GraphDef.version)
}

// .opencv_tensorflow.FunctionDefLibrary library = 2;
inline bool GraphDef::_internal_has_library() const {
  return this != internal_default_instance() && _impl_.library_ != nullptr;
}
inline bool GraphDef::has_library() const {
  return _internal_has_library();
}
inline const ::opencv_tensorflow::FunctionDefLibrary& GraphDef::_internal_library() const {
  const ::opencv_tensorflow::FunctionDefLibrary* p = _impl_.library_;
  return p != nullptr ? *p : reinterpret_cast<const ::opencv_tensorflow::FunctionDefLibrary&>(
      ::opencv_tensorflow::_FunctionDefLibrary_default_instance_);
}
inline const ::opencv_tensorflow::FunctionDefLibrary& GraphDef::library() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.GraphDef.library)
  return _internal_library();
}
inline void GraphDef::unsafe_arena_set_allocated_library(
    ::opencv_tensorflow::FunctionDefLibrary* library) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.library_);
  }
  _impl_.library_ = library;
  if (library) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:opencv_tensorflow.GraphDef.library)
}
inline ::opencv_tensorflow::FunctionDefLibrary* GraphDef::release_library() {
  
  ::opencv_tensorflow::FunctionDefLibrary* temp = _impl_.library_;
  _impl_.library_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::opencv_tensorflow::FunctionDefLibrary* GraphDef::unsafe_arena_release_library() {
  // @@protoc_insertion_point(field_release:opencv_tensorflow.GraphDef.library)
  
  ::opencv_tensorflow::FunctionDefLibrary* temp = _impl_.library_;
  _impl_.library_ = nullptr;
  return temp;
}
inline ::opencv_tensorflow::FunctionDefLibrary* GraphDef::_internal_mutable_library() {
  
  if (_impl_.library_ == nullptr) {
    auto* p = CreateMaybeMessage<::opencv_tensorflow::FunctionDefLibrary>(GetArenaForAllocation());
    _impl_.library_ = p;
  }
  return _impl_.library_;
}
inline ::opencv_tensorflow::FunctionDefLibrary* GraphDef::mutable_library() {
  ::opencv_tensorflow::FunctionDefLibrary* _msg = _internal_mutable_library();
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.GraphDef.library)
  return _msg;
}
inline void GraphDef::set_allocated_library(::opencv_tensorflow::FunctionDefLibrary* library) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.library_);
  }
  if (library) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(library));
    if (message_arena != submessage_arena) {
      library = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, library, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.library_ = library;
  // @@protoc_insertion_point(field_set_allocated:opencv_tensorflow.GraphDef.library)
}

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// NodeDef

// string name = 1;
inline void NodeDef::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& NodeDef::name() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.NodeDef.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NodeDef::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:opencv_tensorflow.NodeDef.name)
}
inline std::string* NodeDef::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.NodeDef.name)
  return _s;
}
inline const std::string& NodeDef::_internal_name() const {
  return _impl_.name_.Get();
}
inline void NodeDef::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* NodeDef::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* NodeDef::release_name() {
  // @@protoc_insertion_point(field_release:opencv_tensorflow.NodeDef.name)
  return _impl_.name_.Release();
}
inline void NodeDef::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:opencv_tensorflow.NodeDef.name)
}

// string op = 2;
inline void NodeDef::clear_op() {
  _impl_.op_.ClearToEmpty();
}
inline const std::string& NodeDef::op() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.NodeDef.op)
  return _internal_op();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NodeDef::set_op(ArgT0&& arg0, ArgT... args) {
 
 _impl_.op_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:opencv_tensorflow.NodeDef.op)
}
inline std::string* NodeDef::mutable_op() {
  std::string* _s = _internal_mutable_op();
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.NodeDef.op)
  return _s;
}
inline const std::string& NodeDef::_internal_op() const {
  return _impl_.op_.Get();
}
inline void NodeDef::_internal_set_op(const std::string& value) {
  
  _impl_.op_.Set(value, GetArenaForAllocation());
}
inline std::string* NodeDef::_internal_mutable_op() {
  
  return _impl_.op_.Mutable(GetArenaForAllocation());
}
inline std::string* NodeDef::release_op() {
  // @@protoc_insertion_point(field_release:opencv_tensorflow.NodeDef.op)
  return _impl_.op_.Release();
}
inline void NodeDef::set_allocated_op(std::string* op) {
  if (op != nullptr) {
    
  } else {
    
  }
  _impl_.op_.SetAllocated(op, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.op_.IsDefault()) {
    _impl_.op_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:opencv_tensorflow.NodeDef.op)
}

// repeated string input = 3;
inline int NodeDef::_internal_input_size() const {
  return _impl_.input_.size();
}
inline int NodeDef::input_size() const {
  return _internal_input_size();
}
inline void NodeDef::clear_input() {
  _impl_.input_.Clear();
}
inline std::string* NodeDef::add_input() {
  std::string* _s = _internal_add_input();
  // @@protoc_insertion_point(field_add_mutable:opencv_tensorflow.NodeDef.input)
  return _s;
}
inline const std::string& NodeDef::_internal_input(int index) const {
  return _impl_.input_.Get(index);
}
inline const std::string& NodeDef::input(int index) const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.NodeDef.input)
  return _internal_input(index);
}
inline std::string* NodeDef::mutable_input(int index) {
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.NodeDef.input)
  return _impl_.input_.Mutable(index);
}
inline void NodeDef::set_input(int index, const std::string& value) {
  _impl_.input_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:opencv_tensorflow.NodeDef.input)
}
inline void NodeDef::set_input(int index, std::string&& value) {
  _impl_.input_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:opencv_tensorflow.NodeDef.input)
}
inline void NodeDef::set_input(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.input_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opencv_tensorflow.NodeDef.input)
}
inline void NodeDef::set_input(int index, const char* value, size_t size) {
  _impl_.input_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opencv_tensorflow.NodeDef.input)
}
inline std::string* NodeDef::_internal_add_input() {
  return _impl_.input_.Add();
}
inline void NodeDef::add_input(const std::string& value) {
  _impl_.input_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opencv_tensorflow.NodeDef.input)
}
inline void NodeDef::add_input(std::string&& value) {
  _impl_.input_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opencv_tensorflow.NodeDef.input)
}
inline void NodeDef::add_input(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.input_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opencv_tensorflow.NodeDef.input)
}
inline void NodeDef::add_input(const char* value, size_t size) {
  _impl_.input_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opencv_tensorflow.NodeDef.input)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
NodeDef::input() const {
  // @@protoc_insertion_point(field_list:opencv_tensorflow.NodeDef.input)
  return _impl_.input_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
NodeDef::mutable_input() {
  // @@protoc_insertion_point(field_mutable_list:opencv_tensorflow.NodeDef.input)
  return &_impl_.input_;
}

// string device = 4;
inline void NodeDef::clear_device() {
  _impl_.device_.ClearToEmpty();
}
inline const std::string& NodeDef::device() const {
  // @@protoc_insertion_point(field_get:opencv_tensorflow.NodeDef.device)
  return _internal_device();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NodeDef::set_device(ArgT0&& arg0, ArgT... args) {
 
 _impl_.device_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:opencv_tensorflow.NodeDef.device)
}
inline std::string* NodeDef::mutable_device() {
  std::string* _s = _internal_mutable_device();
  // @@protoc_insertion_point(field_mutable:opencv_tensorflow.NodeDef.device)
  return _s;
}
inline const std::string& NodeDef::_internal_device() const {
  return _impl_.device_.Get();
}
inline void NodeDef::_internal_set_device(const std::string& value) {
  
  _impl_.device_.Set(value, GetArenaForAllocation());
}
inline std::string* NodeDef::_internal_mutable_device() {
  
  return _impl_.device_.Mutable(GetArenaForAllocation());
}
inline std::string* NodeDef::release_device() {
  // @@protoc_insertion_point(field_release:opencv_tensorflow.NodeDef.device)
  return _impl_.device_.Release();
}
inline void NodeDef::set_allocated_device(std::string* device) {
  if (device != nullptr) {
    
  } else {
    
  }
  _impl_.device_.SetAllocated(device, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.device_.IsDefault()) {
    _impl_.device_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:opencv_tensorflow.NodeDef.device)
}

// map<string, .opencv_tensorflow.AttrValue> attr = 5;
inline int NodeDef::_internal_attr_size() const {
  return _impl_.attr_.size();
}
inline int NodeDef::attr_size() const {
  return _internal_attr_size();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::opencv_tensorflow::AttrValue >&
NodeDef::_internal_attr() const {
  return _impl_.attr_.GetMap();
}
inline const ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::opencv_tensorflow::AttrValue >&
NodeDef::attr() const {
  // @@protoc_insertion_point(field_map:opencv_tensorflow.NodeDef.attr)
  return _internal_attr();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::opencv_tensorflow::AttrValue >*
NodeDef::_internal_mutable_attr() {
  return _impl_.attr_.MutableMap();
}
inline ::PROTOBUF_NAMESPACE_ID::Map< std::string, ::opencv_tensorflow::AttrValue >*
NodeDef::mutable_attr() {
  // @@protoc_insertion_point(field_mutable_map:opencv_tensorflow.NodeDef.attr)
  return _internal_mutable_attr();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace opencv_tensorflow

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_graph_2eproto
