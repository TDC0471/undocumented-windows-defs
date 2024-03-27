#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x40 bytes (sizeof)
struct _FACS
{
    ULONG Signature;                                                        //0x0
    ULONG Length;                                                           //0x4
    ULONG HardwareSignature;                                                //0x8
    ULONG pFirmwareWakingVector;                                            //0xc
    ULONG GlobalLock;                                                       //0x10
    ULONG Flags;                                                            //0x14
    union _LARGE_INTEGER x_FirmwareWakingVector;                            //0x18
    UCHAR version;                                                          //0x20
    UCHAR Reserved[31];                                                     //0x21
};
