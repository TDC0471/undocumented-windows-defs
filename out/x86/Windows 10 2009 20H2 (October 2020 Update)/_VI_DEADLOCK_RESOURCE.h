#pragma once
/* ------------------ */

#include <_VI_DEADLOCK_RESOURCE_TYPE.h>
#include <_VI_DEADLOCK_THREAD.h>
#include <_LIST_ENTRY.h>

//0x80 bytes (sizeof)
struct _VI_DEADLOCK_RESOURCE
{
    enum _VI_DEADLOCK_RESOURCE_TYPE Type;                                   //0x0
    ULONG NodeCount:16;                                                     //0x4
    ULONG RecursionCount:16;                                                //0x4
    VOID* ResourceAddress;                                                  //0x8
    struct _VI_DEADLOCK_THREAD* ThreadOwner;                                //0xc
    struct _LIST_ENTRY ResourceList;                                        //0x10
    union
    {
        struct _LIST_ENTRY HashChainList;                                   //0x18
        struct _LIST_ENTRY FreeListEntry;                                   //0x18
    };
    VOID* StackTrace[8];                                                    //0x20
    VOID* LastAcquireTrace[8];                                              //0x40
    VOID* LastReleaseTrace[8];                                              //0x60
};
/* Used in */
// _VI_DEADLOCK_NODE

