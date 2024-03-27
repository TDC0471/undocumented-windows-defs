#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HV_HYPERVISOR_VERSION_INFO
{
    ULONG BuildNumber;                                                      //0x0
    ULONG MinorVersion:16;                                                  //0x4
    ULONG MajorVersion:16;                                                  //0x4
    ULONG ServicePack;                                                      //0x8
    ULONG ServiceNumber:24;                                                 //0xc
    ULONG ServiceBranch:8;                                                  //0xc
};
/* Used in */
// _HV_CPUID_RESULT

