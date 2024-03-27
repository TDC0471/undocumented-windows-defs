#pragma once
/* ------------------ */

#include <_XPF_MC_BANK_FLAGS.h>

//0x1c bytes (sizeof)
struct _WHEA_XPF_MC_BANK_DESCRIPTOR
{
    UCHAR BankNumber;                                                       //0x0
    UCHAR ClearOnInitialization;                                            //0x1
    UCHAR StatusDataFormat;                                                 //0x2
    union _XPF_MC_BANK_FLAGS Flags;                                         //0x3
    ULONG ControlMsr;                                                       //0x4
    ULONG StatusMsr;                                                        //0x8
    ULONG AddressMsr;                                                       //0xc
    ULONG MiscMsr;                                                          //0x10
    ULONGLONG ControlData;                                                  //0x14
};
/* Used in */
// _WHEA_XPF_CMC_DESCRIPTOR
// _WHEA_XPF_MCE_DESCRIPTOR

