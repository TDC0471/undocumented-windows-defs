#pragma once
/* ------------------ */

#include <_HV_PARTITION_PRIVILEGE_MASK.h>

//0x10 bytes (sizeof)
struct _HV_X64_HYPERVISOR_FEATURES
{
    union _HV_PARTITION_PRIVILEGE_MASK PartitionPrivileges;                 //0x0
    ULONG MaxSupportedCState:4;                                             //0x8
    ULONG HpetNeededForC3PowerState_Deprecated:1;                           //0x8
    ULONG Reserved:27;                                                      //0x8
    ULONG MwaitAvailable_Deprecated:1;                                      //0xc
    ULONG GuestDebuggingAvailable:1;                                        //0xc
    ULONG PerformanceMonitorsAvailable:1;                                   //0xc
    ULONG CpuDynamicPartitioningAvailable:1;                                //0xc
    ULONG XmmRegistersForFastHypercallAvailable:1;                          //0xc
    ULONG GuestIdleAvailable:1;                                             //0xc
    ULONG HypervisorSleepStateSupportAvailable:1;                           //0xc
    ULONG NumaDistanceQueryAvailable:1;                                     //0xc
    ULONG FrequencyRegsAvailable:1;                                         //0xc
    ULONG SyntheticMachineCheckAvailable:1;                                 //0xc
    ULONG GuestCrashRegsAvailable:1;                                        //0xc
    ULONG DebugRegsAvailable:1;                                             //0xc
    ULONG Npiep1Available:1;                                                //0xc
    ULONG DisableHypervisorAvailable:1;                                     //0xc
    ULONG ExtendedGvaRangesForFlushVirtualAddressListAvailable:1;           //0xc
    ULONG FastHypercallOutputAvailable:1;                                   //0xc
    ULONG SvmFeaturesAvailable:1;                                           //0xc
    ULONG SintPollingModeAvailable:1;                                       //0xc
    ULONG HypercallMsrLockAvailable:1;                                      //0xc
    ULONG DirectSyntheticTimers:1;                                          //0xc
    ULONG RegisterPatAvailable:1;                                           //0xc
    ULONG RegisterBndcfgsAvailable:1;                                       //0xc
    ULONG WatchdogTimerAvailable:1;                                         //0xc
    ULONG SyntheticTimeUnhaltedTimerAvailable:1;                            //0xc
    ULONG DeviceDomainsAvailable:1;                                         //0xc
    ULONG S1DeviceDomainsAvailable:1;                                       //0xc
    ULONG LbrAvailable:1;                                                   //0xc
    ULONG IptAvailable:1;                                                   //0xc
    ULONG CrossVtlFlushAvailable:1;                                         //0xc
    ULONG Reserved1:3;                                                      //0xc
};
