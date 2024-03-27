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
    UCHAR TransitionDebugger;                                               //0x20
    UCHAR Platform;                                                         //0x21
    ULONG DependencyListCount;                                              //0x24
    struct _KAFFINITY_EX Processors;                                        //0x28
    struct _UNICODE_STRING Name;                                            //0x34
    struct _PPM_SELECTION_DEPENDENCY* DependencyLists;                      //0x3c
    unionvolatile _PPM_COORDINATED_SYNCHRONIZATION Synchronization;         //0x40
    volatile ULONGLONG EnterTime;                                           //0x48
    union
    {
        volatile LONG RefCount;                                             //0x80
        UCHAR CacheAlign0[64];                                              //0x80
    };
};
/* Used in */
// _PPM_PLATFORM_STATES

