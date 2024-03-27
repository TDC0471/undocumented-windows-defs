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
#include <_MI_RESAVAIL_TRACKER.h>
#include <_RTL_BITMAP.h>
#include <_TlgProvider_t.h>
#include <_MI_VISIBLE_STATE.h>

//0x3d80 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x500
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x640
    struct _MI_SESSION_STATE Sessions;                                      //0x6ac
    struct _MI_PROCESS_STATE Processes;                                     //0x16f0
    struct _MI_HARDWARE_STATE Hardware;                                     //0x1760
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1840
    struct _MI_COMBINE_STATE PageCombines;                                  //0x2d00
    struct _MI_PAGELIST_STATE PageLists;                                    //0x2d18
    struct _MI_PARTITION_STATE Partitions;                                  //0x2d20
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x2d58
    struct _MI_ERROR_STATE Errors;                                          //0x2da0
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x2e80
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x2f00
    struct _MI_STANDBY_STATE Standby;                                       //0x2fc0
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x3040
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x31c0
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x3200
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x3238
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x3280
    struct _MI_RESAVAIL_TRACKER ResTrack;                                   //0x32c0
    ULONG Cookie;                                                           //0x34c0
    volatile LONG ZeroingDisabled;                                          //0x34c4
    VOID* volatile* BootRegistryRuns;                                       //0x34c8
    UCHAR FullyInitialized;                                                 //0x34cc
    UCHAR SafeBooted;                                                       //0x34cd
    struct _RTL_BITMAP PfnBitMap;                                           //0x34d0
    struct _TlgProvider_t* TraceLogging;                                    //0x34d8
    struct _MI_VISIBLE_STATE Vs;                                            //0x3500
};
