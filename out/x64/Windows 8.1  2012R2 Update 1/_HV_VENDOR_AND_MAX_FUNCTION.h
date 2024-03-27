#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HV_VENDOR_AND_MAX_FUNCTION
{
    ULONG MaxFunction;                                                      //0x0
    UCHAR VendorName[12];                                                   //0x4
};
/* Used in */
// _HV_CPUID_RESULT

