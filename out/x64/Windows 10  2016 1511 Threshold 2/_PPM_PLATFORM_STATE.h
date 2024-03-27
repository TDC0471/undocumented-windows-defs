#pragma once
/* ------------------ */

#include <_PPM_VETO_ACCOUNTING.h>
#include <_KAFFINITY_EX.h>
#include <_UNICODE_STRING.h>
#include <_PPM_SELECTION_DEPENDENCY.h>
#include <_PPM_COORDINATED_SYNCHRONIZATION.h>

//0x180 bytes (sizeof)
struct _PPM_PLATFORM_STATE
{
    ULONG Latency;                                                          //0x0
    ULONG BreakEvenDuration;                                                //0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0x8
    UCHAR TransitionDebugger;                                               //0x30
    UCHAR Platform;                                                         //0x31
    ULONG DependencyListCount;                                              //0x34
    struct _KAFFINITY_EX Processors;                                        //0x38
    struct _UNICODE_STRING Name;                                            //0xe0
    struct _PPM_SELECTION_DEPENDENCY* DependencyLists;                      //0xf0
    unionvolatile _PPM_COORDINATED_SYNCHRONIZATION Synchronization;         //0xf8
    volatile ULONGLONG EnterTime;                                           //0x100
    union
    {
        volatile LONG RefCount;                                             //0x140
        UCHAR CacheAlign0[64];                                              //0x140
    };
};
/* Used in */
// _PPM_PLATFORM_STATES

