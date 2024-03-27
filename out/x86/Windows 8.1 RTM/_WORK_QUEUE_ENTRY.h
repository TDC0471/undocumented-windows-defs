#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_FILE_OBJECT.h>
#include <_SHARED_CACHE_MAP.h>
#include <_KEVENT.h>
#include <_IO_STATUS_BLOCK.h>

//0x28 bytes (sizeof)
struct _WORK_QUEUE_ENTRY
{
    struct _LIST_ENTRY WorkQueueLinks;                                      //0x0
    union
    {
        struct
        {
            struct _FILE_OBJECT* FileObject;                                //0x8
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
    } Parameters;                                                           //0x8
    UCHAR Function;                                                         //0x24
};
