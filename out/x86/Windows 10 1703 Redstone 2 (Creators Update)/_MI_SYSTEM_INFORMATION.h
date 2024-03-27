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

//0x3b00 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x500
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x640
    struct _MI_SESSION_STATE Sessions;                                      //0x6ac
    struct _MI_PROCESS_STATE Processes;                                     //0x16e8
    struct _MI_HARDWARE_STATE Hardware;                                     //0x1740
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1800
    struct _MI_COMBINE_STATE PageCombines;                                  //0x2d00
    struct _MI_PAGELIST_STATE PageLists;                                    //0x2d18
    struct _MI_PARTITION_STATE Partitions;                                  //0x2d20
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x2d58
    struct _MI_ERROR_STATE Errors;                                          //0x2da0
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x2e80
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x2f00
    struct _MI_STANDBY_STATE Standby;                                       //0x2f90
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x3000
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x3140
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x3180
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x31b8
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x3200
    ULONG Cookie;                                                           //0x3240
    VOID* volatile* BootRegistryRuns;                                       //0x3244
    volatile LONG ZeroingDisabled;                                          //0x3248
    UCHAR FullyInitialized;                                                 //0x324c
    UCHAR SafeBooted;                                                       //0x324d
    struct _RTL_BITMAP PfnBitMap;                                           //0x3250
    struct _TlgProvider_t* TraceLogging;                                    //0x3258
    struct _MI_VISIBLE_STATE Vs;                                            //0x3280
};
