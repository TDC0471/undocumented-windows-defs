#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_OWNER_ENTRY.h>

//0x68 bytes (sizeof)
struct _ERESOURCE
{
    struct _LIST_ENTRY SystemResourcesList;                                 //0x0
    struct _OWNER_ENTRY* OwnerTable;                                        //0x10
    SHORT ActiveCount;                                                      //0x18
    union
    {
        USHORT Flag;                                                        //0x1a
        struct
        {
            UCHAR ReservedLowFlags;                                         //0x1a
            UCHAR WaiterPriority;                                           //0x1b
        };
    };
    VOID* SharedWaiters;                                                    //0x20
    VOID* ExclusiveWaiters;                                                 //0x28
    struct _OWNER_ENTRY OwnerEntry;                                         //0x30
    ULONG ActiveEntries;                                                    //0x40
    ULONG ContentionCount;                                                  //0x44
    ULONG NumberOfSharedWaiters;                                            //0x48
    ULONG NumberOfExclusiveWaiters;                                         //0x4c
    VOID* Reserved2;                                                        //0x50
    union
    {
        VOID* Address;                                                      //0x58
        ULONGLONG CreatorBackTraceIndex;                                    //0x58
    };
    ULONGLONG SpinLock;                                                     //0x60
};
/* Used in */
// _BCB
// _CM_RM
// _EJOB
// _FAST_IO_DISPATCH
// _FSRTL_ADVANCED_FCB_HEADER
// _FSRTL_COMMON_FCB_HEADER
// _FS_FILTER_PARAMETERS
// _HEAP_LOCK
// _KTM
// _MMMOD_WRITER_MDL_ENTRY
// _TOKEN

