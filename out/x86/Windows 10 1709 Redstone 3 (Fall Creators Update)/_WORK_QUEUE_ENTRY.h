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
#include <_CC_PARTITION.h>

//0x50 bytes (sizeof)
struct _WORK_QUEUE_ENTRY
{
    struct _LIST_ENTRY WorkQueueLinks;                                      //0x0
    union
    {
        struct
        {
            struct _FILE_OBJECT* FileObject;                                //0x8
            VOID* DiskIoAttribution;                                        //0xc
        } Read;                                                             //0x8
        struct
        {
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0x8
        } Write;                                                            //0x8
        struct
        {
            struct _KEVENT* Event;                                          //0x8
        } Event;                                                            //0x8
        struct
        {
            ULONG Reason;                                                   //0x8
        } Notification;                                                     //0x8
        struct
        {
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0x8
            struct _IO_STATUS_BLOCK* IoStatus;                              //0xc
            struct _KEVENT CallerWaitEvent;                                 //0x10
            UCHAR IsLowPriWriteBehind;                                      //0x20
        } LowPriWrite;                                                      //0x8
        struct
        {
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0x8
            union _LARGE_INTEGER FileOffset;                                //0x10
            struct _FILE_OBJECT* FileObject;                                //0x18
            ULONG Length;                                                   //0x1c
            struct _SINGLE_LIST_ENTRY* PrefetchList;                        //0x20
            ULONG PrefetchPagePriority;                                     //0x24
            struct _MDL* Mdl;                                               //0x28
            struct _IO_STATUS_BLOCK* IoStatusBlock;                         //0x2c
            struct _CC_ASYNC_READ_CONTEXT* CallbackContext;                 //0x30
            struct _EPROCESS* OriginatingProcess;                           //0x34
            struct _ETHREAD* IoIssuerThread;                                //0x38
            VOID* DiskIoAttribution;                                        //0x3c
            CHAR RequestorMode;                                             //0x40
            ULONG NestingLevel;                                             //0x44
        } AsyncRead;                                                        //0x8
    } Parameters;                                                           //0x8
    UCHAR Function;                                                         //0x48
    struct _CC_PARTITION* Partition;                                        //0x4c
};
