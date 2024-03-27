#pragma once
/* ------------------ */

#include <IORING_VERSION.h>
#include <_NT_IORING_CREATE_FLAGS.h>
#include <_NT_IORING_SUBMISSION_QUEUE.h>
#include <_NT_IORING_COMPLETION_QUEUE.h>

//0x30 bytes (sizeof)
struct _NT_IORING_INFO
{
    enum IORING_VERSION IoRingVersion;                                      //0x0
    struct _NT_IORING_CREATE_FLAGS Flags;                                   //0x4
    ULONG SubmissionQueueSize;                                              //0xc
    ULONG SubmissionQueueRingMask;                                          //0x10
    ULONG CompletionQueueSize;                                              //0x14
    ULONG CompletionQueueRingMask;                                          //0x18
    struct _NT_IORING_SUBMISSION_QUEUE* SubmissionQueue;                    //0x20
    struct _NT_IORING_COMPLETION_QUEUE* CompletionQueue;                    //0x28
};
/* Used in */
// _IORING_OBJECT

