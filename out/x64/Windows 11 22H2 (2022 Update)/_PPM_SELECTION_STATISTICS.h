#pragma once
/* ------------------ */

#include <_PPM_VETO_ACCOUNTING.h>

//0x88 bytes (sizeof)
struct _PPM_SELECTION_STATISTICS
{
    ULONGLONG SelectedCount;                                                //0x0
    ULONGLONG VetoCount;                                                    //0x8
    ULONGLONG PreVetoCount;                                                 //0x10
    ULONGLONG WrongProcessorCount;                                          //0x18
    ULONGLONG LatencyCount;                                                 //0x20
    ULONGLONG IdleDurationCount;                                            //0x28
    ULONGLONG DeviceDependencyCount;                                        //0x30
    ULONGLONG ProcessorDependencyCount;                                     //0x38
    ULONGLONG PlatformOnlyCount;                                            //0x40
    ULONGLONG InterruptibleCount;                                           //0x48
    ULONGLONG LegacyOverrideCount;                                          //0x50
    ULONGLONG CstateCheckCount;                                             //0x58
    ULONGLONG NoCStateCount;                                                //0x60
    ULONGLONG CoordinatedDependencyCount;                                   //0x68
    ULONGLONG NotClockOwnerCount;                                           //0x70
    ULONGLONG DependencyIdleDurationCount;                                  //0x78
    struct _PPM_VETO_ACCOUNTING* PreVetoAccounting;                         //0x80
};
/* Used in */
// _PLATFORM_IDLE_STATE_ACCOUNTING
// _PROC_IDLE_STATE_ACCOUNTING

