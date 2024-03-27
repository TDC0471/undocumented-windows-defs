#pragma once
/* ------------------ */

#include <_HV_PARTITION_PRIVILEGE_MASK.h>

//0x10 bytes (sizeof)
struct _HV_HYPERVISOR_FEATURES
{
    union _HV_PARTITION_PRIVILEGE_MASK PartitionPrivileges;                 //0x0
    ULONG MaxSupportedCState:4;                                             //0x8
    ULONG HpetNeededForC3PowerState:1;                                      //0x8
    ULONG Reserved:27;                                                      //0x8
    ULONG MwaitAvailable:1;                                                 //0xc
    ULONG GuestDebuggingAvailable:1;                                        //0xc
    ULONG PerformanceMonitorsAvailable:1;                                   //0xc
    ULONG CpuDynamicPartitioningAvailable:1;                                //0xc
    ULONG XmmRegistersForFastHypercallAvailable:1;                          //0xc
    ULONG GuestIdleAvailable:1;                                             //0xc
    ULONG HypervisorSleepStateSupportAvailable:1;                           //0xc
    ULONG NumaDistanceQueryAvailable:1;                                     //0xc
    ULONG FrequencyMsrsAvailable:1;                                         //0xc
    ULONG SyntheticMachineCheckAvailable:1;                                 //0xc
    ULONG GuestCrashMsrsAvailable:1;                                        //0xc
    ULONG DebugMsrsAvailable:1;                                             //0xc
    ULONG Npiep1Available:1;                                                //0xc
    ULONG DisableHypervisorAvailable:1;                                     //0xc
    ULONG Reserved1:18;                                                     //0xc
};
/* Used in */
// _HV_CPUID_RESULT

