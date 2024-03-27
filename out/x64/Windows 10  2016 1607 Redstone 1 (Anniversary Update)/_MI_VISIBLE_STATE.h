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
#include <_MMWSL_SHARED.h>
#include <_SYSPTES_HEADER.h>
#include <_MI_SYSTEM_VA_ASSIGNMENT.h>

//0x840 bytes (sizeof)
struct _MI_VISIBLE_STATE
{
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x0
    struct _LIST_ENTRY SessionWsList;                                       //0x50
    struct _RTL_BITMAP* SessionIdBitmap;                                    //0x60
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x68
    ULONGLONG MaximumNonPagedPoolInPages;                                   //0xa0
    ULONGLONG SizeOfPagedPoolInPages;                                       //0xa8
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0xb0
    volatile ULONGLONG NonPagedPoolCommit;                                  //0x118
    volatile ULONGLONG BootCommit;                                          //0x120
    volatile ULONGLONG MdlPagesAllocated;                                   //0x128
    volatile ULONGLONG SystemPageTableCommit;                               //0x130
    volatile ULONGLONG SpecialPagesInUse;                                   //0x138
    volatile ULONGLONG WsOverheadPages;                                     //0x140
    volatile ULONGLONG VadBitmapPages;                                      //0x148
    volatile ULONGLONG ProcessCommit;                                       //0x150
    volatile ULONGLONG SharedCommit;                                        //0x158
    volatile LONG DriverCommit;                                             //0x160
    struct _MMSUPPORT_FULL SystemWs[3];                                     //0x180
    struct _MMSUPPORT_SHARED SystemCacheShared;                             //0x4c0
    struct _MMSUPPORT_AGGREGATION AggregateSystemWs[1];                     //0x540
    struct _MMWSL_SHARED SystemCacheSharedWorkingSetList;                   //0x560
    ULONG MapCacheFailures;                                                 //0x5c0
    ULONGLONG PagefileHashPages;                                            //0x5c8
    struct _SYSPTES_HEADER PteHeader;                                       //0x5d0
    struct _MI_SPECIAL_POOL* SessionSpecialPool;                            //0x6e8
    ULONGLONG SystemVaTypeCount[14];                                        //0x6f0
    struct _MI_SYSTEM_VA_ASSIGNMENT SystemVaRegions[14];                    //0x760
};
/* Used in */
// _MI_SYSTEM_INFORMATION

