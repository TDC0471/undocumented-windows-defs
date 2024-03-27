#pragma once
/* ------------------ */

#include <_GROUP_AFFINITY.h>
#include <_WHEA_RECOVERY_CONTEXT.h>
#include <_KAFFINITY_EX.h>
#include <_HAL_HV_SYSTEM_PASID_CAPABILITIES.h>
#include <_EXT_IOMMU_DEVICE_ID.h>
#include <_KTB_FLUSH_VA.h>
#include <_LARGE_INTEGER.h>
#include <_HAL_HV_DMA_CREATE_DOMAIN_INFO.h>
#include <_HAL_HV_DMA_DOMAIN_INFO.h>
#include <_HAL_HV_DMA_DOMAIN_CONFIG.h>
#include <_HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS.h>

//0x248 bytes (sizeof)
struct _HAL_INTEL_ENLIGHTENMENT_INFORMATION
{
    ULONG Enlightenments;                                                   //0x0
    ULONG HypervisorConnected;                                              //0x4
    VOID (*EndOfInterrupt)();                                               //0x8
    VOID (*ApicWriteIcr)(ULONG arg1, ULONG arg2);                           //0x10
    ULONG Reserved0;                                                        //0x18
    ULONG SpinCountMask;                                                    //0x1c
    VOID (*LongSpinWait)(ULONG arg1);                                       //0x20
    ULONGLONG (*GetReferenceTime)(ULONG* arg1);                             //0x28
    LONG (*SetSystemSleepProperty)(ULONG arg1, UCHAR arg2, UCHAR arg3);     //0x30
    LONG (*EnterSleepState)(ULONG arg1);                                    //0x38
    LONG (*NotifyDebugDeviceAvailable)();                                   //0x40
    LONG (*MapDeviceInterrupt)(ULONGLONG arg1, VOID* arg2, struct _GROUP_AFFINITY* arg3, VOID* arg4); //0x48
    LONG (*UnmapDeviceInterrupt)(ULONGLONG arg1, VOID* arg2);               //0x50
    LONG (*RetargetDeviceInterrupt)(ULONGLONG arg1, VOID* arg2, VOID* arg3, struct _GROUP_AFFINITY* arg4, VOID* arg5); //0x58
    LONG (*SetHpetConfig)(ULONG arg1, ULONGLONG arg2, UCHAR arg3, VOID* arg4); //0x60
    LONG (*NotifyHpetEnabled)();                                            //0x68
    LONG (*QueryAssociatedProcessors)(ULONG arg1, ULONG* arg2, ULONG* arg3); //0x70
    LONG (*ReadMultipleMsr)(ULONG arg1, ULONG arg2, ULONG* arg3, ULONGLONG* arg4); //0x78
    LONG (*WriteMultipleMsr)(ULONG arg1, ULONG arg2, ULONG* arg3, ULONGLONG* arg4); //0x80
    LONG (*ReadCpuid)(ULONG arg1, ULONG arg2, ULONG* arg3, ULONG* arg4, ULONG* arg5, ULONG* arg6); //0x88
    LONG (*LpWritebackInvalidate)(ULONG arg1);                              //0x90
    LONG (*GetMachineCheckContext)(ULONG arg1, ULONG* arg2, ULONGLONG* arg3, ULONG* arg4); //0x98
    LONG (*SuspendPartition)(ULONGLONG arg1);                               //0xa0
    LONG (*ResumePartition)(ULONGLONG arg1);                                //0xa8
    LONG (*SetSystemMachineCheckProperty)(VOID* arg1);                      //0xb0
    LONG (*WheaErrorNotification)(struct _WHEA_RECOVERY_CONTEXT* arg1, UCHAR arg2, UCHAR arg3); //0xb8
    ULONG (*GetProcessorIndexFromVpIndex)(ULONG arg1);                      //0xc0
    LONG (*SyntheticClusterIpi)(struct _KAFFINITY_EX* arg1, ULONG arg2);    //0xc8
    UCHAR (*VpStartEnabled)();                                              //0xd0
    LONG (*StartVirtualProcessor)(ULONG arg1, VOID* arg2);                  //0xd8
    LONG (*GetVpIndexFromApicId)(ULONG arg1, ULONG* arg2);                  //0xe0
    LONG (*IumAccessPciDevice)(UCHAR arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7, VOID* arg8); //0xe8
    ULONGLONG (*IumEfiRuntimeService)(ULONG arg1, VOID* arg2, ULONGLONG arg3, ULONGLONG* arg4); //0xf0
    VOID (*GetSystemPasidCapabilities)(struct _HAL_HV_SYSTEM_PASID_CAPABILITIES* arg1); //0xf8
    LONG (*GetDeviceCapabilities)(struct _EXT_IOMMU_DEVICE_ID* arg1, VOID* arg2); //0x100
    LONG (*CreatePasidSpace)(ULONG arg1, ULONG arg2);                       //0x108
    LONG (*SetPasidAddressSpace)(ULONG arg1, ULONG arg2, ULONGLONG arg3);   //0x110
    VOID (*FlushPasid)(ULONG arg1, ULONG arg2, ULONG arg3, struct _KTB_FLUSH_VA* arg4, UCHAR arg5); //0x118
    LONG (*AttachPasidSpace)(ULONGLONG arg1, ULONG arg2);                   //0x120
    LONG (*DetachPasidSpace)(ULONGLONG arg1);                               //0x128
    LONG (*EnablePasid)(ULONGLONG arg1, ULONG arg2);                        //0x130
    LONG (*DisablePasid)(ULONGLONG arg1, ULONG arg2);                       //0x138
    LONG (*AcknowledgePageRequest)(ULONG arg1, VOID* arg2, ULONG* arg3);    //0x140
    LONG (*CreatePrQueue)(ULONG arg1, ULONG arg2, union _LARGE_INTEGER arg3, ULONG arg4, ULONG arg5); //0x148
    LONG (*DeletePrQueue)(ULONG arg1);                                      //0x150
    LONG (*ClearPrqStalled)(ULONG arg1);                                    //0x158
    LONG (*SetDeviceDmaEnabled)(struct _EXT_IOMMU_DEVICE_ID* arg1, UCHAR arg2); //0x160
    LONG (*SetDeviceCapabilities)(ULONGLONG arg1, ULONG arg2, ULONG arg3);  //0x168
    LONG (*AttachPrQueue)(ULONGLONG arg1, ULONG arg2);                      //0x170
    LONG (*DetachPrQueue)(ULONGLONG arg1);                                  //0x178
    LONG (*HvDebuggerPowerHandler)(UCHAR arg1);                             //0x180
    LONG (*SetQpcBias)(ULONGLONG arg1);                                     //0x188
    ULONGLONG (*GetQpcBias)();                                              //0x190
    LONG (*RegisterDeviceId)(struct _EXT_IOMMU_DEVICE_ID* arg1, ULONGLONG arg2); //0x198
    LONG (*UnregisterDeviceId)(ULONGLONG arg1);                             //0x1a0
    LONG (*AllocateDeviceDomain)(struct _HAL_HV_DMA_CREATE_DOMAIN_INFO* arg1); //0x1a8
    LONG (*AttachDeviceDomain)(ULONGLONG arg1, struct _HAL_HV_DMA_DOMAIN_INFO* arg2); //0x1b0
    LONG (*DetachDeviceDomain)(ULONGLONG arg1);                             //0x1b8
    LONG (*DeleteDeviceDomain)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1);       //0x1c0
    LONG (*MapDeviceLogicalRange)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONG arg2, ULONGLONG arg3, ULONGLONG* arg4, ULONGLONG* arg5, UCHAR arg6); //0x1c8
    LONG (*UnmapDeviceLogicalRange)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONGLONG arg2, ULONGLONG* arg3); //0x1d0
    LONG (*MapDeviceSparsePages)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONG arg2, ULONGLONG* arg3, ULONGLONG* arg4); //0x1d8
    LONG (*UnmapDeviceSparsePages)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONGLONG* arg2, ULONGLONG* arg3); //0x1e0
    LONG (*GetDmaGuardEnabled)(UCHAR* arg1);                                //0x1e8
    LONG (*UpdateMicrocode)(VOID* arg1, ULONG arg2, UCHAR arg3);            //0x1f0
    LONG (*GetSintMessage)(UCHAR arg1, VOID** arg2);                        //0x1f8
    LONG (*RestoreTime)(ULONG arg1, ULONGLONG arg2, ULONGLONG arg3);        //0x200
    LONG (*SetRootFaultReportingReady)();                                   //0x208
    LONG (*ConfigureDeviceDomain)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, struct _HAL_HV_DMA_DOMAIN_CONFIG* arg2); //0x210
    LONG (*UnblockDefaultDma)();                                            //0x218
    LONG (*FlushDeviceDomain)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1);        //0x220
    LONG (*FlushDeviceDomainVaList)(struct _HAL_HV_DMA_DOMAIN_INFO* arg1, ULONG arg2, struct _KTB_FLUSH_VA* arg3); //0x228
    LONG (*GetHybridPassthroughReservedRegions)(struct _HAL_HV_DMA_HYBRID_PASSTHROUGH_RESERVED_REGIONS* arg1); //0x230
    LONG (*ReserveDeviceDomainAttachment)(ULONGLONG arg1, struct _HAL_HV_DMA_DOMAIN_INFO* arg2); //0x238
    LONG (*UnreserveDeviceDomainAttachment)(ULONGLONG arg1);                //0x240
};
/* Used in */
// HAL_PRIVATE_DISPATCH

