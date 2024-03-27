#pragma once
/* ------------------ */

#include <_RTL_HASH_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_POOL_LIMIT_INFO.h>
#include <_WNF_STATE_NAME.h>
#include <_SLIST_ENTRY.h>

//0x70 bytes (sizeof)
struct _POOL_LIMIT_TABLE_ENTRY
{
    union
    {
        struct _RTL_HASH_ENTRY HashEntry;                                   //0x0
        struct
        {
            ULONGLONG Reserved;                                             //0x0
            struct _SINGLE_LIST_ENTRY SListEntry;                           //0x8
        };
    };
    struct _POOL_LIMIT_INFO LimitInfo[2];                                   //0x10
    struct _WNF_STATE_NAME NotificationObject;                              //0x40
    struct _SLIST_ENTRY NotificationEntry;                                  //0x50
    ULONG Scheduled;                                                        //0x60
};
/* Used in */
// _POOL_TRACKER_TABLE

