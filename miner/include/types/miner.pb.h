// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: miner.proto

#ifndef PROTOBUF_miner_2eproto__INCLUDED
#define PROTOBUF_miner_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "messages.pb.h"
#include "command.pb.h"
// @@protoc_insertion_point(includes)
namespace cauchy {
class CommandRequest;
class CommandRequestDefaultTypeInternal;
extern CommandRequestDefaultTypeInternal _CommandRequest_default_instance_;
class CommandStatusReply;
class CommandStatusReplyDefaultTypeInternal;
extern CommandStatusReplyDefaultTypeInternal _CommandStatusReply_default_instance_;
class Config;
class ConfigDefaultTypeInternal;
extern ConfigDefaultTypeInternal _Config_default_instance_;
class Connection;
class ConnectionDefaultTypeInternal;
extern ConnectionDefaultTypeInternal _Connection_default_instance_;
class DifficultyChange;
class DifficultyChangeDefaultTypeInternal;
extern DifficultyChangeDefaultTypeInternal _DifficultyChange_default_instance_;
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class End;
class EndDefaultTypeInternal;
extern EndDefaultTypeInternal _End_default_instance_;
class Error;
class ErrorDefaultTypeInternal;
extern ErrorDefaultTypeInternal _Error_default_instance_;
class Event;
class EventDefaultTypeInternal;
extern EventDefaultTypeInternal _Event_default_instance_;
class Job;
class JobDefaultTypeInternal;
extern JobDefaultTypeInternal _Job_default_instance_;
class MiningResult;
class MiningResultDefaultTypeInternal;
extern MiningResultDefaultTypeInternal _MiningResult_default_instance_;
class StatusReply;
class StatusReplyDefaultTypeInternal;
extern StatusReplyDefaultTypeInternal _StatusReply_default_instance_;
class StatusRequest;
class StatusRequestDefaultTypeInternal;
extern StatusRequestDefaultTypeInternal _StatusRequest_default_instance_;
class SystemStatus;
class SystemStatusDefaultTypeInternal;
extern SystemStatusDefaultTypeInternal _SystemStatus_default_instance_;
class SystemStatusReply;
class SystemStatusReplyDefaultTypeInternal;
extern SystemStatusReplyDefaultTypeInternal _SystemStatusReply_default_instance_;
class SystemStatusRequest;
class SystemStatusRequestDefaultTypeInternal;
extern SystemStatusRequestDefaultTypeInternal _SystemStatusRequest_default_instance_;
}  // namespace cauchy

namespace cauchy {

namespace protobuf_miner_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_miner_2eproto

// ===================================================================


// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace cauchy

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_miner_2eproto__INCLUDED
