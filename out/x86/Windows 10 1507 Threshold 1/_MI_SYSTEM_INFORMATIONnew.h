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
#include <_MI_RESAVAIL_TRACKER.h>
#include <_RTL_BITMAP.h>
#include <_TlgProvider_t.h>
#include <_MI_VISIBLE_STATE.h>

//0x3cc0 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x500
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x640
    struct _MI_SESSION_STATE Sessions;                                      //0x6a4
    struct _MI_PROCESS_STATE Processes;                                     //0x16e0
    struct _MI_HARDWARE_STATE Hardware;                                     //0x1750
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1800
    struct _MI_COMBINE_STATE PageCombines;                                  //0x2cc0
    struct _MI_PARTITION_STATE Partitions;                                  //0x2cd8
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x2d08
    struct _MI_ERROR_STATE Errors;                                          //0x2d58
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x2e00
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x2e80
    struct _MI_STANDBY_STATE Standby;                                       //0x2f40
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x2fc0
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x3140
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x3178
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x31b0
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x3200
    struct _MI_RESAVAIL_TRACKER ResTrack;                                   //0x3240
    ULONG Cookie;                                                           //0x3440
    volatile LONG ZeroingDisabled;                                          //0x3444
    VOID* volatile* BootRegistryRuns;                                       //0x3448
    UCHAR FullyInitialized;                                                 //0x344c
    UCHAR SafeBooted;                                                       //0x344d
    struct _RTL_BITMAP LargePfnBitMap;                                      //0x3450
    struct _RTL_BITMAP PfnBitMap;                                           //0x3458
    struct _TlgProvider_t* TraceLogging;                                    //0x3460
    struct _MI_VISIBLE_STATE Vs;                                            //0x3480
};
