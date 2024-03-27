#pragma once
/* ------------------ */

#include <_WHEA_PCIXDEVICE_ERROR_VALIDBITS.h>
#include <_WHEA_ERROR_STATUS.h>
#include <_WHEA_PCIXDEVICE_ID.h>
#include <WHEA_PCIXDEVICE_REGISTER_PAIR.h>

//0x68 bytes (sizeof)
struct _WHEA_PCIXDEVICE_ERROR
{
    union _WHEA_PCIXDEVICE_ERROR_VALIDBITS ValidBits;                       //0x0
    union _WHEA_ERROR_STATUS ErrorStatus;                                   //0x8
    struct _WHEA_PCIXDEVICE_ID IdInfo;                                      //0x10
    ULONG MemoryNumber;                                                     //0x20
    ULONG IoNumber;                                                         //0x24
    struct WHEA_PCIXDEVICE_REGISTER_PAIR RegisterDataPairs[4];              //0x28
};
/* Used in */
// _WHEA_ERROR_PACKET

