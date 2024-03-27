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

//0x4e40 bytes (sizeof)
struct _MI_SYSTEM_INFORMATION
{
    struct _MI_POOL_STATE Pools;                                            //0x0
    struct _MI_SECTION_STATE Sections;                                      //0x80
    struct _MI_SYSTEM_IMAGE_STATE SystemImages;                             //0x200
    struct _MI_SESSION_STATE Sessions;                                      //0x25c
    struct _MI_PROCESS_STATE Processes;                                     //0x1290
    struct _MI_HARDWARE_STATE Hardware;                                     //0x1300
    struct _MI_SYSTEM_VA_STATE SystemVa;                                    //0x1480
    struct _MI_COMBINE_STATE PageCombines;                                  //0x3bc0
    struct _MI_PAGELIST_STATE PageLists;                                    //0x3be0
    struct _MI_PARTITION_STATE Partitions;                                  //0x3bf8
    struct _MI_SHUTDOWN_STATE Shutdowns;                                    //0x3c30
    struct _MI_ERROR_STATE Errors;                                          //0x3c78
    struct _MI_ACCESS_LOG_STATE AccessLog;                                  //0x3d40
    struct _MI_DEBUGGER_STATE Debugger;                                     //0x3dc0
    struct _MI_STANDBY_STATE Standby;                                       //0x3e50
    struct _MI_SYSTEM_PTE_STATE SystemPtes;                                 //0x3ec0
    struct _MI_IO_PAGE_STATE IoPages;                                       //0x4040
    struct _MI_PAGING_IO_STATE PagingIo;                                    //0x4080
    struct _MI_COMMON_PAGE_STATE CommonPages;                               //0x40b8
    struct _MI_SYSTEM_TRIM_STATE Trims;                                     //0x4100
    ULONG Cookie;                                                           //0x4140
    VOID* volatile* BootRegistryRuns;                                       //0x4144
    volatile LONG ZeroingDisabled;                                          //0x4148
    UCHAR FullyInitialized;                                                 //0x414c
    UCHAR SafeBooted;                                                       //0x414d
    struct _RTL_BITMAP PfnBitMap;                                           //0x4150
    struct _TlgProvider_t* TraceLogging;                                    //0x4158
    struct _MI_VISIBLE_STATE Vs;                                            //0x4180
};
