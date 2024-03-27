#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_OWNER_ENTRY.h>
#include <_KSEMAPHORE.h>
#include <_KEVENT.h>

//0x38 bytes (sizeof)
struct _ERESOURCE
{
    struct _LIST_ENTRY SystemResourcesList;                                 //0x0
    struct _OWNER_ENTRY* OwnerTable;                                        //0x8
    SHORT ActiveCount;                                                      //0xc
    USHORT Flag;                                                            //0xe
    struct _KSEMAPHORE* SharedWaiters;                                      //0x10
    struct _KEVENT* ExclusiveWaiters;                                       //0x14
    struct _OWNER_ENTRY OwnerThreads[2];                                    //0x18
    ULONG ContentionCount;                                                  //0x28
    USHORT NumberOfSharedWaiters;                                           //0x2c
    USHORT NumberOfExclusiveWaiters;                                        //0x2e
    union
    {
        VOID* Address;                                                      //0x30
        ULONG CreatorBackTraceIndex;                                        //0x30
    };
    ULONG SpinLock;                                                         //0x34
};
/* Used in */
// _EJOB
// _FAST_IO_DISPATCH
// _FS_FILTER_PARAMETERS
// _HEAP_LOCK
// _MMMOD_WRITER_MDL_ENTRY
// _MM_SESSION_SPACE
// _OBJECT_TYPE
// _TOKEN

