#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KMUTANT.h>
#include <_KLDR_DATA_TABLE_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_DRIVER_VA.h>
#include <_MM_SYSTEM_PAGE_COUNTS.h>

//0xc0 bytes (sizeof)
struct _MI_SYSTEM_IMAGE_STATE
{
    volatile LONG FixupLock;                                                //0x0
    struct _LIST_ENTRY FixupList;                                           //0x8
    struct _KMUTANT LoadLock;                                               //0x18
    UCHAR FirstLoadEver;                                                    //0x50
    UCHAR LargePageAll;                                                     //0x51
    ULONGLONG LastPage;                                                     //0x58
    struct _LIST_ENTRY LargePageList;                                       //0x60
    struct _LIST_ENTRY StrongCodeLoadFailureList;                           //0x70
    struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;                            //0x80
    struct _EX_PUSH_LOCK MappingRangesPushLock;                             //0x88
    struct _MI_DRIVER_VA* MappingRanges[2];                                 //0x90
    ULONGLONG PageCount;                                                    //0xa0
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;                               //0xa8
    struct _EX_PUSH_LOCK CollidedLock;                                      //0xb8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

