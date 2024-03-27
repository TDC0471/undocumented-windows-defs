#pragma once
/* ------------------ */

#include <_NT_IORING_SQ_FLAGS.h>
#include <_NT_IORING_SQE.h>

//0x50 bytes (sizeof)
struct _NT_IORING_SUBMISSION_QUEUE
{
    ULONG Head;                                                             //0x0
    ULONG Tail;                                                             //0x4
    enum _NT_IORING_SQ_FLAGS Flags;                                         //0x8
    struct _NT_IORING_SQE Entries[1];                                       //0x10
};
/* Used in */
// _IORING_OBJECT
// _NT_IORING_INFO

