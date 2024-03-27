#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_ACCESS_VIOLATION_RANGE.h>

//0xa8 bytes (sizeof)
struct _MI_POOL_STATE
{
    ULONGLONG MaximumNonPagedPoolThreshold;                                 //0x0
    volatile ULONGLONG AllocatedNonPagedPool;                               //0x8
    volatile ULONGLONG AllocatedSecureNonPagedPool;                         //0x10
    struct _SINGLE_LIST_ENTRY BadPoolHead;                                  //0x18
    ULONG HighEventSets;                                                    //0x20
    UCHAR HighEventSetsValid;                                               //0x24
    ULONGLONG LowPagedPoolThreshold;                                        //0x28
    ULONGLONG HighPagedPoolThreshold;                                       //0x30
    volatile LONG PermittedFaultsLock;                                      //0x38
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x40
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];        //0x48
    ULONGLONG TotalPagedPoolQuota;                                          //0x98
    ULONGLONG TotalNonPagedPoolQuota;                                       //0xa0
};
/* Used in */
// _MI_SYSTEM_INFORMATION

