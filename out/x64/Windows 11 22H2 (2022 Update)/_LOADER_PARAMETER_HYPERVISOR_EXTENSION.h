#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION
{
    ULONG InitialHypervisorCrashdumpAreaPageCount;                          //0x0
    ULONG HypervisorCrashdumpAreaPageCount;                                 //0x4
    ULONGLONG InitialHypervisorCrashdumpAreaSpa;                            //0x8
    ULONGLONG HypervisorCrashdumpAreaSpa;                                   //0x10
    ULONGLONG HypervisorLaunchStatus;                                       //0x18
    ULONGLONG HypervisorLaunchStatusArg1;                                   //0x20
    union
    {
        struct
        {
            ULONGLONG HypervisorLaunchStatusArg2;                           //0x28
            ULONGLONG HypervisorLaunchStatusArg3;                           //0x30
            ULONGLONG HypervisorLaunchStatusArg4;                           //0x38
        };
        struct
        {
            VOID* RangeArray;                                               //0x28
            ULONG RangeCount;                                               //0x30
        };
    };
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

