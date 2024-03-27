#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_FILE_OBJECT.h>
#include <_SHARED_CACHE_MAP.h>
#include <_KEVENT.h>
#include <_IO_STATUS_BLOCK.h>
#include <_LARGE_INTEGER.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MDL.h>
#include <_CC_ASYNC_READ_CONTEXT.h>
#include <_EPROCESS.h>
#include <_ETHREAD.h>
#include <_CC_FLUSH_PACKET.h>
#include <_WORKER_FUNCTION.h>
#include <_CC_PARTITION.h>
#include <_PRIVATE_VOLUME_CACHEMAP.h>
#include <_CC_NUMA_NODE.h>

//0xa0 bytes (sizeof)
struct _WORK_QUEUE_ENTRY
{
    struct _LIST_ENTRY WorkQueueLinks;                                      //0x0
    union
    {
        struct
        {
            struct _FILE_OBJECT* FileObject;                                //0x10
            VOID* DiskIoAttribution;                                        //0x18
        } Read;                                                             //0x10
        struct
        {
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0x10
        } Write;                                                            //0x10
        struct
        {
            struct _KEVENT* Event;                                          //0x10
        } Event;                                                            //0x10
        struct
        {
            ULONG Reason;                                                   //0x10
        } Notification;                                                     //0x10
        struct
        {
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0x10
            struct _IO_STATUS_BLOCK* IoStatus;                              //0x18
            struct _KEVENT CallerWaitEvent;                                 //0x20
            UCHAR IsLowPriWriteBehind;                                      //0x38
        } LowPriWrite;                                                      //0x10
        struct
        {
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0x10
            union _LARGE_INTEGER FileOffset;                                //0x18
            struct _FILE_OBJECT* FileObject;                                //0x20
            ULONG Length;                                                   //0x28
            struct _SINGLE_LIST_ENTRY* PrefetchList;                        //0x30
            ULONG PrefetchPagePriority;                                     //0x38
            struct _MDL* Mdl;                                               //0x40
            struct _IO_STATUS_BLOCK* IoStatusBlock;                         //0x48
            struct _CC_ASYNC_READ_CONTEXT* CallbackContext;                 //0x50
            struct _EPROCESS* OriginatingProcess;                           //0x58
            struct _ETHREAD* IoIssuerThread;                                //0x60
            VOID* DiskIoAttribution;                                        //0x68
            CHAR RequestorMode;                                             //0x70
            ULONG NestingLevel;                                             //0x74
            union _LARGE_INTEGER StartTime;                                 //0x78
        } AsyncRead;                                                        //0x10
        struct
        {
            struct _CC_FLUSH_PACKET* FlushPacket;                           //0x10
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0x18
            struct _KEVENT FlushEvent;                                      //0x20
            struct _IO_STATUS_BLOCK IoStatus;                               //0x38
            UCHAR DoWriteBehindPostProcessing;                              //0x48
        } AsyncWriteBehind;                                                 //0x10
    } Parameters;                                                           //0x10
    enum _WORKER_FUNCTION Function;                                         //0x80
    struct _CC_PARTITION* Partition;                                        //0x88
    struct _PRIVATE_VOLUME_CACHEMAP* PrivateVolumeCacheMap;                 //0x90
    struct _CC_NUMA_NODE* NumaNode;                                         //0x98
};
/* Used in */
// _CC_FLUSH_PACKET

