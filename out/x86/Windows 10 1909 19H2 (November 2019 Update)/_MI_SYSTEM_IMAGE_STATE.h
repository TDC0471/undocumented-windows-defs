#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_ETHREAD.h>
#include <_KLDR_DATA_TABLE_ENTRY.h>
#include <_MI_DRIVER_VA.h>
#include <_MM_SYSTEM_PAGE_COUNTS.h>
#include <_RTL_AVL_TREE.h>

//0x5c bytes (sizeof)
struct _MI_SYSTEM_IMAGE_STATE
{
    struct _LIST_ENTRY FixupList;                                           //0x0
    struct _EX_PUSH_LOCK LoadLock;                                          //0x8
    struct _ETHREAD* LoadLockOwner;                                         //0xc
    ULONG LoadLockCount;                                                    //0x10
    volatile LONG FixupLock;                                                //0x14
    UCHAR FirstLoadEver;                                                    //0x18
    UCHAR LargePageAll;                                                     //0x19
    ULONG LastPage;                                                         //0x1c
    struct _LIST_ENTRY LargePageList;                                       //0x20
    struct _LIST_ENTRY StrongCodeLoadFailureList;                           //0x28
    struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;                            //0x30
    struct _EX_PUSH_LOCK MappingRangesPushLock;                             //0x34
    struct _MI_DRIVER_VA* MappingRanges[2];                                 //0x38
    ULONG PageCount;                                                        //0x40
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;                               //0x44
    struct _EX_PUSH_LOCK CollidedLock;                                      //0x54
    struct _RTL_AVL_TREE ImageTree;                                         //0x58
};
/* Used in */
// _MI_SYSTEM_INFORMATION

