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

//0x100 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    ULONGLONG IdleTimeLast;                                                 //0x8
    ULONGLONG IdleTimeTotal;                                                //0x10
    ULONGLONG IdleTimeEntry;                                                //0x18
    struct _PROC_IDLE_ACCOUNTING* IdleAccounting;                           //0x20
    enum _PROC_HYPERVISOR_STATE Hypervisor;                                 //0x28
    ULONG PerfHistoryTotal;                                                 //0x2c
    UCHAR ThermalConstraint;                                                //0x30
    UCHAR PerfHistoryCount;                                                 //0x31
    UCHAR PerfHistorySlot;                                                  //0x32
    UCHAR Reserved;                                                         //0x33
    ULONG LastSysTime;                                                      //0x34
    ULONGLONG WmiDispatchPtr;                                               //0x38
    LONG WmiInterfaceEnabled;                                               //0x40
    struct _PPM_FFH_THROTTLE_STATE_INFO FFHThrottleStateInfo;               //0x48
    struct _KDPC PerfActionDpc;                                             //0x68
    volatile LONG PerfActionMask;                                           //0xa8
    struct _PROC_IDLE_SNAP IdleCheck;                                       //0xb0
    struct _PROC_IDLE_SNAP PerfCheck;                                       //0xc0
    struct _PROC_PERF_DOMAIN* Domain;                                       //0xd0
    struct _PROC_PERF_CONSTRAINT* PerfConstraint;                           //0xd8
    struct _PROC_PERF_LOAD* Load;                                           //0xe0
    struct _PROC_HISTORY_ENTRY* PerfHistory;                                //0xe8
    ULONG Utility;                                                          //0xf0
    ULONG OverUtilizedHistory;                                              //0xf4
    volatile ULONG AffinityCount;                                           //0xf8
    ULONG AffinityHistory;                                                  //0xfc
};
/* Used in */
// _KPRCB

