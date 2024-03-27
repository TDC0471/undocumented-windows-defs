#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_RTL_AVL_TREE.h>
#include <_MI_ACCESS_VIOLATION_RANGE.h>

//0x54 bytes (sizeof)
struct _MI_POOL_STATE
{
    ULONG MaximumNonPagedPoolThreshold;                                     //0x0
    volatile ULONG AllocatedNonPagedPool;                                   //0x4
    struct _SINGLE_LIST_ENTRY BadPoolHead;                                  //0x8
    ULONG HighEventSets;                                                    //0xc
    UCHAR HighEventSetsValid;                                               //0x10
    ULONG LowPagedPoolThreshold;                                            //0x14
    ULONG HighPagedPoolThreshold;                                           //0x18
    volatile LONG PermittedFaultsLock;                                      //0x1c
    struct _RTL_AVL_TREE PermittedFaultsTree;                               //0x20
    struct _MI_ACCESS_VIOLATION_RANGE PermittedFaultsInitialNode[2];        //0x24
    ULONG TotalPagedPoolQuota;                                              //0x4c
    ULONG TotalNonPagedPoolQuota;                                           //0x50
};
/* Used in */
// _MI_SYSTEM_INFORMATION

