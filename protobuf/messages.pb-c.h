/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: messages.proto */

#ifndef PROTOBUF_C_messages_2eproto__INCLUDED
#define PROTOBUF_C_messages_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1000002 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _Parametri Parametri;


/* --- enums --- */


/* --- messages --- */

struct  _Parametri
{
  ProtobufCMessage base;
  char *mese;
  int32_t anno;
};
#define PARAMETRI__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&parametri__descriptor) \
    , NULL, 0 }


/* Parametri methods */
void   parametri__init
                     (Parametri         *message);
size_t parametri__get_packed_size
                     (const Parametri   *message);
size_t parametri__pack
                     (const Parametri   *message,
                      uint8_t             *out);
size_t parametri__pack_to_buffer
                     (const Parametri   *message,
                      ProtobufCBuffer     *buffer);
Parametri *
       parametri__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   parametri__free_unpacked
                     (Parametri *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*Parametri_Closure)
                 (const Parametri *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor parametri__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_messages_2eproto__INCLUDED */
