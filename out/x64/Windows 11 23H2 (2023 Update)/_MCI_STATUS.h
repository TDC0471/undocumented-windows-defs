#pragma once
/* ------------------ */

#include <_MCI_STATUS_BITS_COMMON.h>
#include <_MCI_STATUS_AMD_BITS.h>
#include <_MCI_STATUS_INTEL_BITS.h>

//0x8 bytes (sizeof)
union _MCI_STATUS
{
    struct _MCI_STATUS_BITS_COMMON CommonBits;                              //0x0
    struct _MCI_STATUS_AMD_BITS AmdBits;                                    //0x0
    struct _MCI_STATUS_INTEL_BITS IntelBits;                                //0x0
    ULONGLONG QuadPart;                                                     //0x0
};
/* Used in */
// _WHEA_XPF_MCA_SECTION

