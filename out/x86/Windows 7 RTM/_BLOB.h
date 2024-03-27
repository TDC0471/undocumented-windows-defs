#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x18 bytes (sizeof)
struct _BLOB
{
    union
    {
        struct _LIST_ENTRY ResourceList;                                    //0x0
        struct _SINGLE_LIST_ENTRY FreeListEntry;                            //0x0
    };
    union
    {
        struct
        {
            UCHAR ReferenceCache:1;                                         //0x8
            UCHAR Lookaside:1;                                              //0x8
            UCHAR Initializing:1;                                           //0x8
            UCHAR Deleted:1;                                                //0x8
        } s1;                                                               //0x8
        UCHAR Flags;                                                        //0x8
    } u1;                                                                   //0x8
    UCHAR ResourceId;                                                       //0x9
    SHORT CachedReferences;                                                 //0xa
    volatile LONG ReferenceCount;                                           //0xc
    struct _EX_PUSH_LOCK Lock;                                              //0x10
    ULONG Pad;                                                              //0x14
};
