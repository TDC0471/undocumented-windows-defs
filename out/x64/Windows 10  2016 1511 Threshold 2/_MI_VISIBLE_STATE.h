#pragma once
/* ------------------ */

#include <_MI_SPECIAL_POOL.h>
#include <_LIST_ENTRY.h>
#include <_RTL_BITMAP.h>
#include <_MM_PAGED_POOL_INFO.h>
#include <_MI_SYSTEM_PTE_TYPE.h>
#include <_MMSUPPORT.h>
#include <_SYSPTES_HEADER.h>

//0x640 bytes (sizeof)
struct _MI_VISIBLE_STATE
{
    struct _MI_SPECIAL_POOL SpecialPool;                                    //0x0
    struct _LIST_ENTRY SessionWsList;                                       //0x50
    struct _RTL_BITMAP* SessionIdBitmap;                                    //0x60
    struct _MM_PAGED_POOL_INFO PagedPoolInfo;                               //0x68
    ULONGLONG MaximumNonPagedPoolInPages;                                   //0xa0
    ULONGLONG SizeOfPagedPoolInPages;                                       //0xa8
    struct _MI_SYSTEM_PTE_TYPE SystemPteInfo;                               //0xb0
    volatile ULONGLONG NonPagedPoolCommit;                                  //0x110
    volatile ULONGLONG BootCommit;                                          //0x118
    volatile ULONGLONG MdlPagesAllocated;                                   //0x120
    volatile ULONGLONG SystemPageTableCommit;                               //0x128
    volatile ULONGLONG SpecialPagesInUse;                                   //0x130
    volatile ULONGLONG WsOverheadPages;                                     //0x138
    volatile ULONGLONG VadBitmapPages;                                      //0x140
    volatile ULONGLONG ProcessCommit;                                       //0x148
    volatile ULONGLONG SharedCommit;                                        //0x150
    volatile LONG DriverCommit;                                             //0x158
    struct _MMSUPPORT SystemWs[3];                                          //0x180
    ULONG MapCacheFailures;                                                 //0x468
    ULONGLONG PagefileHashPages;                                            //0x470
    struct _SYSPTES_HEADER PteHeader;                                       //0x478
    struct _MI_SPECIAL_POOL* SessionSpecialPool;                            //0x590
    ULONGLONG SystemVaTypeCount[14];                                        //0x598
};
/* Used in */
// _MI_SYSTEM_INFORMATION

