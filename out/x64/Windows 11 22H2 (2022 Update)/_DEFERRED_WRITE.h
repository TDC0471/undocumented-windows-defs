#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_KEVENT.h>
#include <_CC_PARTITION.h>
#include <_PRIVATE_VOLUME_CACHEMAP.h>
#include <_LARGE_INTEGER.h>

//0x68 bytes (sizeof)
struct _DEFERRED_WRITE
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    struct _FILE_OBJECT* FileObject;                                        //0x8
    ULONG BytesToWrite;                                                     //0x10
    struct _LIST_ENTRY DeferredWriteLinks;                                  //0x18
    struct _KEVENT* Event;                                                  //0x28
    VOID (*PostRoutine)(VOID* arg1, VOID* arg2);                            //0x30
    VOID* Context1;                                                         //0x38
    VOID* Context2;                                                         //0x40
    struct _CC_PARTITION* Partition;                                        //0x48
    struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;                 //0x50
    UCHAR SoftThrottle;                                                     //0x58
    union _LARGE_INTEGER TimeAdded;                                         //0x60
};
