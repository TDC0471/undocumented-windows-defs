#pragma once
/* ------------------ */

#include <_MI_SPECIAL_POOL.h>
#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMSUPPORT_SHARED.h>
#include <_MMSUPPORT_AGGREGATION.h>
#include <_SYSPTES_HEADER.h>
#include <_MI_SYSTEM_VA_ASSIGNMENT.h>

//0xc40 bytes (sizeof)
struct _MI_VISIBLE_STATE
{
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x0
    struct _LIST_ENTRY SessionWsList;                                       //0x40
    struct _RTL_BITMAP* SessionIdBitmap;                                    //0x50
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x58
    ULONGLONG MaximumNonPagedPoolInPages;                                   //0x90
    ULONGLONG SizeOfPagedPoolInPages;                                       //0x98
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0xa0
    volatile ULONGLONG NonPagedPoolCommit;                                  //0x100
    volatile ULONGLONG SmallNonPagedPtesCommit;                             //0x108
    volatile ULONGLONG BootCommit;                                          //0x110
    volatile ULONGLONG MdlPagesAllocated;                                   //0x118
    volatile ULONGLONG SystemPageTableCommit;                               //0x120
    volatile ULONGLONG SpecialPagesInUse;                                   //0x128
    volatile ULONGLONG ProcessCommit;                                       //0x130
    volatile LONG DriverCommit;                                             //0x138
    volatile ULONGLONG PfnDatabaseCommit;                                   //0x140
    struct _MMSUPPORT_FULL SystemWs[6];                                     //0x180
    struct _MMSUPPORT_SHARED SystemCacheShared;                             //0x800
    struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];                     //0x880
    ULONG MapCacheFailures;                                                 //0x8a0
    ULONGLONG PagefileHashPages;                                            //0x8a8
    struct _SYSPTES_HEADER PteHeader;                                       //0x8b0
    struct _MI_SPECIAL_POOL* SessionSpecialPool;                            //0x9c8
    ULONGLONG SystemVaTypeCount[16];                                        //0x9d0
    UCHAR SystemVaType[256];                                                //0xa50
    struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[14];                    //0xb50
};
/* Used in */
// _MI_SYSTEM_INFORMATION

