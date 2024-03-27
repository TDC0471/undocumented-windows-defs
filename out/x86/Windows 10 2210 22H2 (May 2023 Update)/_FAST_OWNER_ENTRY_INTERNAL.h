#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x24 bytes (sizeof)
struct _FAST_OWNER_ENTRY_INTERNAL
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    UCHAR AbLockHandle;                                                     //0x8
    UCHAR Disowned:1;                                                       //0x9
    UCHAR DynamicallyAllocated:1;                                           //0x9
    UCHAR CallerExclusive:1;                                                //0x9
    UCHAR IsSublistHead;                                                    //0xa
    UCHAR IsWaiting;                                                        //0xb
    VOID* LockAddress;                                                      //0xc
    VOID* ThreadAddress;                                                    //0x10
    struct _LIST_ENTRY SublistHead;                                         //0x14
    struct _LIST_ENTRY LockListEntry;                                       //0x1c
};
