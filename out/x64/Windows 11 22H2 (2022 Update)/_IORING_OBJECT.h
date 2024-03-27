#pragma once
/* ------------------ */

#include <_NT_IORING_INFO.h>
#include <_NT_IORING_SUBMISSION_QUEUE.h>
#include <_MDL.h>
#include <_NT_IORING_COMPLETION_QUEUE.h>
#include <_KEVENT.h>
#include <_IOP_MC_BUFFER_ENTRY.h>

//0xd0 bytes (sizeof)
struct _IORING_OBJECT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _NT_IORING_INFO UserInfo;                                        //0x8
    VOID* Section;                                                          //0x38
    struct _NT_IORING_SUBMISSION_QUEUE* SubmissionQueue;                    //0x40
    struct _MDL* CompletionQueueMdl;                                        //0x48
    struct _NT_IORING_COMPLETION_QUEUE* CompletionQueue;                    //0x50
    ULONGLONG ViewSize;                                                     //0x58
    LONG InSubmit;                                                          //0x60
    ULONGLONG CompletionLock;                                               //0x68
    ULONGLONG SubmitCount;                                                  //0x70
    ULONGLONG CompletionCount;                                              //0x78
    ULONGLONG CompletionWaitUntil;                                          //0x80
    struct _KEVENT CompletionEvent;                                         //0x88
    UCHAR SignalCompletionEvent;                                            //0xa0
    struct _KEVENT* CompletionUserEvent;                                    //0xa8
    ULONG RegBuffersCount;                                                  //0xb0
    struct _IOP_MC_BUFFER_ENTRY** RegBuffers;                               //0xb8
    ULONG RegFilesCount;                                                    //0xc0
    VOID** RegFiles;                                                        //0xc8
};
/* Used in */
// _IRP

