// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_hello_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_hello_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021007 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_hello_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_hello_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_hello_2eproto;
namespace helloworld {
class HelloReply;
struct HelloReplyDefaultTypeInternal;
extern HelloReplyDefaultTypeInternal _HelloReply_default_instance_;
class HelloRequest;
struct HelloRequestDefaultTypeInternal;
extern HelloRequestDefaultTypeInternal _HelloRequest_default_instance_;
}  // namespace helloworld
PROTOBUF_NAMESPACE_OPEN
template<> ::helloworld::HelloReply* Arena::CreateMaybeMessage<::helloworld::HelloReply>(Arena*);
template<> ::helloworld::HelloRequest* Arena::CreateMaybeMessage<::helloworld::HelloRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace helloworld {

// ===================================================================

class HelloRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:helloworld.HelloRequest) */ {
 public:
  inline HelloRequest() : HelloRequest(nullptr) {}
  ~HelloRequest() override;
  explicit PROTOBUF_CONSTEXPR HelloRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloRequest(const HelloRequest& from);
  HelloRequest(HelloRequest&& from) noexcept
    : HelloRequest() {
    *this = ::std::move(from);
  }

  inline HelloRequest& operator=(const HelloRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloRequest& operator=(HelloRequest&& from) noexcept {
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
  static const HelloRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloRequest* internal_default_instance() {
    return reinterpret_cast<const HelloRequest*>(
               &_HelloRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HelloRequest& a, HelloRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloRequest* other) {
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
  void UnsafeArenaSwap(HelloRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HelloRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HelloRequest& from) {
    HelloRequest::MergeImpl(*this, from);
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
  void InternalSwap(HelloRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "helloworld.HelloRequest";
  }
  protected:
  explicit HelloRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTitleFieldNumber = 2,
    kIdFieldNumber = 1,
  };
  // string title = 2;
  void clear_title();
  const std::string& title() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_title(ArgT0&& arg0, ArgT... args);
  std::string* mutable_title();
  PROTOBUF_NODISCARD std::string* release_title();
  void set_allocated_title(std::string* title);
  private:
  const std::string& _internal_title() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_title(const std::string& value);
  std::string* _internal_mutable_title();
  public:

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:helloworld.HelloRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
    int32_t id_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_hello_2eproto;
};
// -------------------------------------------------------------------

class HelloReply final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:helloworld.HelloReply) */ {
 public:
  inline HelloReply() : HelloReply(nullptr) {}
  ~HelloReply() override;
  explicit PROTOBUF_CONSTEXPR HelloReply(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HelloReply(const HelloReply& from);
  HelloReply(HelloReply&& from) noexcept
    : HelloReply() {
    *this = ::std::move(from);
  }

  inline HelloReply& operator=(const HelloReply& from) {
    CopyFrom(from);
    return *this;
  }
  inline HelloReply& operator=(HelloReply&& from) noexcept {
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
  static const HelloReply& default_instance() {
    return *internal_default_instance();
  }
  static inline const HelloReply* internal_default_instance() {
    return reinterpret_cast<const HelloReply*>(
               &_HelloReply_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(HelloReply& a, HelloReply& b) {
    a.Swap(&b);
  }
  inline void Swap(HelloReply* other) {
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
  void UnsafeArenaSwap(HelloReply* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HelloReply* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HelloReply>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HelloReply& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HelloReply& from) {
    HelloReply::MergeImpl(*this, from);
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
  void InternalSwap(HelloReply* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "helloworld.HelloReply";
  }
  protected:
  explicit HelloReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMsgFieldNumber = 1,
    kStatusFieldNumber = 2,
  };
  // string msg = 1;
  void clear_msg();
  const std::string& msg() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_msg(ArgT0&& arg0, ArgT... args);
  std::string* mutable_msg();
  PROTOBUF_NODISCARD std::string* release_msg();
  void set_allocated_msg(std::string* msg);
  private:
  const std::string& _internal_msg() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_msg(const std::string& value);
  std::string* _internal_mutable_msg();
  public:

  // int32 status = 2;
  void clear_status();
  int32_t status() const;
  void set_status(int32_t value);
  private:
  int32_t _internal_status() const;
  void _internal_set_status(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:helloworld.HelloReply)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr msg_;
    int32_t status_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_hello_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HelloRequest

// int32 id = 1;
inline void HelloRequest::clear_id() {
  _impl_.id_ = 0;
}
inline int32_t HelloRequest::_internal_id() const {
  return _impl_.id_;
}
inline int32_t HelloRequest::id() const {
  // @@protoc_insertion_point(field_get:helloworld.HelloRequest.id)
  return _internal_id();
}
inline void HelloRequest::_internal_set_id(int32_t value) {
  
  _impl_.id_ = value;
}
inline void HelloRequest::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:helloworld.HelloRequest.id)
}

// string title = 2;
inline void HelloRequest::clear_title() {
  _impl_.title_.ClearToEmpty();
}
inline const std::string& HelloRequest::title() const {
  // @@protoc_insertion_point(field_get:helloworld.HelloRequest.title)
  return _internal_title();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloRequest::set_title(ArgT0&& arg0, ArgT... args) {
 
 _impl_.title_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:helloworld.HelloRequest.title)
}
inline std::string* HelloRequest::mutable_title() {
  std::string* _s = _internal_mutable_title();
  // @@protoc_insertion_point(field_mutable:helloworld.HelloRequest.title)
  return _s;
}
inline const std::string& HelloRequest::_internal_title() const {
  return _impl_.title_.Get();
}
inline void HelloRequest::_internal_set_title(const std::string& value) {
  
  _impl_.title_.Set(value, GetArenaForAllocation());
}
inline std::string* HelloRequest::_internal_mutable_title() {
  
  return _impl_.title_.Mutable(GetArenaForAllocation());
}
inline std::string* HelloRequest::release_title() {
  // @@protoc_insertion_point(field_release:helloworld.HelloRequest.title)
  return _impl_.title_.Release();
}
inline void HelloRequest::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    
  } else {
    
  }
  _impl_.title_.SetAllocated(title, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.title_.IsDefault()) {
    _impl_.title_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:helloworld.HelloRequest.title)
}

// -------------------------------------------------------------------

// HelloReply

// string msg = 1;
inline void HelloReply::clear_msg() {
  _impl_.msg_.ClearToEmpty();
}
inline const std::string& HelloReply::msg() const {
  // @@protoc_insertion_point(field_get:helloworld.HelloReply.msg)
  return _internal_msg();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void HelloReply::set_msg(ArgT0&& arg0, ArgT... args) {
 
 _impl_.msg_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:helloworld.HelloReply.msg)
}
inline std::string* HelloReply::mutable_msg() {
  std::string* _s = _internal_mutable_msg();
  // @@protoc_insertion_point(field_mutable:helloworld.HelloReply.msg)
  return _s;
}
inline const std::string& HelloReply::_internal_msg() const {
  return _impl_.msg_.Get();
}
inline void HelloReply::_internal_set_msg(const std::string& value) {
  
  _impl_.msg_.Set(value, GetArenaForAllocation());
}
inline std::string* HelloReply::_internal_mutable_msg() {
  
  return _impl_.msg_.Mutable(GetArenaForAllocation());
}
inline std::string* HelloReply::release_msg() {
  // @@protoc_insertion_point(field_release:helloworld.HelloReply.msg)
  return _impl_.msg_.Release();
}
inline void HelloReply::set_allocated_msg(std::string* msg) {
  if (msg != nullptr) {
    
  } else {
    
  }
  _impl_.msg_.SetAllocated(msg, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.msg_.IsDefault()) {
    _impl_.msg_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:helloworld.HelloReply.msg)
}

// int32 status = 2;
inline void HelloReply::clear_status() {
  _impl_.status_ = 0;
}
inline int32_t HelloReply::_internal_status() const {
  return _impl_.status_;
}
inline int32_t HelloReply::status() const {
  // @@protoc_insertion_point(field_get:helloworld.HelloReply.status)
  return _internal_status();
}
inline void HelloReply::_internal_set_status(int32_t value) {
  
  _impl_.status_ = value;
}
inline void HelloReply::set_status(int32_t value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:helloworld.HelloReply.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace helloworld

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_hello_2eproto
