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

//0x1b40 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x100
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x340
    struct _MI_SESSION_STATE Sessions;                                      //0x3f8
    struct _MI_PROCESS_STATE Processes;                                     //0x480
    struct _MI_HARDWARE_STATE Hardware;                                     //0x4b0
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x5c0
    struct _MI_COMBINE_STATE PageCombines;                                  //0x940
    struct _MI_PAGELIST_STATE PageLists;                                    //0xae0
    struct _MI_PARTITION_STATE Partitions;                                  //0xaf0
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0xb50
    struct _MI_ERROR_STATE Errors;                                          //0xbc8
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0xc80
    struct _MI_DEBUGGER_STATE Debugger;                                     //0xd00
    struct _MI_STANDBY_STATE Standby;                                       //0xe20
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0xec0
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x1040
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x10b0
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x1100
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x11c0
    ULONGLONG Cookie;                                                       //0x1200
    VOID* volatile* BootRegistryRuns;                                       //0x1208
    volatile LONG ZeroingDisabled;                                          //0x1210
    UCHAR FullyInitialized;                                                 //0x1214
    UCHAR SafeBooted;                                                       //0x1215
    struct _TlgProvider_t* TraceLogging;                                    //0x1218
    struct _MI_VISIBLE_STATE Vs;                                            //0x1240
};
