#pragma once
/* ------------------ */

#include <_WHEA_PCIX_BUS_VALIDATION_BITS.h>
#include <_WHEA_ERROR_STATUS.h>

//0x48 bytes (sizeof)
struct _WHEA_PCIX_BUS_ERROR
{
    struct _WHEA_PCIX_BUS_VALIDATION_BITS ValidationBits;                   //0x0
    struct _WHEA_ERROR_STATUS ErrorStatus;                                  //0x8
    USHORT ErrorType;                                                       //0x10
    USHORT BusId;                                                           //0x12
    ULONG Reserved;                                                         //0x14
    ULONGLONG BusAddress;                                                   //0x18
    ULONGLONG BusData;                                                      //0x20
    ULONGLONG BusCommand;                                                   //0x28
    ULONGLONG BusRequestorId;                                               //0x30
    ULONGLONG BusCompleterId;                                               //0x38
    ULONGLONG TargetId;                                                     //0x40
};
/* Used in */
// _WHEA_ERROR_PACKET

