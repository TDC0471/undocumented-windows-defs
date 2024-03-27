#pragma once
/* ------------------ */

#include <_MI_SPECIAL_POOL.h>
#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_MMSUPPORT.h>
#include <_UNLOADED_DRIVERS.h>
#include <_SYSPTES_HEADER.h>

//0x840 bytes (sizeof)
struct _MI_VISIBLE_STATE
{
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x0
    struct _LIST_ENTRY SessionWsList;                                       //0x48
    struct _RTL_BITMAP* SessionIdBitmap;                                    //0x50
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x54
    ULONG MaximumNonPagedPoolInPages;                                       //0x70
    ULONG SizeOfPagedPoolInPages;                                           //0x74
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0x78
    volatile ULONG NonPagedPoolCommit;                                      //0xac
    volatile ULONG BootCommit;                                              //0xb0
    volatile ULONG MdlPagesAllocated;                                       //0xb4
    volatile ULONG SystemPageTableCommit;                                   //0xb8
    volatile ULONG SpecialPagesInUse;                                       //0xbc
    volatile ULONG WsOverheadPages;                                         //0xc0
    volatile ULONG VadBitmapPages;                                          //0xc4
    volatile ULONG ProcessCommit;                                           //0xc8
    volatile ULONG SharedCommit;                                            //0xcc
    volatile LONG DriverCommit;                                             //0xd0
    struct _MMSUPPORT SystemWs[3];                                          //0x100
    ULONG MapCacheFailures;                                                 //0x280
    ULONG LastUnloadedDriver;                                               //0x284
    struct _UNLOADED_DRIVERS* UnloadedDrivers;                              //0x288
    ULONG PagefileHashPages;                                                //0x28c
    struct _SYSPTES_HEADER PteHeader;                                       //0x290
    struct _MI_SPECIAL_POOL* SessionSpecialPool;                            //0x31c
    ULONG SystemVaTypeCount[15];                                            //0x320
    UCHAR SystemVaType[1024];                                               //0x35c
    ULONG SystemVaTypeCountFailures[15];                                    //0x75c
    ULONG SystemVaTypeCountLimit[15];                                       //0x798
    ULONG SystemVaTypeCountPeak[15];                                        //0x7d4
    ULONG SystemAvailableVa;                                                //0x810
};
/* Used in */
// _MI_SYSTEM_INFORMATION

