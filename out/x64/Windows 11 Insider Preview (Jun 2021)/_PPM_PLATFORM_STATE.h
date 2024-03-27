#pragma once
/* ------------------ */

#include <_PPM_VETO_ACCOUNTING.h>
#include <_KAFFINITY_EX.h>
#include <_UNICODE_STRING.h>
#include <_PPM_SELECTION_DEPENDENCY.h>
#include <_PPM_COORDINATED_SYNCHRONIZATION.h>

//0x1c0 bytes (sizeof)
struct _PPM_PLATFORM_STATE
{
    ULONGLONG LevelId;                                                      //0x0
    ULONG Latency;                                                          //0x8
    ULONG BreakEvenDuration;                                                //0xc
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0x10
    UCHAR TransitionDebugger;                                               //0x38
    UCHAR Platform;                                                         //0x39
    ULONG DependencyListCount;                                              //0x3c
    struct _KAFFINITY_EX Processors;                                        //0x40
    struct _UNICODE_STRING Name;                                            //0x148
    struct _PPM_SELECTION_DEPENDENCY* DependencyLists;                      //0x158
    unionvolatile _PPM_COORDINATED_SYNCHRONIZATION Synchronization;         //0x160
    volatile ULONGLONG EnterTime;                                           //0x168
    union
    {
        volatile LONG RefCount;                                             //0x180
        UCHAR CacheAlign0[64];                                              //0x180
    };
};
/* Used in */
// _PPM_PLATFORM_STATES

