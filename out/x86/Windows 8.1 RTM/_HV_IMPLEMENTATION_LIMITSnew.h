#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HV_IMPLEMENTATION_LIMITS
{
    ULONG MaxVirtualProcessorCount;                                         //0x0
    ULONG MaxLogicalProcessorCount;                                         //0x4
    ULONG MaxInterruptMappingCount;                                         //0x8
    ULONG ReservedEdx;                                                      //0xc
};
/* Used in */
// _HV_CPUID_RESULT

