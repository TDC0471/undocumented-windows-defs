#pragma once
/* ------------------ */

#include <_PPM_IDLE_STATES.h>
#include <PPM_IDLE_ACCOUNTING.h>
#include <_PPM_PERF_STATES.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_KPRCB.h>

//0xc8 bytes (sizeof)
struct _PROCESSOR_POWER_STATE
{
    struct _PPM_IDLE_STATES* IdleStates;                                    //0x0
    ULONGLONG LastTimeCheck;                                                //0x8
    ULONGLONG IdleTimeAccumulated;                                          //0x10
    union
    {
        struct
        {
            ULONGLONG IdleTransitionTime;                                   //0x18
        } Native;                                                           //0x18
        struct
        {
            ULONGLONG LastIdleCheck;                                        //0x18
        } Hv;                                                               //0x18
    };
    struct PPM_IDLE_ACCOUNTING* IdleAccounting;                             //0x20
    struct _PPM_PERF_STATES* PerfStates;                                    //0x24
    ULONG LastKernelUserTime;                                               //0x28
    ULONG LastIdleThreadKTime;                                              //0x2c
    ULONGLONG LastGlobalTimeHv;                                             //0x30
    ULONGLONG LastProcessorTimeHv;                                          //0x38
    UCHAR ThermalConstraint;                                                //0x40
    UCHAR LastBusyPercentage;                                               //0x41
    union
    {
        USHORT AsUSHORT;                                                    //0x42
        USHORT PStateDomain:1;                                              //0x42
        USHORT PStateDomainIdleAccounting:1;                                //0x42
        USHORT Reserved:14;                                                 //0x42
    } Flags;                                                                //0x42
    struct _KTIMER PerfTimer;                                               //0x48
    struct _KDPC PerfDpc;                                                   //0x70
    ULONG LastSysTime;                                                      //0x90
    struct _KPRCB* PStateMaster;                                            //0x94
    ULONG PStateSet;                                                        //0x98
    ULONG CurrentPState;                                                    //0x9c
    ULONG DesiredPState;                                                    //0xa0
    volatile ULONG PStateIdleStartTime;                                     //0xa4
    ULONG PStateIdleTime;                                                   //0xa8
    ULONG LastPStateIdleTime;                                               //0xac
    ULONG PStateStartTime;                                                  //0xb0
    ULONG DiaIndex;                                                         //0xb4
    ULONG Reserved0;                                                        //0xb8
    ULONG WmiDispatchPtr;                                                   //0xbc
    LONG WmiInterfaceEnabled;                                               //0xc0
};
/* Used in */
// _KPRCB

