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
#include <_MI_ENCLAVE_STATE.h>
#include <_tlgProvider_t.h>
#include <_MI_VISIBLE_STATE.h>

//0x32c0 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0xc0
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x400
    struct _MI_SESSION_STATE Sessions;                                      //0x4a8
    struct _MI_PROCESS_STATE Processes;                                     //0x1550
    struct _MI_HARDWARE_STATE Hardware;                                     //0x15c0
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1780
    struct _MI_COMBINE_STATE PageCombines;                                  //0x1c40
    struct _MI_PAGELIST_STATE PageLists;                                    //0x1c60
    struct _MI_PARTITION_STATE Partitions;                                  //0x1d00
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x1dc0
    struct _MI_ERROR_STATE Errors;                                          //0x1e38
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x1f00
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x1f80
    struct _MI_STANDBY_STATE Standby;                                       //0x20a0
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x2140
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x2340
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x23b0
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x2460
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x2540
    struct _MI_ENCLAVE_STATE Enclaves;                                      //0x2580
    ULONGLONG Cookie;                                                       //0x25c8
    VOID* volatile* BootRegistryRuns;                                       //0x25d0
    volatile LONG ZeroingDisabled;                                          //0x25d8
    UCHAR FullyInitialized;                                                 //0x25dc
    UCHAR SafeBooted;                                                       //0x25dd
    struct _tlgProvider_t* TraceLogging;                                    //0x25e0
    struct _MI_VISIBLE_STATE Vs;                                            //0x2600
};
