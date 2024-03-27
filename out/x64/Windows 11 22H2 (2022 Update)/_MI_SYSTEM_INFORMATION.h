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

//0x5040 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0xc0
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x440
    struct _MI_SESSION_STATE Sessions;                                      //0x550
    struct _MI_PROCESS_STATE Processes;                                     //0x580
    struct _MI_HARDWARE_STATE Hardware;                                     //0x600
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1780
    struct _MI_COMBINE_STATE PageCombines;                                  //0x1c80
    struct _MI_PAGELIST_STATE PageLists;                                    //0x1ca0
    struct _MI_PARTITION_STATE Partitions;                                  //0x1dc0
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x2880
    struct _MI_ERROR_STATE Errors;                                          //0x28f8
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x2a00
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x2a80
    struct _MI_STANDBY_STATE Standby;                                       //0x2ba0
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x2d40
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x3fc0
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x4080
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x4130
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x4200
    struct _MI_SYSTEM_ACCELERATORS Accelerators;                            //0x4240
    struct _MI_HOT_PATCH_STATE HotPatch;                                    //0x4268
    struct _MI_ENCLAVE_STATE Enclaves;                                      //0x42c8
    ULONGLONG Cookie;                                                       //0x4310
    VOID* volatile* BootRegistryRuns;                                       //0x4318
    volatile LONG ZeroingDisabled;                                          //0x4320
    UCHAR FullyInitialized;                                                 //0x4324
    UCHAR SafeBooted;                                                       //0x4325
    struct _tlgProvider_t* TraceLogging;                                    //0x4328
    struct _MI_VISIBLE_STATE Vs;                                            //0x4340
};
