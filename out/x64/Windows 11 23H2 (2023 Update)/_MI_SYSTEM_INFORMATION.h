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
#include <_MI_SYSTEM_ACCELERATORS.h>
#include <_MI_HOT_PATCH_STATE.h>
#include <_MI_ENCLAVE_STATE.h>
#include <_tlgProvider_t.h>
#include <_MI_VISIBLE_STATE.h>

//0x5140 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0xc0
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x440
    struct _MI_SESSION_STATE Sessions;                                      //0x550
    struct _MI_PROCESS_STATE Processes;                                     //0x580
    struct _MI_HARDWARE_STATE Hardware;                                     //0x600
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1880
    struct _MI_COMBINE_STATE PageCombines;                                  //0x1d80
    struct _MI_PAGELIST_STATE PageLists;                                    //0x1da0
    struct _MI_PARTITION_STATE Partitions;                                  //0x1ec0
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x2980
    struct _MI_ERROR_STATE Errors;                                          //0x29f8
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x2b00
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x2b80
    struct _MI_STANDBY_STATE Standby;                                       //0x2ca0
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x2e40
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x40c0
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x4180
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x4230
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x4300
    struct _MI_SYSTEM_ACCELERATORS Accelerators;                            //0x4340
    struct _MI_HOT_PATCH_STATE HotPatch;                                    //0x4368
    struct _MI_ENCLAVE_STATE Enclaves;                                      //0x43c8
    ULONGLONG Cookie;                                                       //0x4410
    VOID* volatile* BootRegistryRuns;                                       //0x4418
    volatile LONG ZeroingDisabled;                                          //0x4420
    UCHAR FullyInitialized;                                                 //0x4424
    UCHAR SafeBooted;                                                       //0x4425
    struct _tlgProvider_t* TraceLogging;                                    //0x4428
    struct _MI_VISIBLE_STATE Vs;                                            //0x4440
};
