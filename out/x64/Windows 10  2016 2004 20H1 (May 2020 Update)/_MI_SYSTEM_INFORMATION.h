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

//0x3280 bytes (sizeof)
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
    struct _MI_PARTITION_STATE Partitions;                                  //0x1cc0
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x1d80
    struct _MI_ERROR_STATE Errors;                                          //0x1df8
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x1ec0
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x1f40
    struct _MI_STANDBY_STATE Standby;                                       //0x2060
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x2100
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x2300
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x2370
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x2420
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x2500
    struct _MI_ENCLAVE_STATE Enclaves;                                      //0x2540
    ULONGLONG Cookie;                                                       //0x2588
    VOID* volatile* BootRegistryRuns;                                       //0x2590
    volatile LONG ZeroingDisabled;                                          //0x2598
    UCHAR FullyInitialized;                                                 //0x259c
    UCHAR SafeBooted;                                                       //0x259d
    struct _tlgProvider_t* TraceLogging;                                    //0x25a0
    struct _MI_VISIBLE_STATE Vs;                                            //0x25c0
};
