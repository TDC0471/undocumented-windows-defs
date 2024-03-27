#pragma once
/* ------------------ */


//0x68 bytes (sizeof)
struct _PPM_SELECTION_STATISTICS
{
    ULONGLONG PlatformOnlyCount;                                            //0x0
    ULONGLONG PreVetoCount;                                                 //0x8
    ULONGLONG VetoCount;                                                    //0x10
    ULONGLONG IdleDurationCount;                                            //0x18
    ULONGLONG LatencyCount;                                                 //0x20
    ULONGLONG InterruptibleCount;                                           //0x28
    ULONGLONG DeviceDependencyCount;                                        //0x30
    ULONGLONG ProcessorDependencyCount;                                     //0x38
    ULONGLONG WrongProcessorCount;                                          //0x40
    ULONGLONG LegacyOverrideCount;                                          //0x48
    ULONGLONG CstateCheckCount;                                             //0x50
    ULONGLONG NoCStateCount;                                                //0x58
    ULONGLONG SelectedCount;                                                //0x60
};
/* Used in */
// _PROC_IDLE_STATE_ACCOUNTING

