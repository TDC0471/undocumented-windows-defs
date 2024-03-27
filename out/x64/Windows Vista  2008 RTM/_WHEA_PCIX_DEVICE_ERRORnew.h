#pragma once
/* ------------------ */

#include <_WHEA_PCIX_DEV_VALIDATION_BITS.h>
#include <_WHEA_ERROR_STATUS.h>

//0x68 bytes (sizeof)
struct _WHEA_PCIX_DEVICE_ERROR
{
    struct _WHEA_PCIX_DEV_VALIDATION_BITS ValidationBits;                   //0x0
    struct _WHEA_ERROR_STATUS ErrorStatus;                                  //0x8
    UCHAR IdInfo[16];                                                       //0x10
    ULONG MemoryNumber;                                                     //0x20
    ULONG IoNumber;                                                         //0x24
    UCHAR RegisterDataPairs[64];                                            //0x28
};
/* Used in */
// _WHEA_ERROR_PACKET

