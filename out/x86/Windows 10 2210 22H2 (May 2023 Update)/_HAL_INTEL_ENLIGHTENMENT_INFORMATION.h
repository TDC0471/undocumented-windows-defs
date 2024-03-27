#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_LARGE_INTEGER.h>
#include <_WHEA_RECOVERY_CONTEXT.h>
#include <_KAFFINITY_EX.h>
#include <_HAL_HV_SVM_SYSTEM_CAPABILITIES.h>
#include <_HAL_HV_SVM_DEVICE_CAPABILITIES.h>
#include <_KTB_FLUSH_VA.h>
#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_HAL_HV_DMA_DOMAIN_INFO.h>

//0x100 bytes (sizeof)
struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION
{
    ULONG Enlightenments;                                                   //0x0
    ULONG HypervisorConnected;                                              //0x4
    VOID (*EndOfInterrupt)();                                               //0x8
    VOID (*ApicWriteIcr)(ULONG arg1, ULONG arg2);                           //0xc
    ULONG Reserved0;                                                        //0x10
    ULONG SpinCountMask;                                                    //0x14
    VOID (*LongSpinWait)(ULONG arg1);                                       //0x18
    ULONGLONG (*GetReferenceTime)(ULONG* arg1);                             //0x1c
    LONG (*SetSystemSleepProperty)(ULONG arg1, UCHAR arg2, UCHAR arg3);     //0x20
    LONG (*EnterSleepState)(ULONG arg1);                                    //0x24
    LONG (*NotifyDebugDeviceAvailable)();                                   //0x28
    LONG (*MapDeviceInterrupt)(ULONGLONG arg1, VOID* arg2, struct _GROUP_AFFINITY* arg3, VOID* arg4); //0x2c
    LONG (*UnmapDeviceInterrupt)(ULONGLONG arg1, VOID* arg2);               //0x30
    LONG (*RetargetDeviceInterrupt)(ULONGLONG arg1, VOID* arg2, VOID* arg3, struct _GROUP_AFFINITY* arg4, VOID* arg5); //0x34
    LONG (*SetHpetConfig)(union _LARGE_INTEGER arg1, ULONG arg2, ULONGLONG arg3, UCHAR arg4, VOID* arg5); //0x38
    LONG (*NotifyHpetEnabled)();                                            //0x3c
    LONG (*QueryAssociatedProcessors)(ULONG arg1, ULONG* arg2, ULONG* arg3); //0x40
    LONG (*ReadMultipleMsr)(ULONG arg1, ULONG arg2, ULONG* arg3, ULONGLONG* arg4); //0x44
    LONG (*WriteMultipleMsr)(ULONG arg1, ULONG arg2, ULONG* arg3, ULONGLONG* arg4); //0x48
    LONG (*ReadCpuid)(ULONG arg1, ULONG arg2, ULONG* arg3, ULONG* arg4, ULONG* arg5, ULONG* arg6); //0x4c
    LONG (*LpWritebackInvalidate)(ULONG arg1);                              //0x50
    LONG (*GetMachineCheckContext)(ULONG arg1, ULONG* arg2, ULONGLONG* arg3, ULONG* arg4); //0x54
    LONG (*SuspendPartition)(ULONGLONG arg1);                               //0x58
    LONG (*ResumePartition)(ULONGLONG arg1);                                //0x5c
    LONG (*SetSystemMachineCheckProperty)(VOID* arg1);                      //0x60
    LONG (*WheaErrorNotification)(struct _WHEA_RECOVERY_CONTEXT* arg1, UCHAR arg2, UCHAR arg3); //0x64
    ULONG (*GetProcessorIndexFromVpIndex)(ULONG arg1);                      //0x68
    LONG (*SyntheticClusterIpi)(struct _KAFFINITY_EX* arg1, ULONG arg2);    //0x6c
    UCHAR (*VpStartEnabled)();                                              //0x70
    LONG (*StartVirtualProcessor)(ULONG arg1, VOID* arg2);                  //0x74
    LONG (*GetVpIndexFromApicId)(ULONG arg1, ULONG* arg2);                  //0x78
    LONG (*IumAccessPciDevice)(UCHAR arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, VOID* arg8); //0x7c
    ULONG (*IumEfiRuntimeService)(ULONG arg1, VOID* arg2, ULONGLONG arg3, ULONGLONG* arg4); //0x80
    VOID (*SvmGetSystemCapabilities)(struct _HAL_HV_SVM_SYSTEM_CAPABILITIES* arg1); //0x84
    LONG (*SvmGetDeviceCapabilities)(ULONG arg1, struct _HAL_HV_SVM_DEVICE_CAPABILITIES* arg2); //0x88
    LONG (*SvmCreatePasidSpace)(ULONG arg1, ULONG arg2);                    //0x8c
    LONG (*SvmSetPasidAddressSpace)(ULONG arg1, ULONG arg2, ULONGLONG arg3); //0x90
    VOID (*SvmFlushPasid)(ULONG arg1, ULONG arg2, ULONG arg3, struct _KTB_FLUSH_VA* arg4); //0x94
    LONG (*SvmAttachPasidSpace)(ULONG arg1, ULONG arg2, ULONG arg3, ULONG arg4); //0x98
    LONG (*SvmDetachPasidSpace)(ULONG arg1);                                //0x9c
    LONG (*SvmEnablePasid)(ULONG arg1, ULONG arg2);                         //0xa0
    LONG (*SvmDisablePasid)(ULONG arg1, ULONG arg2);                        //0xa4
    LONG (*SvmAcknowledgePageRequest)(ULONG arg1, VOID* arg2, ULONG* arg3); //0xa8
    LONG (*SvmCreatePrQueue)(ULONG arg1, ULONG arg2, union _LARGE_INTEGER arg3, ULONG arg4, ULONG arg5); //0xac
    LONG (*SvmDeletePrQueue)(ULONG arg1);                                   //0xb0
    LONG (*SvmClearPrqStalled)(ULONG arg1);                                 //0xb4
    LONG (*SvmSetDeviceEnabled)(ULONG arg1, UCHAR arg2);                    //0xb8
    LONG (*HvDebuggerPowerHandler)(UCHAR arg1);                             //0xbc
    LONG (*SetQpcBias)(ULONGLONG arg1);                                     //0xc0
    ULONGLONG (*GetQpcBias)();                                              //0xc4
    LONG (*RegisterDeviceId)(struct _EXT_IOMMU_DEVICE_ID* arg1, ULONGLONG arg2); //0xc8
    LONG (*UnregisterDeviceId)(ULONGLONG arg1);                             //0xcc
    LONG (*AllocateDeviceDomain)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1);     //0xd0
    LONG (*AttachDeviceDomain)(struct _EXT_IOMMU_DEVICE_ID* arg1, struct _HAL_HV_DMA_DOMAIN_INFO* arg2); //0xd4
    LONG (*DetachDeviceDomain)(ULONGLONG arg1);                             //0xd8
    LONG (*DeleteDeviceDomain)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1);       //0xdc
    LONG (*MapDeviceLogicalRange)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONG arg2, ULONGLONG arg3, ULONG* arg4, ULONGLONG* arg5, UCHAR arg6); //0xe0
    LONG (*UnmapDeviceLogicalRange)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONGLONG arg2, ULONGLONG* arg3); //0xe4
    LONG (*MapDeviceSparsePages)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONG arg2, ULONG* arg3, ULONGLONG* arg4); //0xe8
    LONG (*UnmapDeviceSparsePages)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONG* arg2, ULONGLONG* arg3); //0xec
    LONG (*GetDmaGuardEnabled)(UCHAR* arg1);                                //0xf0
    LONG (*UpdateMicrocode)(VOID* arg1, ULONG arg2);                        //0xf4
    LONG (*GetSintMessage)(UCHAR arg1, VOID** arg2);                        //0xf8
    LONG (*RestoreTime)(ULONG arg1, ULONGLONG arg2, ULONGLONG arg3);        //0xfc
};
/* Used in */
// HAL_PRIVATE_DISPATCH

