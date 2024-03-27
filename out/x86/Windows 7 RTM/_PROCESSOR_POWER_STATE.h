#pragma once
/* ------------------ */

#include <_PPM_IDLE_STATES.h>
#include <_PROC_IDLE_ACCOUNTING.h>
#include <_PROC_HYPERVISOR_STATE.h>
#include <_PPM_FFH_THROTTLE_STATE_INFO.h>
#include <_KDPC.h>
#include <_PROC_IDLE_SNAP.h>
#include <_PROC_PERF_DOMAIN.h>
#include <_PROC_PERF_CONSTRAINT.h>
#include <_PROC_PERF_LOAD.h>
#include <_PROC_HISTORY_ENTRY.h>

//0xc8 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    ULONGLONG IdleTimeLast;                                                 //0x8
    ULONGLONG IdleTimeTotal;                                                //0x10
    ULONGLONG IdleTimeEntry;                                                //0x18
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x20
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0x24
    ULONG PerfHistoryTotal;                                                 //0x28
    UCHAR ThermalConstraint;                                                //0x2c
    UCHAR PerfHistoryCount;                                                 //0x2d
    UCHAR PerfHistorySlot;                                                  //0x2e
    UCHAR Reserved;                                                         //0x2f
    ULONG LastSysTime;                                                      //0x30
    ULONG WmiDispatchPtr;                                                   //0x34
    LONG WmiInterfaceEnabled;                                               //0x38
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0x40
    struct _KDPC PerfActionDpc;                                             //0x60
    volatile LONG PerfActionMask;                                           //0x80
    struct _PROC_IDLE_SNAP IdleCheck;                                       //0x88
    struct _PROC_IDLE_SNAP PerfCheck;                                       //0x98
    struct _PROC_PERF_DOMAIN* Domain;                                       //0xa8
    struct _PROC_PERF_CONSTRAINT* PerfConstraint;                           //0xac
    struct _PROC_PERF_LOAD* Load;                                           //0xb0
    struct _PROC_HISTORY_ENTRY* PerfHistory;                                //0xb4
    ULONG Utility;                                                          //0xb8
    ULONG OverUtilizedHistory;                                              //0xbc
    volatile ULONG AffinityCount;                                           //0xc0
    ULONG AffinityHistory;                                                  //0xc4
};
/* Used in */
// _KPRCB

