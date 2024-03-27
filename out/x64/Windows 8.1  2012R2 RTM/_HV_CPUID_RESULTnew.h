#pragma once
/* ------------------ */

#include <_HV_VENDOR_AND_MAX_FUNCTION.h>
#include <_HV_HYPERVISOR_INTERFACE_INFO.h>
#include <_HV_HYPERVISOR_VERSION_INFO.h>
#include <_HV_HYPERVISOR_FEATURES.h>
#include <_HV_ENLIGHTENMENT_INFORMATION.h>
#include <_HV_IMPLEMENTATION_LIMITS.h>
#include <_HV_HYPERVISOR_HARDWARE_FEATURES.h>

//0x10 bytes (sizeof)
union _HV_CPUID_RESULT
{
    struct
    {
        ULONG Eax;                                                          //0x0
        ULONG Ebx;                                                          //0x4
    };
    struct
    {
        ULONG Ecx;                                                          //0x8
        ULONG Edx;                                                          //0xc
    };
    ULONG AsUINT32[4];                                                      //0x0
    struct
    {
        ULONG ReservedEax;                                                  //0x0
        ULONG ReservedEbx:24;                                               //0x4
        ULONG InitialApicId:8;                                              //0x4
        ULONG ReservedEcx:31;                                               //0x8
        ULONG HypervisorPresent:1;                                          //0x8
        ULONG ReservedEdx;                                                  //0xc
    } VersionAndFeatures;                                                   //0x0
    struct _HV_VENDOR_AND_MAX_FUNCTION HvVendorAndMaxFunction;              //0x0
    struct _HV_HYPERVISOR_INTERFACE_INFO HvInterface;                       //0x0
    struct _HV_HYPERVISOR_VERSION_INFO MsHvVersion;                         //0x0
    struct _HV_HYPERVISOR_FEATURES MsHvFeatures;                            //0x0
    struct _HV_ENLIGHTENMENT_INFORMATION MsHvEnlightenmentInformation;      //0x0
    struct _HV_IMPLEMENTATION_LIMITS MsHvImplementationLimits;              //0x0
    struct _HV_HYPERVISOR_HARDWARE_FEATURES MsHvHardwareFeatures;           //0x0
};
