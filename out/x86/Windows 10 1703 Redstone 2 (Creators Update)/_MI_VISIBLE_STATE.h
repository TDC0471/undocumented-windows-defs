#pragma once
/* ------------------ */

#include <_MI_SPECIAL_POOL.h>
#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMSUPPORT_SHARED.h>
#include <_SYSPTES_HEADER.h>

//0x880 bytes (sizeof)
struct _MI_VISIBLE_STATE
{
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x0
    struct _LIST_ENTRY SessionWsList;                                       //0x40
    struct _RTL_BITMAP* SessionIdBitmap;                                    //0x48
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x4c
    ULONG MaximumNonPagedPoolInPages;                                       //0x68
    ULONG SizeOfPagedPoolInPages;                                           //0x6c
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x70
    volatile ULONG NonPagedPoolCommit;                                      //0xa8
    volatile ULONG SmallNonPagedPtesCommit;                                 //0xac
    volatile ULONG BootCommit;                                              //0xb0
    volatile ULONG MdlPagesAllocated;                                       //0xb4
    volatile ULONG SystemPageTableCommit;                                   //0xb8
    volatile ULONG SpecialPagesInUse;                                       //0xbc
    volatile ULONG ProcessCommit;                                           //0xc0
    volatile LONG DriverCommit;                                             //0xc4
    ULONG PfnDatabaseCommit;                                                //0xc8
    struct _MMSUPPORT_FULL SystemWs[3];                                     //0x100
    struct _MMSUPPORT_SHARED SystemCacheShared;                             //0x2c0
    ULONG MapCacheFailures;                                                 //0x2e4
    ULONG PagefileHashPages;                                                //0x2e8
    struct _SYSPTES_HEADER PteHeader;                                       //0x2ec
    struct _MI_SPECIAL_POOL* SessionSpecialPool;                            //0x378
    ULONG SystemVaTypeCount[15];                                            //0x37c
    UCHAR SystemVaType[1024];                                               //0x3b8
    ULONG SystemVaTypeCountFailures[15];                                    //0x7b8
    ULONG SystemVaTypeCountLimit[15];                                       //0x7f4
    ULONG SystemVaTypeCountPeak[15];                                        //0x830
    ULONG SystemAvailableVa;                                                //0x86c
};
/* Used in */
// _MI_SYSTEM_INFORMATION

