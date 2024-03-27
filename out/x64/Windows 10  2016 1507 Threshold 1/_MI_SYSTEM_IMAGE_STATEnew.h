#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KMUTANT.h>
#include <_KLDR_DATA_TABLE_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_DRIVER_VA.h>
#include <_MM_SYSTEM_PAGE_COUNTS.h>

//0xb0 bytes (sizeof)
struct _MI_SYSTEM_IMAGE_STATE
{
    volatile LONG FixupLock;                                                //0x0
    struct _LIST_ENTRY FixupList;                                           //0x8
    struct _KMUTANT LoadLock;                                               //0x18
    UCHAR FirstLoadEver;                                                    //0x50
    UCHAR LargePageAll;                                                     //0x51
    ULONGLONG LastPage;                                                     //0x58
    struct _LIST_ENTRY LargePageList;                                       //0x60
    struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;                            //0x70
    struct _EX_PUSH_LOCK MappingRangesPushLock;                             //0x78
    struct _MI_DRIVER_VA* MappingRanges[2];                                 //0x80
    ULONGLONG PageCount;                                                    //0x90
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;                               //0x98
    struct _EX_PUSH_LOCK CollidedLock;                                      //0xa8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

