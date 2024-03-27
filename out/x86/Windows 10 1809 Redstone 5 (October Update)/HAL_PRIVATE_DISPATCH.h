#pragma once
/* ------------------ */

#include <_BUS_HANDLER.h>
#include <_INTERFACE_TYPE.h>
#include <_BUS_DATA_TYPE.h>
#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>
#include <_DRIVER_OBJECT.h>
#include <_DEVICE_OBJECT.h>
#include <_CM_RESOURCE_LIST.h>
#include <_ADAPTER_OBJECT.h>
#include <_MAP_REGISTER_ENTRY.h>
#include <_DEBUG_DEVICE_DESCRIPTOR.h>
#include <_LOADER_PARAMETER_BLOCK.h>
#include <_GROUP_AFFINITY.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_INTERRUPT_REMAPPING_INFO.h>
#include <_KINTERRUPT_MODE.h>
#include <_HAL_DP_REPLACE_PARAMETERS.h>
#include <_KAFFINITY_EX.h>
#include <_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.h>
#include <_WHEA_PROCESSOR_GENERIC_ERROR_SECTION.h>
#include <_SYSTEM_POWER_STATE.h>
#include <_HAL_INTEL_ENLIGHTENMENT_INFORMATION.h>
#include <_HAL_LOG_REGISTER_CONTEXT.h>
#include <_INTERRUPT_VECTOR_DATA.h>
#include <_PCI_BUSMASTER_DESCRIPTOR.h>
#include <_MDL.h>
#include <_KPROFILE_SOURCE.h>
#include <_HAL_PMC_COUNTERS.h>
#include <_HAL_UNMASKED_INTERRUPT_INFORMATION.h>
#include <KD_CALLBACK_ACTION.h>
#include <_HAL_CLOCK_TIMER_CONFIGURATION.h>
#include <_HAL_CLOCK_TIMER_MODE.h>
#include <_HAL_IOMMU_DISPATCH.h>
#include <_KINTERRUPT.h>
#include <_HAL_PROCESSOR_STAT_TYPE.h>
#include <_GUID.h>
#include <_HAL_LBR_ENTRY.h>
#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_DMA_IOMMU_INTERFACE.h>

