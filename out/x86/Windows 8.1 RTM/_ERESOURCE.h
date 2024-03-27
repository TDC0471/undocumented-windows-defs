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
    union
    {
        USHORT Flag;                                                        //0xe
        struct
        {
            UCHAR ReservedLowFlags;                                         //0xe
            UCHAR WaiterPriority;                                           //0xf
        };
    };
    struct _KSEMAPHORE* SharedWaiters;                                      //0x10
    struct _KEVENT* ExclusiveWaiters;                                       //0x14
    struct _OWNER_ENTRY OwnerEntry;                                         //0x18
    ULONG ActiveEntries;                                                    //0x20
    ULONG ContentionCount;                                                  //0x24
    ULONG NumberOfSharedWaiters;                                            //0x28
    ULONG NumberOfExclusiveWaiters;                                         //0x2c
    union
    {
        VOID* Address;                                                      //0x30
        ULONG CreatorBackTraceIndex;                                        //0x30
    };
    ULONG SpinLock;                                                         //0x34
};
/* Used in */
// _CMHIVE
// _CM_RM
// _EJOB
// _FAST_IO_DISPATCH
// _FSRTL_ADVANCED_FCB_HEADER
// _FS_FILTER_PARAMETERS
// _HEAP_LOCK
// _KTM
// _MMMOD_WRITER_MDL_ENTRY
// _TOKEN

