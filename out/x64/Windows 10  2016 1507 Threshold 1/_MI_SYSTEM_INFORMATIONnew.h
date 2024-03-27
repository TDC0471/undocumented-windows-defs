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
#include <_RTL_BITMAP_EX.h>
#include <_TlgProvider_t.h>
#include <_MI_VISIBLE_STATE.h>

//0x1bc0 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x100
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x380
    struct _MI_SESSION_STATE Sessions;                                      //0x430
    struct _MI_PROCESS_STATE Processes;                                     //0x4c0
    struct _MI_HARDWARE_STATE Hardware;                                     //0x520
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x600
    struct _MI_COMBINE_STATE PageCombines;                                  //0x8c0
    struct _MI_PARTITION_STATE Partitions;                                  //0xa60
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0xab8
    struct _MI_ERROR_STATE Errors;                                          //0xb38
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0xc00
    struct _MI_DEBUGGER_STATE Debugger;                                     //0xc80
    struct _MI_STANDBY_STATE Standby;                                       //0xdc0
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0xe80
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x1000
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x1060
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x10b0
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x1140
    struct _MI_RESAVAIL_TRACKER ResTrack;                                   //0x1180
    ULONGLONG Cookie;                                                       //0x1540
    volatile LONG ZeroingDisabled;                                          //0x1548
    VOID* volatile* BootRegistryRuns;                                       //0x1550
    UCHAR FullyInitialized;                                                 //0x1558
    UCHAR SafeBooted;                                                       //0x1559
    struct _RTL_BITMAP_EX LargePfnBitMap;                                   //0x1560
    struct _TlgProvider_t* TraceLogging;                                    //0x1570
    struct _MI_VISIBLE_STATE Vs;                                            //0x1580
};
