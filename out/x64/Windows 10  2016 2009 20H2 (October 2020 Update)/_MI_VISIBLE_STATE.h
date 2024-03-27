#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMSUPPORT_SHARED.h>
#include <_MMSUPPORT_AGGREGATION.h>
#include <_SYSPTES_HEADER.h>
#include <_MI_SYSTEM_VA_ASSIGNMENT.h>

//0xcc0 bytes (sizeof)
struct _MI_VISIBLE_STATE
{
    struct _LIST_ENTRY SessionWsList;                                       //0x0
    struct _RTL_BITMAP* SessionIdBitmap;                                    //0x10
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x18
    ULONGLONG MaximumNonPagedPoolInPages;                                   //0x30
    ULONGLONG SizeOfPagedPoolInPages;                                       //0x38
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x40
    volatile ULONGLONG NonPagedPoolCommit;                                  //0xa0
    volatile ULONGLONG SmallNonPagedPtesCommit;                             //0xa8
    volatile ULONGLONG BootCommit;                                          //0xb0
    volatile ULONGLONG MdlPagesAllocated;                                   //0xb8
    volatile ULONGLONG SystemPageTableCommit;                               //0xc0
    volatile ULONGLONG ProcessCommit;                                       //0xc8
    volatile LONG DriverCommit;                                             //0xd0
    UCHAR PagingLevels;                                                     //0xd4
    volatile ULONGLONG PfnDatabaseCommit;                                   //0xd8
    struct _MMSUPPORT_FULL SystemWs[6];                                     //0x100
    struct _MMSUPPORT_SHARED SystemCacheShared;                             //0x880
    struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];                     //0x900
    ULONG MapCacheFailures;                                                 //0x920
    ULONGLONG PagefileHashPages;                                            //0x928
    struct _SYSPTES_HEADER PteHeader;                                       //0x930
    ULONGLONG SystemVaTypeCount[16];                                        //0xa48
    UCHAR SystemVaType[256];                                                //0xac8
    struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[13];                    //0xbc8
};
/* Used in */
// _MI_SYSTEM_INFORMATION

