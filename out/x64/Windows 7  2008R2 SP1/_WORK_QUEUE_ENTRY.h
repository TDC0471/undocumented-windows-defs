#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_FILE_OBJECT.h>
#include <_SHARED_CACHE_MAP.h>
#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _WORK_QUEUE_ENTRY
{
    struct _LIST_ENTRY WorkQueueLinks;                                      //0x0
    union
    {
        struct
        {
            struct _FILE_OBJECT* FileObject;                                //0x10
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
    } Parameters;                                                           //0x10
    UCHAR Function;                                                         //0x18
};
