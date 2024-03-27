#pragma once
/* ------------------ */

#include <_MI_POOL_STATE.h>
#include <_MI_SECTION_STATE.h>
#include <_MI_SYSTEM_IMAGE_STATE.h>
#include <_MI_SESSION_STATE.h>
#include <_MI_PROCESS_STATE.h>
#include <_MI_HARDWARE_STATE.h>
#include <_MI_SYSTEM_VA_STATE.h>
#include <_MI_COMBINE_STATE.h>
#include <_MI_PAGELIST_STATE.h>
#include <_MI_PARTITION_STATE.h>
#include <_MI_SHUTDOWN_STATE.h>
#include <_MI_ERROR_STATE.h>
#include <_MI_ACCESS_LOG_STATE.h>
#include <_MI_DEBUGGER_STATE.h>
#include <_MI_STANDBY_STATE.h>
#include <_MI_SYSTEM_PTE_STATE.h>
#include <_MI_IO_PAGE_STATE.h>
#include <_MI_PAGING_IO_STATE.h>
#include <_MI_COMMON_PAGE_STATE.h>
#include <_MI_SYSTEM_TRIM_STATE.h>
#include <_RTL_BITMAP.h>
#include <_TlgProvider_t.h>
#include <_MI_VISIBLE_STATE.h>

//0x50c0 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x500
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x680
    struct _MI_SESSION_STATE Sessions;                                      //0x6f0
    struct _MI_PROCESS_STATE Processes;                                     //0x1730
    struct _MI_HARDWARE_STATE Hardware;                                     //0x17c0
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1940
    struct _MI_COMBINE_STATE PageCombines;                                  //0x4080
    struct _MI_PAGELIST_STATE PageLists;                                    //0x4098
    struct _MI_PARTITION_STATE Partitions;                                  //0x40b0
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x40e8
    struct _MI_ERROR_STATE Errors;                                          //0x4130
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x4200
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x4280
    struct _MI_STANDBY_STATE Standby;                                       //0x4310
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x4380
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x4500
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x4540
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x4578
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x45c0
    ULONG Cookie;                                                           //0x4600
    VOID* volatile* BootRegistryRuns;                                       //0x4604
    volatile LONG ZeroingDisabled;                                          //0x4608
    UCHAR FullyInitialized;                                                 //0x460c
    UCHAR SafeBooted;                                                       //0x460d
    struct _RTL_BITMAP PfnBitMap;                                           //0x4610
    struct _TlgProvider_t* TraceLogging;                                    //0x4618
    struct _MI_VISIBLE_STATE Vs;                                            //0x4640
};
