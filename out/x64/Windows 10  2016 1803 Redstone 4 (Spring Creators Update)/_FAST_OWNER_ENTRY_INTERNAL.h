#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x48 bytes (sizeof)
struct _FAST_OWNER_ENTRY_INTERNAL
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    UCHAR AbLockHandle;                                                     //0x10
    UCHAR Disowned:1;                                                       //0x11
    UCHAR DynamicallyAllocated:1;                                           //0x11
    UCHAR CallerExclusive:1;                                                //0x11
    UCHAR IsSublistHead;                                                    //0x12
    UCHAR IsWaiting;                                                        //0x13
    VOID* LockAddress;                                                      //0x18
    VOID* ThreadAddress;                                                    //0x20
    struct _LIST_ENTRY SublistHead;                                         //0x28
    struct _LIST_ENTRY LockListEntry;                                       //0x38
};
