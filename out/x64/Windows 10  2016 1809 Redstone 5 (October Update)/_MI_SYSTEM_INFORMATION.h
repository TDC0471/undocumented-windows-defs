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
#include <_TlgProvider_t.h>
#include <_MI_VISIBLE_STATE.h>

//0x3180 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x180
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x4c0
    struct _MI_SESSION_STATE Sessions;                                      //0x580
    struct _MI_PROCESS_STATE Processes;                                     //0x1608
    struct _MI_HARDWARE_STATE Hardware;                                     //0x1680
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1800
    struct _MI_COMBINE_STATE PageCombines;                                  //0x1d00
    struct _MI_PAGELIST_STATE PageLists;                                    //0x1d18
    struct _MI_PARTITION_STATE Partitions;                                  //0x1d40
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x1da0
    struct _MI_ERROR_STATE Errors;                                          //0x1e18
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x1f00
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x1f80
    struct _MI_STANDBY_STATE Standby;                                       //0x20a0
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x2140
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x2340
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x23b0
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x2400
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x24c0
    ULONGLONG Cookie;                                                       //0x2500
    VOID* volatile* BootRegistryRuns;                                       //0x2508
    volatile LONG ZeroingDisabled;                                          //0x2510
    UCHAR FullyInitialized;                                                 //0x2514
    UCHAR SafeBooted;                                                       //0x2515
    struct _TlgProvider_t* TraceLogging;                                    //0x2518
    struct _MI_VISIBLE_STATE Vs;                                            //0x2540
};
