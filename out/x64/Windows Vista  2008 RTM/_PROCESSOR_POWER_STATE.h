#pragma once
/* ------------------ */

#include <_PROCESSOR_POWER_STATE.h>
#include <PPM_IDLE_STATES.h>
#include <PROCESSOR_IDLE_TIMES.h>
#include <PPM_IDLE_ACCOUNTING.h>
#include <PPM_PERF_STATES.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_KPRCB.h>

//0x138 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    VOID (*IdleFunction)(struct _PROCESSOR_POWER_STATE* arg1);              //0x0
    struct PPM_IDLE_STATES* IdleStates;                                     //0x8
    ULONGLONG LastTimeCheck;                                                //0x10
    ULONGLONG LastIdleTime;                                                 //0x18
    struct PROCESSOR_IDLE_TIMES IdleTimes;                                  //0x20
    struct PPM_IDLE_ACCOUNTING* IdleAccounting;                             //0x40
    struct PPM_PERF_STATES* PerfStates;                                     //0x48
    ULONG LastKernelUserTime;                                               //0x50
    ULONG LastIdleThreadKTime;                                              //0x54
    ULONGLONG LastGlobalTimeHv;                                             //0x58
    ULONGLONG LastProcessorTimeHv;                                          //0x60
    UCHAR ThermalConstraint;                                                //0x68
    UCHAR LastBusyPercentage;                                               //0x69
    union
    {
        USHORT AsUSHORT;                                                    //0x6a
        USHORT PStateDomain:1;                                              //0x6a
        USHORT PStateDomainIdleAccounting:1;                                //0x6a
        USHORT Reserved:14;                                                 //0x6a
    } Flags;                                                                //0x6a
    struct _KTIMER PerfTimer;                                               //0x70
    struct _KDPC PerfDpc;                                                   //0xb0
    ULONG LastSysTime;                                                      //0xf0
    struct _KPRCB* PStateMaster;                                            //0xf8
    ULONGLONG PStateSet;                                                    //0x100
    ULONG CurrentPState;                                                    //0x108
    ULONG Reserved0;                                                        //0x10c
    ULONG DesiredPState;                                                    //0x110
    ULONG Reserved1;                                                        //0x114
    volatile ULONG PStateIdleStartTime;                                     //0x118
    ULONG PStateIdleTime;                                                   //0x11c
    ULONG LastPStateIdleTime;                                               //0x120
    ULONG PStateStartTime;                                                  //0x124
    ULONGLONG WmiDispatchPtr;                                               //0x128
    LONG WmiInterfaceEnabled;                                               //0x130
};
/* Used in */
// _KPRCB
// _PROCESSOR_POWER_STATE

