#pragma once
/* ------------------ */

#include <_WHEA_NOTIFICATION_DESCRIPTOR.h>
#include <_WHEA_XPF_MC_BANK_DESCRIPTOR.h>

//0x3a4 bytes (sizeof)
struct _WHEA_XPF_CMC_DESCRIPTOR
{
    USHORT Type;                                                            //0x0
    UCHAR Enabled;                                                          //0x2
    UCHAR NumberOfBanks;                                                    //0x3
    ULONG Reserved;                                                         //0x4
    struct _WHEA_NOTIFICATION_DESCRIPTOR Notify;                            //0x8
    struct _WHEA_XPF_MC_BANK_DESCRIPTOR Banks[32];                          //0x24
};
/* Used in */
// _WHEA_ERROR_SOURCE_DESCRIPTOR

