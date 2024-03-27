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

//0xa80 bytes (sizeof)
struct _MI_VISIBLE_STATE
{
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x0
    struct _LIST_ENTRY SessionWsList;                                       //0x40
    struct _RTL_BITMAP* SessionIdBitmap;                                    //0x48
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x4c
    ULONG MaximumNonPagedPoolInPages;                                       //0x68
    ULONG SizeOfPagedPoolInPages;                                           //0x6c
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x70
    volatile ULONG NonPagedPoolCommit;                                      //0xa4
    volatile ULONG SmallNonPagedPtesCommit;                                 //0xa8
    volatile ULONG BootCommit;                                              //0xac
    volatile ULONG MdlPagesAllocated;                                       //0xb0
    volatile ULONG SystemPageTableCommit;                                   //0xb4
    volatile ULONG SpecialPagesInUse;                                       //0xb8
    volatile ULONG ProcessCommit;                                           //0xbc
    volatile LONG DriverCommit;                                             //0xc0
    volatile ULONG PfnDatabaseCommit;                                       //0xc4
    struct _MMSUPPORT_FULL SystemWs[6];                                     //0x100
    struct _MMSUPPORT_SHARED SystemCacheShared;                             //0x480
    ULONG MapCacheFailures;                                                 //0x4ac
    ULONG PagefileHashPages;                                                //0x4b0
    struct _SYSPTES_HEADER PteHeader;                                       //0x4b4
    struct _MI_SPECIAL_POOL* SessionSpecialPool;                            //0x540
    ULONG SystemVaTypeCount[16];                                            //0x544
    UCHAR SystemVaType[1024];                                               //0x584
    ULONG SystemVaTypeCountFailures[16];                                    //0x984
    ULONG SystemVaTypeCountLimit[16];                                       //0x9c4
    ULONG SystemVaTypeCountPeak[16];                                        //0xa04
    ULONG SystemAvailableVa;                                                //0xa44
};
/* Used in */
// _MI_SYSTEM_INFORMATION

