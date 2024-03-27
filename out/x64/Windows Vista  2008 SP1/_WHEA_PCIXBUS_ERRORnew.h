#pragma once
/* ------------------ */

#include <_WHEA_PCIXBUS_ERROR_VALIDBITS.h>
#include <_WHEA_ERROR_STATUS.h>
#include <_WHEA_PCIXBUS_ID.h>
#include <_WHEA_PCIXBUS_COMMAND.h>

//0x48 bytes (sizeof)
struct _WHEA_PCIXBUS_ERROR
{
    union _WHEA_PCIXBUS_ERROR_VALIDBITS ValidBits;                          //0x0
    union _WHEA_ERROR_STATUS ErrorStatus;                                   //0x8
    USHORT ErrorType;                                                       //0x10
    union _WHEA_PCIXBUS_ID BusId;                                           //0x12
    ULONG Reserved;                                                         //0x14
    ULONGLONG BusAddress;                                                   //0x18
    ULONGLONG BusData;                                                      //0x20
    union _WHEA_PCIXBUS_COMMAND BusCommand;                                 //0x28
    ULONGLONG RequesterId;                                                  //0x30
    ULONGLONG CompleterId;                                                  //0x38
    ULONGLONG TargetId;                                                     //0x40
};
/* Used in */
// _WHEA_ERROR_PACKET

