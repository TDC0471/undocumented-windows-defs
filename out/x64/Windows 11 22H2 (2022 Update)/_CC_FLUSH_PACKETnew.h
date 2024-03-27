#pragma once
/* ------------------ */

#include <_CC_PARTITION.h>
#include <_PRIVATE_VOLUME_CACHEMAP.h>
#include <_SHARED_CACHE_MAP.h>
#include <_SECTION_OBJECT_POINTERS.h>
#include <_LARGE_INTEGER.h>
#include <_KEVENT.h>
#include <_IO_STATUS_BLOCK.h>
#include <_BCB.h>
#include <_FSRTL_COMMON_FCB_HEADER.h>
#include <_WORK_QUEUE_ENTRY.h>
#include <_LIST_ENTRY.h>

//0x108 bytes (sizeof)
struct _CC_FLUSH_PACKET
{
    struct _CC_PARTITION* Partition;                                        //0x0
    struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;                 //0x8
    struct _SHARED_CACHE_MAP* SharedCacheMap;                               //0x10
    struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;                  //0x18
    union _LARGE_INTEGER TargetOffset;                                      //0x20
    union _LARGE_INTEGER NextFileOffset;                                    //0x28
    ULONG NextLength;                                                       //0x30
    ULONG BytesWritten;                                                     //0x34
    ULONG MmFlushFlags;                                                     //0x38
    ULONG HotSpot;                                                          //0x3c
    ULONG VerifyRequired;                                                   //0x40
    struct _KEVENT* FlushEvent;                                             //0x48
    union _LARGE_INTEGER FlushLargestLsn;                                   //0x50
    union _LARGE_INTEGER* LargestLsn;                                       //0x58
    union _LARGE_INTEGER* CallersFileOffset;                                //0x60
    ULONG CallersLength;                                                    //0x68
    UCHAR MarkWritethrough;                                                 //0x6c
    struct _IO_STATUS_BLOCK* CallersIoStatus;                               //0x70
    struct _BCB* FirstBcb;                                                  //0x78
    LONG FirstFailureStatus;                                                //0x80
    UCHAR IsLazyWriter;                                                     //0x84
    UCHAR FastLazyWrite;                                                    //0x85
    UCHAR ForceFullFlush;                                                   //0x86
    UCHAR PerformedFlushForMemMapped;                                       //0x87
    UCHAR TeardownFlagBeforeFlush;                                          //0x88
    UCHAR ShouldRetryTeardown;                                              //0x89
    UCHAR FlushForImageSection;                                             //0x8a
    UCHAR ForceSynchronousLazyWrite;                                        //0x8b
    ULONG AcquireForLazyWriteOutFlags;                                      //0x8c
    union _LARGE_INTEGER StartTick;                                         //0x90
    union _LARGE_INTEGER EndTick;                                           //0x98
    struct _FSRTL_COMMON_FCB_HEADER* FsContext;                             //0xa0
    struct _WORK_QUEUE_ENTRY* WorkEntry;                                    //0xa8
    struct _LIST_ENTRY* DeferredWritesList;                                 //0xb0
    UCHAR* CoalescingState;                                                 //0xb8
    UCHAR DoSinglePassFlush;                                                //0xc0
    UCHAR RecordedSinglePassStartOffset;                                    //0xc1
    union _LARGE_INTEGER SinglePassStartOffset;                             //0xc8
    ULONGLONG DirtyPagesAtStart;                                            //0xd0
    ULONGLONG TotalBytesWritten;                                            //0xd8
    union _LARGE_INTEGER LwFlushStart;                                      //0xe0
    union _LARGE_INTEGER LwFlushEnd;                                        //0xe8
    ULONG TotalPagesFlushed;                                                //0xf0
    ULONG PagesToWrite;                                                     //0xf4
    ULONG RequeueToHeadCount;                                               //0xf8
    struct _WORK_QUEUE_ENTRY* WorkQueueEntry;                               //0x100
};
/* Used in */
// _WORK_QUEUE_ENTRY

