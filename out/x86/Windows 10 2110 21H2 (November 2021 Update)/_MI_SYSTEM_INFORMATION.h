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
#include <_RTL_BITMAP.h>
#include <_tlgProvider_t.h>
#include <_MI_VISIBLE_STATE.h>

//0x4ec0 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x80
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x200
    struct _MI_SESSION_STATE Sessions;                                      //0x264
    struct _MI_PROCESS_STATE Processes;                                     //0x12b0
    struct _MI_HARDWARE_STATE Hardware;                                     //0x1340
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1480
    struct _MI_COMBINE_STATE PageCombines;                                  //0x3bc0
    struct _MI_PAGELIST_STATE PageLists;                                    //0x3be0
    struct _MI_PARTITION_STATE Partitions;                                  //0x3c30
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x3c68
    struct _MI_ERROR_STATE Errors;                                          //0x3cb0
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x3d80
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x3e00
    struct _MI_STANDBY_STATE Standby;                                       //0x3e90
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x3f00
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x4080
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x40c0
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x4120
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x4180
    struct _MI_ENCLAVE_STATE Enclaves;                                      //0x41c0
    ULONG Cookie;                                                           //0x41e4
    VOID* volatile* BootRegistryRuns;                                       //0x41e8
    volatile LONG ZeroingDisabled;                                          //0x41ec
    UCHAR FullyInitialized;                                                 //0x41f0
    UCHAR SafeBooted;                                                       //0x41f1
    struct _RTL_BITMAP PfnBitMap;                                           //0x41f4
    struct _tlgProvider_t* TraceLogging;                                    //0x41fc
    struct _MI_VISIBLE_STATE Vs;                                            //0x4200
};