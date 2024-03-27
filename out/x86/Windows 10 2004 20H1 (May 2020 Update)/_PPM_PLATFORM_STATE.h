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
    ULONGLONG LevelId;                                                      //0x0
    ULONG Latency;                                                          //0x8
    ULONG BreakEvenDuration;                                                //0xc
    struct _PPM_VETO_ACCOUNTING VetoAccounting;                             //0x10
    UCHAR TransitionDebugger;                                               //0x28
    UCHAR Platform;                                                         //0x29
    ULONG DependencyListCount;                                              //0x2c
    struct _KAFFINITY_EX Processors;                                        //0x30
    struct _UNICODE_STRING Name;                                            //0x3c
    struct _PPM_SELECTION_DEPENDENCY* DependencyLists;                      //0x44
    unionvolatile _PPM_COORDINATED_SYNCHRONIZATION Synchronization;         //0x48
    volatile ULONGLONG EnterTime;                                           //0x50
    union
    {
        volatile LONG RefCount;                                             //0x80
        UCHAR CacheAlign0[64];                                              //0x80
    };
};
/* Used in */
// _PPM_PLATFORM_STATES

