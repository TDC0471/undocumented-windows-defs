#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_CC_PARTITION.h>
#include <_LARGE_INTEGER.h>

//0x38 bytes (sizeof)
struct _DEFERRED_WRITE
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    struct _FILE_OBJECT* FileObject;                                        //0x4
    ULONG BytesToWrite;                                                     //0x8
    struct _LIST_ENTRY DeferredWriteLinks;                                  //0xc
    struct _KEVENT* Event;                                                  //0x14
    VOID (*PostRoutine)(VOID* arg1, VOID* arg2);                            //0x18
    VOID* Context1;                                                         //0x1c
    VOID* Context2;                                                         //0x20
    struct _CC_PARTITION* Partition;                                        //0x24
    UCHAR SoftThrottle;                                                     //0x28
    union _LARGE_INTEGER TimeAdded;                                         //0x30
};
