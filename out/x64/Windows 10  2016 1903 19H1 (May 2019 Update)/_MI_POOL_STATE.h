#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_ACCESS_VIOLATION_RANGE.h>

//0xa0 bytes (sizeof)
struct _MI_POOL_STATE
{
    ULONGLONG MaximumNonPagedPoolThreshold;                                 //0x0
    volatile ULONGLONG AllocatedNonPagedPool;                               //0x8
    struct _SINGLE_LIST_ENTRY BadPoolHead;                                  //0x10
    ULONG HighEventSets;                                                    //0x18
    UCHAR HighEventSetsValid;                                               //0x1c
    ULONGLONG LowPagedPoolThreshold;                                        //0x20
    ULONGLONG HighPagedPoolThreshold;                                       //0x28
    volatile LONG PermittedFaultsLock;                                      //0x30
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x38
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];        //0x40
    ULONGLONG TotalPagedPoolQuota;                                          //0x90
    ULONGLONG TotalNonPagedPoolQuota;                                       //0x98
};
/* Used in */
// _MI_SYSTEM_INFORMATION

