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

//0x1b00 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x100
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x380
    struct _MI_SESSION_STATE Sessions;                                      //0x438
    struct _MI_PROCESS_STATE Processes;                                     //0x4c0
    struct _MI_HARDWARE_STATE Hardware;                                     //0x4f8
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x600
    struct _MI_COMBINE_STATE PageCombines;                                  //0x9c0
    struct _MI_PAGELIST_STATE PageLists;                                    //0x9d8
    struct _MI_PARTITION_STATE Partitions;                                  //0x9e8
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0xa48
    struct _MI_ERROR_STATE Errors;                                          //0xac0
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0xb80
    struct _MI_DEBUGGER_STATE Debugger;                                     //0xc00
    struct _MI_STANDBY_STATE Standby;                                       //0xd20
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0xdc0
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x1000
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x1070
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x10c0
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x1180
    ULONGLONG Cookie;                                                       //0x11c0
    VOID* volatile* BootRegistryRuns;                                       //0x11c8
    volatile LONG ZeroingDisabled;                                          //0x11d0
    UCHAR FullyInitialized;                                                 //0x11d4
    UCHAR SafeBooted;                                                       //0x11d5
    struct _TlgProvider_t* TraceLogging;                                    //0x11d8
    struct _MI_VISIBLE_STATE Vs;                                            //0x1200
};
