#pragma once
/* ------------------ */

#include <_NT_IORING_OP_FLAGS.h>
#include <_NT_WRITE_FLAGS.h>
#include <_NT_IORING_HANDLEREF.h>
#include <_NT_IORING_BUFFERREF.h>

//0x28 bytes (sizeof)
struct _NT_IORING_OP_WRITE
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;                                 //0x0
    enum _NT_WRITE_FLAGS Flags;                                             //0x4
    union _NT_IORING_HANDLEREF File;                                        //0x8
    union _NT_IORING_BUFFERREF Buffer;                                      //0x10
    ULONGLONG Offset;                                                       //0x18
    ULONG Length;                                                           //0x20
    ULONG Key;                                                              //0x24
};
/* Used in */
// _NT_IORING_SQE

