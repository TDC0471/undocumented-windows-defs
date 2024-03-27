#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_OWNER_ENTRY.h>
#include <_KSEMAPHORE.h>
#include <_KEVENT.h>

//0x68 bytes (sizeof)
struct _ERESOURCE
{
    struct _LIST_ENTRY SystemResourcesList;                                 //0x0
    struct _OWNER_ENTRY* OwnerTable;                                        //0x10
    SHORT ActiveCount;                                                      //0x18
    USHORT Flag;                                                            //0x1a
    struct _KSEMAPHORE* SharedWaiters;                                      //0x20
    struct _KEVENT* ExclusiveWaiters;                                       //0x28
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
// _CM_RM
// _EJOB
// _FAST_IO_DISPATCH
// _FS_FILTER_PARAMETERS
// _KTM
// _MMMOD_WRITER_MDL_ENTRY
// _OBJECT_TYPE
// _TOKEN

