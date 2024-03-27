#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_ETHREAD.h>
#include <_KLDR_DATA_TABLE_ENTRY.h>
#include <_MI_DRIVER_VA.h>
#include <_MM_SYSTEM_PAGE_COUNTS.h>
#include <_MI_DRIVER_PAGES_ALLOCATE_STATE.h>
#include <_RTL_AVL_TREE.h>

//0x168 bytes (sizeof)
struct _MI_SYSTEM_IMAGE_STATE
{
    struct _LIST_ENTRY FixupList;                                           //0x0
    struct _EX_PUSH_LOCK LoadLock;                                          //0x10
    struct _ETHREAD* LoadLockOwner;                                         //0x18
    ULONG LoadLockCount;                                                    //0x20
    volatile LONG FixupLock;                                                //0x24
    UCHAR FirstLoadEver;                                                    //0x28
    UCHAR LargePageAll;                                                     //0x29
    struct _LIST_ENTRY LargePageList;                                       //0x30
    struct _LIST_ENTRY StrongCodeLoadFailureList;                           //0x40
    struct _KLDR_DATA_TABLE_ENTRY* SystemBase[1];                           //0x50
    struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;                            //0x58
    struct _EX_PUSH_LOCK MappingRangesPushLock;                             //0x60
    struct _MI_DRIVER_VA* MappingRanges[2];                                 //0x68
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;                               //0x78
    struct _EX_PUSH_LOCK CollidedLock;                                      //0x88
    struct _MI_DRIVER_PAGES_ALLOCATE_STATE PagesAllocateState;              //0x90
    struct _RTL_AVL_TREE ImageTree;                                         //0x158
    struct _KLDR_DATA_TABLE_ENTRY* LoadInProgress;                          //0x160
};
/* Used in */
// _MI_SYSTEM_INFORMATION

