#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HV_HYPERVISOR_HARDWARE_FEATURES
{
    ULONG ApicOverlayAssistInUse:1;                                         //0x0
    ULONG MsrBitmapsInUse:1;                                                //0x0
    ULONG ArchitecturalPerformanceCountersInUse:1;                          //0x0
    ULONG SecondLevelAddressTranslationInUse:1;                             //0x0
    ULONG DmaRemappingInUse:1;                                              //0x0
    ULONG InterruptRemappingInUse:1;                                        //0x0
    ULONG MemoryPatrolScrubberPresent:1;                                    //0x0
    ULONG Reserved:25;                                                      //0x0
    ULONG ReservedEbx;                                                      //0x4
    ULONG ReservedEcx;                                                      //0x8
    ULONG ReservedEdx;                                                      //0xc
};
/* Used in */
// _HV_CPUID_RESULT

