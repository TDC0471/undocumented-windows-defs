#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_FILE_OBJECT.h>
#include <_SHARED_CACHE_MAP.h>
#include <_KEVENT.h>

//0x30 bytes (sizeof)
struct _WORK_QUEUE_ENTRY
{
    struct _LIST_ENTRY WorkQueueLinks;                                      //0x0
    struct _LIST_ENTRY CoalescedWorkQueueLinks;                             //0x10
    union
    {
        struct
        {
            struct _FILE_OBJECT* FileObject;                                //0x20
        } Read;                                                             //0x20
        struct
        {
            struct _SHARED_CACHE_MAP* SharedCacheMap;                       //0x20
        } Write;                                                            //0x20
        struct
        {
            struct _KEVENT* Event;                                          //0x20
        } Event;                                                            //0x20
        struct
        {
            ULONG Reason;                                                   //0x20
        } Notification;                                                     //0x20
    } Parameters;                                                           //0x20
    UCHAR Function;                                                         //0x28
};
