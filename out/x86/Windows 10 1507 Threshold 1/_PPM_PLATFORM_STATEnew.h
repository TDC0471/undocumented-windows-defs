#pragma once
/* ------------------ */

#include <_PPM_VETO_ACCOUNTING.h>
#include <_KAFFINITY_EX.h>
#include <_UNICODE_STRING.h>
#include <_PPM_SELECTION_DEPENDENCY.h>
#include <_PPM_COORDINATED_SYNCHRONIZATION.h>

//0xc0 bytes (sizeof)
struct _PPM_PLATFORM_STATE
{
    ULONG Latency;                                                          //0x0
    ULONG BreakEvenDuration;                                                //0x4
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0x8
    UCHAR TransitionDebugger;                                               //0x1c
    UCHAR Platform;                                                         //0x1d
    ULONG DependencyListCount;                                              //0x20
    struct _KAFFINITY_EX Processors;                                        //0x24
    struct _UNICODE_STRING Name;                                            //0x30
    struct _PPM_SELECTION_DEPENDENCY* DependencyLists;                      //0x38
    unionvolatile _PPM_COORDINATED_SYNCHRONIZATION Synchronization;         //0x3c
    volatile ULONGLONG EnterTime;                                           //0x40
    union
    {
        volatile LONG RefCount;                                             //0x80
        UCHAR CacheAlign0[64];                                              //0x80
    };
};
/* Used in */
// _PPM_PLATFORM_STATES

