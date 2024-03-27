#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_SLIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x30 bytes (sizeof)
struct _BLOB
{
    union
    {
        struct _LIST_ENTRY ResourceList;                                    //0x0
        struct _SLIST_ENTRY FreeListEntry;                                  //0x0
    };
    union
    {
        struct
        {
            UCHAR ReferenceCache:1;                                         //0x10
            UCHAR Lookaside:1;                                              //0x10
            UCHAR Initializing:1;                                           //0x10
            UCHAR Deleted:1;                                                //0x10
        } s1;                                                               //0x10
        UCHAR Flags;                                                        //0x10
    } u1;                                                                   //0x10
    UCHAR ResourceId;                                                       //0x11
    SHORT CachedReferences;                                                 //0x12
    LONGLONG ReferenceCount;                                                //0x18
    struct _EX_PUSH_LOCK Lock;                                              //0x20
};
