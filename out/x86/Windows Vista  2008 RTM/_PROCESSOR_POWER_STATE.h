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

//0xe0 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    VOID (*IdleFunction)(struct _PROCESSOR_POWER_STATE* arg1);              //0x0
    struct PPM_IDLE_STATES* IdleStates;                                     //0x4
    ULONGLONG LastTimeCheck;                                                //0x8
    ULONGLONG LastIdleTime;                                                 //0x10
    struct PROCESSOR_IDLE_TIMES IdleTimes;                                  //0x18
    struct PPM_IDLE_ACCOUNTING* IdleAccounting;                             //0x38
    struct PPM_PERF_STATES* PerfStates;                                     //0x3c
    ULONG LastKernelUserTime;                                               //0x40
    ULONG LastIdleThreadKTime;                                              //0x44
    ULONGLONG LastGlobalTimeHv;                                             //0x48
    ULONGLONG LastProcessorTimeHv;                                          //0x50
    UCHAR ThermalConstraint;                                                //0x58
    UCHAR LastBusyPercentage;                                               //0x59
    union
    {
        USHORT AsUSHORT;                                                    //0x5a
        USHORT PStateDomain:1;                                              //0x5a
        USHORT PStateDomainIdleAccounting:1;                                //0x5a
        USHORT Reserved:14;                                                 //0x5a
    } Flags;                                                                //0x5a
    struct _KTIMER PerfTimer;                                               //0x60
    struct _KDPC PerfDpc;                                                   //0x88
    ULONG LastSysTime;                                                      //0xa8
    struct _KPRCB* PStateMaster;                                            //0xac
    ULONG PStateSet;                                                        //0xb0
    ULONG CurrentPState;                                                    //0xb4
    ULONG Reserved0;                                                        //0xb8
    ULONG DesiredPState;                                                    //0xbc
    ULONG Reserved1;                                                        //0xc0
    volatile ULONG PStateIdleStartTime;                                     //0xc4
    ULONG PStateIdleTime;                                                   //0xc8
    ULONG LastPStateIdleTime;                                               //0xcc
    ULONG PStateStartTime;                                                  //0xd0
    ULONG WmiDispatchPtr;                                                   //0xd4
    LONG WmiInterfaceEnabled;                                               //0xd8
};
/* Used in */
// _KPRCB
// _PROCESSOR_POWER_STATE

