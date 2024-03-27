#pragma once
/* ------------------ */

#include <_XPF_MCE_FLAGS.h>
#include <_WHEA_XPF_MC_BANK_DESCRIPTOR.h>

//0x398 bytes (sizeof)
struct _WHEA_XPF_MCE_DESCRIPTOR
{
    USHORT Type;                                                            //0x0
    UCHAR Enabled;                                                          //0x2
    UCHAR NumberOfBanks;                                                    //0x3
    union _XPF_MCE_FLAGS Flags;                                             //0x4
    ULONGLONG MCG_Capability;                                               //0x8
    ULONGLONG MCG_GlobalControl;                                            //0x10
    struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];                          //0x18
};
/* Used in */
// _WHEA_ERROR_SOURCE_DESCRIPTOR

