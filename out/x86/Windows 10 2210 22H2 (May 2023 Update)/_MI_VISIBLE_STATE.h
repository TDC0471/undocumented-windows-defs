#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_MMSUPPORT_FULL.h>
#include <_MMSUPPORT_SHARED.h>
#include <_SYSPTES_HEADER.h>

//0xcc0 bytes (sizeof)
struct _MI_VISIBLE_STATE
{
    struct _LIST_ENTRY SessionWsList;                                       //0x0
    struct _RTL_BITMAP* SessionIdBitmap;                                    //0x8
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0xc
    ULONG MaximumNonPagedPoolInPages;                                       //0x18
    ULONG SizeOfPagedPoolInPages;                                           //0x1c
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x20
    volatile ULONG NonPagedPoolCommit;                                      //0x54
    volatile ULONG SmallNonPagedPtesCommit;                                 //0x58
    volatile ULONG BootCommit;                                              //0x5c
    volatile ULONG MdlPagesAllocated;                                       //0x60
    volatile ULONG SystemPageTableCommit;                                   //0x64
    volatile ULONG ProcessCommit;                                           //0x68
    volatile LONG DriverCommit;                                             //0x6c
    UCHAR PagingLevels;                                                     //0x70
    volatile ULONG PfnDatabaseCommit;                                       //0x74
    struct _MMSUPPORT_FULL SystemWs[6];                                     //0x80
    struct _MMSUPPORT_SHARED SystemCacheShared;                             //0x680
    ULONG MapCacheFailures;                                                 //0x700
    ULONG PagefileHashPages;                                                //0x704
    struct _SYSPTES_HEADER PteHeader;                                       //0x708
    ULONG SystemVaTypeCount[16];                                            //0x794
    UCHAR SystemVaType[1024];                                               //0x7d4
    ULONG SystemVaTypeCountFailures[16];                                    //0xbd4
    ULONG SystemVaTypeCountLimit[16];                                       //0xc14
    ULONG SystemVaTypeCountPeak[16];                                        //0xc54
    ULONG SystemAvailableVa;                                                //0xc94
};
/* Used in */
// _MI_SYSTEM_INFORMATION

