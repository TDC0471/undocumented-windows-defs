#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _HAL_HV_SVM_DEVICE_CAPABILITIES
{
    ULONG SvmSupported:1;                                                   //0x0
    ULONG PciExecute:1;                                                     //0x0
    ULONG NoExecute:1;                                                      //0x0
    ULONG Reserved:28;                                                      //0x0
    ULONG OverflowPossible:1;                                               //0x0
    ULONG PasidCount;                                                       //0x4
    ULONG IommuIndex;                                                       //0x8
};
/* Used in */
// _HAL_INTEL_ENLIGHTENMENT_INFORMATION

