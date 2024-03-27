#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KMUTANT.h>
#include <_KLDR_DATA_TABLE_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_DRIVER_VA.h>
#include <_MM_SYSTEM_PAGE_COUNTS.h>
#include <_RTL_AVL_TREE.h>

//0xc0 bytes (sizeof)
struct _MI_SYSTEM_IMAGE_STATE
{
    struct _LIST_ENTRY FixupList;                                           //0x0
    struct _KMUTANT LoadLock;                                               //0x10
    volatile LONG FixupLock;                                                //0x48
    UCHAR FirstLoadEver;                                                    //0x4c
    UCHAR LargePageAll;                                                     //0x4d
    ULONGLONG LastPage;                                                     //0x50
    struct _LIST_ENTRY LargePageList;                                       //0x58
    struct _LIST_ENTRY StrongCodeLoadFailureList;                           //0x68
    struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;                            //0x78
    struct _EX_PUSH_LOCK MappingRangesPushLock;                             //0x80
    struct _MI_DRIVER_VA* MappingRanges[2];                                 //0x88
    ULONGLONG PageCount;                                                    //0x98
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;                               //0xa0
    struct _EX_PUSH_LOCK CollidedLock;                                      //0xb0
    struct _RTL_AVL_TREE ImageTree;                                         //0xb8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

