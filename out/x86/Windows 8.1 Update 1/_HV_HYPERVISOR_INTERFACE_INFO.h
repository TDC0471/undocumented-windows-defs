#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HV_HYPERVISOR_INTERFACE_INFO
{
    ULONG Interface;                                                        //0x0
    ULONG ReservedEbx;                                                      //0x4
    ULONG ReservedEcx;                                                      //0x8
    ULONG ReservedEdx;                                                      //0xc
};
/* Used in */
// _HV_CPUID_RESULT

