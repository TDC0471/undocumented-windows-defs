#pragma once
/* ------------------ */

#include <_PPM_IDLE_STATES.h>
#include <PPM_IDLE_ACCOUNTING.h>
#include <_PPM_PERF_STATES.h>
#include <_KTIMER.h>
#include <_KDPC.h>
#include <_KPRCB.h>

//0x118 bytes (sizeof)
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
    struct _PPM_PERF_STATES* PerfStates;                                    //0x28
    ULONG LastKernelUserTime;                                               //0x30
    ULONG LastIdleThreadKTime;                                              //0x34
    ULONGLONG LastGlobalTimeHv;                                             //0x38
    ULONGLONG LastProcessorTimeHv;                                          //0x40
    UCHAR ThermalConstraint;                                                //0x48
    UCHAR LastBusyPercentage;                                               //0x49
    union
    {
        USHORT AsUSHORT;                                                    //0x4a
        USHORT PStateDomain:1;                                              //0x4a
        USHORT PStateDomainIdleAccounting:1;                                //0x4a
        USHORT Reserved:14;                                                 //0x4a
    } Flags;                                                                //0x4a
    struct _KTIMER PerfTimer;                                               //0x50
    struct _KDPC PerfDpc;                                                   //0x90
    ULONG LastSysTime;                                                      //0xd0
    struct _KPRCB* PStateMaster;                                            //0xd8
    ULONGLONG PStateSet;                                                    //0xe0
    ULONG CurrentPState;                                                    //0xe8
    ULONG DesiredPState;                                                    //0xec
    volatile ULONG PStateIdleStartTime;                                     //0xf0
    ULONG PStateIdleTime;                                                   //0xf4
    ULONG LastPStateIdleTime;                                               //0xf8
    ULONG PStateStartTime;                                                  //0xfc
    ULONG DiaIndex;                                                         //0x100
    ULONG Reserved0;                                                        //0x104
    ULONGLONG WmiDispatchPtr;                                               //0x108
    LONG WmiInterfaceEnabled;                                               //0x110
};
/* Used in */
// _KPRCB

