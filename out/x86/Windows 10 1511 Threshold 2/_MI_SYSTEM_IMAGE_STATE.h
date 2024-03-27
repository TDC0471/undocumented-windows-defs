#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KMUTANT.h>
#include <_KLDR_DATA_TABLE_ENTRY.h>
#include <_EX_PUSH_LOCK.h>
#include <_MI_DRIVER_VA.h>
#include <_MM_SYSTEM_PAGE_COUNTS.h>
#include <_MMPTE.h>

//0x6c bytes (sizeof)
struct _MI_SYSTEM_IMAGE_STATE
{
    volatile LONG FixupLock;                                                //0x0
    struct _LIST_ENTRY FixupList;                                           //0x4
    struct _KMUTANT LoadLock;                                               //0xc
    UCHAR FirstLoadEver;                                                    //0x2c
    UCHAR LargePageAll;                                                     //0x2d
    ULONG LastPage;                                                         //0x30
    struct _LIST_ENTRY LargePageList;                                       //0x34
    struct _KLDR_DATA_TABLE_ENTRY* BeingDeleted;                            //0x3c
    struct _EX_PUSH_LOCK MappingRangesPushLock;                             //0x40
    struct _MI_DRIVER_VA* MappingRanges[2];                                 //0x44
    ULONG PageCount;                                                        //0x4c
    struct _MM_SYSTEM_PAGE_COUNTS PageCounts;                               //0x50
    struct _EX_PUSH_LOCK CollidedLock;                                      //0x60
    struct _MMPTE* ErrataPte;                                               //0x64
    ULONG ErrataPteMapped;                                                  //0x68
};
/* Used in */
// _MI_SYSTEM_INFORMATION

