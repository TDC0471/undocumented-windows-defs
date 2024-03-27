#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION
{
    ULONG HypervisorCrashdumpAreaPageCount;                                 //0x0
    ULONGLONG HypervisorCrashdumpAreaSpa;                                   //0x8
    ULONGLONG HypervisorLaunchStatus;                                       //0x10
    ULONGLONG HypervisorLaunchStatusArg1;                                   //0x18
    ULONGLONG HypervisorLaunchStatusArg2;                                   //0x20
    ULONGLONG HypervisorLaunchStatusArg3;                                   //0x28
    ULONGLONG HypervisorLaunchStatusArg4;                                   //0x30
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

