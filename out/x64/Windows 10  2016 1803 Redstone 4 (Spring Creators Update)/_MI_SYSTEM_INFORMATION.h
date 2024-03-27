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

//0x2080 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x180
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x400
    struct _MI_SESSION_STATE Sessions;                                      //0x4c0
    struct _MI_PROCESS_STATE Processes;                                     //0x548
    struct _MI_HARDWARE_STATE Hardware;                                     //0x590
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x700
    struct _MI_COMBINE_STATE PageCombines;                                  //0xc00
    struct _MI_PAGELIST_STATE PageLists;                                    //0xc18
    struct _MI_PARTITION_STATE Partitions;                                  //0xc40
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0xca0
    struct _MI_ERROR_STATE Errors;                                          //0xd18
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0xe00
    struct _MI_DEBUGGER_STATE Debugger;                                     //0xe80
    struct _MI_STANDBY_STATE Standby;                                       //0xfa0
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x1040
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x1240
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x12b0
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x1300
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x13c0
    ULONGLONG Cookie;                                                       //0x1400
    VOID* volatile* BootRegistryRuns;                                       //0x1408
    volatile LONG ZeroingDisabled;                                          //0x1410
    UCHAR FullyInitialized;                                                 //0x1414
    UCHAR SafeBooted;                                                       //0x1415
    struct _TlgProvider_t* TraceLogging;                                    //0x1418
    struct _MI_VISIBLE_STATE Vs;                                            //0x1440
};