//0x23c bytes (sizeof)
struct HAL_PRIVATE_DISPATCH
{
    ULONG Version;                                                          //0x0
    struct _BUS_HANDLER* (*HalHandlerForBus)(enum _INTERFACE_TYPE arg1, ULONG arg2); //0x4
    struct _BUS_HANDLER* (*HalHandlerForConfigSpace)(enum _BUS_DATA_TYPE arg1, ULONG arg2); //0x8
    VOID (*HalLocateHiberRanges)(VOID* arg1);                               //0xc
    LONG (*HalRegisterBusHandler)(enum _INTERFACE_TYPE arg1, enum _BUS_DATA_TYPE arg2, ULONG arg3, enum _INTERFACE_TYPE arg4, ULONG arg5, ULONG arg6, LONG (*arg7)(struct _BUS_HANDLER* arg1), struct _BUS_HANDLER** arg8); //0x10
    VOID (*HalSetWakeEnable)(UCHAR arg1);                                   //0x14
    LONG (*HalSetWakeAlarm)(ULONGLONG arg1, ULONGLONG arg2);                //0x18
    UCHAR (*HalPciTranslateBusAddress)(enum _INTERFACE_TYPE arg1, ULONG arg2, union _LARGE_INTEGER arg3, ULONG* arg4, union _LARGE_INTEGER* arg5); //0x1c
    LONG (*HalPciAssignSlotResources)(struct _UNICODE_STRING* arg1, struct _UNICODE_STRING* arg2, struct _DRIVER_OBJECT* arg3, struct _DEVICE_OBJECT* arg4, enum _INTERFACE_TYPE arg5, ULONG arg6, ULONG arg7, struct _CM_RESOURCE_LIST** arg8); //0x20
    VOID (*HalHaltSystem)();                                                //0x24
    UCHAR (*HalFindBusAddressTranslation)(union _LARGE_INTEGER arg1, ULONG* arg2, union _LARGE_INTEGER* arg3, ULONG* arg4, UCHAR arg5); //0x28
    UCHAR (*HalResetDisplay)();                                             //0x2c
    LONG (*HalAllocateMapRegisters)(struct _ADAPTER_OBJECT* arg1, ULONG arg2, ULONG arg3, struct _MAP_REGISTER_ENTRY* arg4); //0x30
    LONG (*KdSetupPciDeviceForDebugging)(VOID* arg1, struct _DEBUG_DEVICE_DESCRIPTOR* arg2); //0x34
    LONG (*KdReleasePciDeviceForDebugging)(struct _DEBUG_DEVICE_DESCRIPTOR* arg1); //0x38
    VOID* (*KdGetAcpiTablePhase0)(struct _LOADER_PARAMETER_BLOCK* arg1, ULONG arg2); //0x3c
    VOID (*KdCheckPowerButton)();                                           //0x40
    UCHAR (*HalVectorToIDTEntry)(ULONG arg1);                               //0x44
    VOID* (*KdMapPhysicalMemory64)(union _LARGE_INTEGER arg1, ULONG arg2, UCHAR arg3); //0x48
    VOID (*KdUnmapVirtualAddress)(VOID* arg1, ULONG arg2, UCHAR arg3);      //0x4c
    ULONG (*KdGetPciDataByOffset)(ULONG arg1, ULONG arg2, VOID* arg3, ULONG arg4, ULONG arg5); //0x50
    ULONG (*KdSetPciDataByOffset)(ULONG arg1, ULONG arg2, VOID* arg3, ULONG arg4, ULONG arg5); //0x54
    ULONG (*HalGetInterruptVectorOverride)(enum _INTERFACE_TYPE arg1, ULONG arg2, ULONG arg3, ULONG arg4, UCHAR* arg5, ULONG* arg6); //0x58
    LONG (*HalGetVectorInputOverride)(ULONG arg1, struct _GROUP_AFFINITY* arg2, ULONG* arg3, enum _KINTERRUPT_POLARITY* arg4, struct _INTERRUPT_REMAPPING_INFO* arg5); //0x5c
    LONG (*HalLoadMicrocode)(VOID* arg1);                                   //0x60
    LONG (*HalUnloadMicrocode)();                                           //0x64
    LONG (*HalPostMicrocodeUpdate)();                                       //0x68
    LONG (*HalAllocateMessageTargetOverride)(struct _DEVICE_OBJECT* arg1, struct _GROUP_AFFINITY* arg2, ULONG arg3, enum _KINTERRUPT_MODE arg4, UCHAR arg5, ULONG* arg6, UCHAR* arg7, ULONG* arg8); //0x6c
    VOID (*HalFreeMessageTargetOverride)(struct _DEVICE_OBJECT* arg1, ULONG arg2, struct _GROUP_AFFINITY* arg3); //0x70
    LONG (*HalDpReplaceBegin)(struct _HAL_DP_REPLACE_PARAMETERS* arg1, VOID** arg2); //0x74
    VOID (*HalDpReplaceTarget)(VOID* arg1);                                 //0x78
    LONG (*HalDpReplaceControl)(ULONG arg1, VOID* arg2);                    //0x7c
    VOID (*HalDpReplaceEnd)(VOID* arg1);                                    //0x80
    VOID (*HalPrepareForBugcheck)(ULONG arg1);                              //0x84
    UCHAR (*HalQueryWakeTime)(ULONGLONG* arg1, ULONGLONG* arg2);            //0x88
    VOID (*HalReportIdleStateUsage)(UCHAR arg1, struct _KAFFINITY_EX* arg2); //0x8c
    VOID (*HalTscSynchronization)(UCHAR arg1, ULONG* arg2);                 //0x90
    LONG (*HalWheaInitProcessorGenericSection)(struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR* arg1, struct _WHEA_PROCESSOR_GENERIC_ERROR_SECTION* arg2); //0x94
    VOID (*HalStopLegacyUsbInterrupts)(enum _SYSTEM_POWER_STATE arg1);      //0x98
    LONG (*HalReadWheaPhysicalMemory)(union _LARGE_INTEGER arg1, ULONG arg2, VOID* arg3); //0x9c
    LONG (*HalWriteWheaPhysicalMemory)(union _LARGE_INTEGER arg1, ULONG arg2, VOID* arg3); //0xa0
    LONG (*HalDpMaskLevelTriggeredInterrupts)();                            //0xa4
    LONG (*HalDpUnmaskLevelTriggeredInterrupts)();                          //0xa8
    LONG (*HalDpGetInterruptReplayState)(VOID* arg1, VOID** arg2);          //0xac
    LONG (*HalDpReplayInterrupts)(VOID* arg1);                              //0xb0
    UCHAR (*HalQueryIoPortAccessSupported)();                               //0xb4
    LONG (*KdSetupIntegratedDeviceForDebugging)(VOID* arg1, struct _DEBUG_DEVICE_DESCRIPTOR* arg2); //0xb8
    LONG (*KdReleaseIntegratedDeviceForDebugging)(struct _DEBUG_DEVICE_DESCRIPTOR* arg1); //0xbc
    VOID (*HalGetEnlightenmentInformation)(struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION* arg1); //0xc0
    VOID* (*HalAllocateEarlyPages)(struct _LOADER_PARAMETER_BLOCK* arg1, ULONG arg2, ULONGLONG* arg3, ULONG arg4); //0xc4
    VOID* (*HalMapEarlyPages)(ULONGLONG arg1, ULONG arg2, ULONG arg3);      //0xc8
    VOID* Dummy1;                                                           //0xcc
    VOID* Dummy2;                                                           //0xd0
    VOID (*HalNotifyProcessorFreeze)(UCHAR arg1, UCHAR arg2);               //0xd4
    LONG (*HalPrepareProcessorForIdle)(ULONG arg1);                         //0xd8
    VOID (*HalRegisterLogRoutine)(struct _HAL_LOG_REGISTER_CONTEXT* arg1);  //0xdc
    VOID (*HalResumeProcessorFromIdle)();                                   //0xe0
    VOID* Dummy;                                                            //0xe4
    ULONG (*HalVectorToIDTEntryEx)(ULONG arg1);                             //0xe8
    LONG (*HalSecondaryInterruptQueryPrimaryInformation)(struct _INTERRUPT_VECTOR_DATA* arg1, ULONG* arg2); //0xec
    LONG (*HalMaskInterrupt)(ULONG arg1, ULONG arg2);                       //0xf0
    LONG (*HalUnmaskInterrupt)(ULONG arg1, ULONG arg2);                     //0xf4
    UCHAR (*HalIsInterruptTypeSecondary)(ULONG arg1, ULONG arg2);           //0xf8
    LONG (*HalAllocateGsivForSecondaryInterrupt)(CHAR* arg1, USHORT arg2, ULONG* arg3); //0xfc
    LONG (*HalAddInterruptRemapping)(ULONG arg1, ULONG arg2, struct _PCI_BUSMASTER_DESCRIPTOR* arg3, UCHAR arg4, struct _INTERRUPT_VECTOR_DATA* arg5, ULONG arg6); //0x100
    VOID (*HalRemoveInterruptRemapping)(ULONG arg1, ULONG arg2, struct _PCI_BUSMASTER_DESCRIPTOR* arg3, UCHAR arg4, struct _INTERRUPT_VECTOR_DATA* arg5, ULONG arg6); //0x104
    VOID (*HalSaveAndDisableHvEnlightenment)();                             //0x108
    VOID (*HalRestoreHvEnlightenment)();                                    //0x10c
    VOID (*HalFlushIoBuffersExternalCache)(struct _MDL* arg1, UCHAR arg2);  //0x110
    VOID (*HalFlushExternalCache)(UCHAR arg1);                              //0x114
    LONG (*HalPciEarlyRestore)(enum _SYSTEM_POWER_STATE arg1);              //0x118
    LONG (*HalGetProcessorId)(ULONG arg1, ULONG* arg2, ULONG* arg3);        //0x11c
    LONG (*HalAllocatePmcCounterSet)(ULONG arg1, enum _KPROFILE_SOURCE* arg2, ULONG arg3, struct _HAL_PMC_COUNTERS** arg4); //0x120
    VOID (*HalCollectPmcCounters)(struct _HAL_PMC_COUNTERS* arg1, ULONGLONG* arg2); //0x124
    VOID (*HalFreePmcCounterSet)(struct _HAL_PMC_COUNTERS* arg1);           //0x128
    LONG (*HalProcessorHalt)(ULONG arg1, VOID* arg2, LONG (*arg3)(VOID* arg1)); //0x12c
    ULONGLONG (*HalTimerQueryCycleCounter)(ULONGLONG* arg1);                //0x130
    VOID* Dummy3;                                                           //0x134
    VOID (*HalPciMarkHiberPhase)();                                         //0x138
    LONG (*HalQueryProcessorRestartEntryPoint)(union _LARGE_INTEGER* arg1); //0x13c
    LONG (*HalRequestInterrupt)(ULONG arg1);                                //0x140
    LONG (*HalEnumerateUnmaskedInterrupts)(UCHAR (*arg1)(VOID* arg1, struct _HAL_UNMASKED_INTERRUPT_INFORMATION* arg2), VOID* arg2, struct _HAL_UNMASKED_INTERRUPT_INFORMATION* arg3); //0x144
    VOID (*HalFlushAndInvalidatePageExternalCache)(union _LARGE_INTEGER arg1); //0x148
    LONG (*KdEnumerateDebuggingDevices)(VOID* arg1, struct _DEBUG_DEVICE_DESCRIPTOR* arg2, enum KD_CALLBACK_ACTION (*arg3)(struct _DEBUG_DEVICE_DESCRIPTOR* arg1)); //0x14c
    VOID (*HalFlushIoRectangleExternalCache)(struct _MDL* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, UCHAR arg6); //0x150
    VOID (*HalPowerEarlyRestore)(ULONG arg1);                               //0x154
    LONG (*HalQueryCapsuleCapabilities)(VOID* arg1, ULONG arg2, ULONGLONG* arg3, ULONG* arg4); //0x158
    LONG (*HalUpdateCapsule)(VOID* arg1, ULONG arg2, union _LARGE_INTEGER arg3); //0x15c
    UCHAR (*HalPciMultiStageResumeCapable)();                               //0x160
    VOID (*HalDmaFreeCrashDumpRegisters)(ULONG arg1);                       //0x164
    UCHAR (*HalAcpiAoacCapable)();                                          //0x168
    LONG (*HalInterruptSetDestination)(struct _INTERRUPT_VECTOR_DATA* arg1, struct _GROUP_AFFINITY* arg2, ULONG* arg3); //0x16c
    VOID (*HalGetClockConfiguration)(struct _HAL_CLOCK_TIMER_CONFIGURATION* arg1); //0x170
    VOID (*HalClockTimerActivate)(UCHAR arg1);                              //0x174
    VOID (*HalClockTimerInitialize)();                                      //0x178
    VOID (*HalClockTimerStop)();                                            //0x17c
    LONG (*HalClockTimerArm)(enum _HAL_CLOCK_TIMER_MODE arg1, ULONGLONG arg2, ULONGLONG* arg3); //0x180
    UCHAR (*HalTimerOnlyClockInterruptPending)();                           //0x184
    VOID* (*HalAcpiGetMultiNode)();                                         //0x188
    VOID (*)(ULONG arg1, volatile LONG* arg2)(*HalPowerSetRebootHandler)(VOID (*arg1)(ULONG arg1, volatile LONG* arg2)); //0x18c
    VOID (*HalIommuRegisterDispatchTable)(struct _HAL_IOMMU_DISPATCH* arg1); //0x190
    VOID (*HalTimerWatchdogStart)();                                        //0x194
    VOID (*HalTimerWatchdogResetCountdown)();                               //0x198
    VOID (*HalTimerWatchdogStop)();                                         //0x19c
    UCHAR (*HalTimerWatchdogGeneratedLastReset)();                          //0x1a0
    LONG (*HalTimerWatchdogTriggerSystemReset)(UCHAR arg1);                 //0x1a4
    LONG (*HalInterruptVectorDataToGsiv)(struct _INTERRUPT_VECTOR_DATA* arg1, ULONG* arg2); //0x1a8
    LONG (*HalInterruptGetHighestPriorityInterrupt)(ULONG* arg1, UCHAR* arg2); //0x1ac
    LONG (*HalProcessorOn)(ULONG arg1);                                     //0x1b0
    LONG (*HalProcessorOff)();                                              //0x1b4
    LONG (*HalProcessorFreeze)();                                           //0x1b8
    LONG (*HalDmaLinkDeviceObjectByToken)(ULONG arg1, struct _DEVICE_OBJECT* arg2); //0x1bc
    LONG (*HalDmaCheckAdapterToken)(ULONG arg1);                            //0x1c0
    VOID* Dummy4;                                                           //0x1c4
    LONG (*HalTimerConvertPerformanceCounterToAuxiliaryCounter)(ULONGLONG arg1, ULONGLONG* arg2, ULONGLONG* arg3); //0x1c8
    LONG (*HalTimerConvertAuxiliaryCounterToPerformanceCounter)(ULONGLONG arg1, ULONGLONG* arg2, ULONGLONG* arg3); //0x1cc
    LONG (*HalTimerQueryAuxiliaryCounterFrequency)(ULONGLONG* arg1);        //0x1d0
    LONG (*HalConnectThermalInterrupt)(UCHAR (*arg1)(struct _KINTERRUPT* arg1, VOID* arg2)); //0x1d4
    UCHAR (*HalIsEFIRuntimeActive)();                                       //0x1d8
    UCHAR (*HalTimerQueryAndResetRtcErrors)(UCHAR arg1);                    //0x1dc
    VOID (*HalAcpiLateRestore)();                                           //0x1e0
    LONG (*KdWatchdogDelayExpiration)(ULONGLONG* arg1);                     //0x1e4
    LONG (*HalGetProcessorStats)(enum _HAL_PROCESSOR_STAT_TYPE arg1, ULONG arg2, ULONG arg3, ULONG* arg4); //0x1e8
    ULONGLONG (*HalTimerWatchdogQueryDueTime)();                            //0x1ec
    LONG (*HalConnectSyntheticInterrupt)(UCHAR (*arg1)(struct _KINTERRUPT* arg1, VOID* arg2)); //0x1f0
    VOID (*HalPreprocessNmi)(ULONG arg1);                                   //0x1f4
    LONG (*HalEnumerateEnvironmentVariablesWithFilter)(ULONG arg1, UCHAR (*arg2)(struct _GUID* arg1, WCHAR* arg2), VOID* arg3, ULONG* arg4); //0x1f8
    LONG (*HalCaptureLastBranchRecordStack)(ULONG arg1, struct _HAL_LBR_ENTRY* arg2, ULONG* arg3); //0x1fc
    UCHAR (*HalClearLastBranchRecordStack)();                               //0x200
    LONG (*HalConfigureLastBranchRecord)(ULONG arg1, ULONG arg2);           //0x204
    UCHAR (*HalGetLastBranchInformation)(ULONG* arg1, ULONG* arg2);         //0x208
    VOID (*HalResumeLastBranchRecord)(UCHAR arg1);                          //0x20c
    LONG (*HalStartLastBranchRecord)(ULONG arg1, ULONG* arg2);              //0x210
    LONG (*HalStopLastBranchRecord)(ULONG arg1);                            //0x214
    LONG (*HalIommuBlockDevice)(VOID* arg1);                                //0x218
    LONG (*HalIommuUnblockDevice)(struct _EXT_IOMMU_DEVICE_ID* arg1, VOID** arg2); //0x21c
    LONG (*HalGetIommuInterface)(ULONG arg1, struct _DMA_IOMMU_INTERFACE* arg2); //0x220
    LONG (*HalRequestGenericErrorRecovery)(VOID* arg1, ULONG* arg2);        //0x224
    LONG (*HalTimerQueryHostPerformanceCounter)(ULONGLONG* arg1);           //0x228
    LONG (*HalTopologyQueryProcessorRelationships)(ULONG arg1, ULONG arg2, UCHAR* arg3, UCHAR* arg4, UCHAR* arg5, ULONG* arg6, ULONG* arg7); //0x22c
    VOID (*HalInitPlatformDebugTriggers)();                                 //0x230
    VOID (*HalRunPlatformDebugTriggers)(UCHAR arg1);                        //0x234
    VOID* (*HalTimerGetReferencePage)();                                    //0x238
};
