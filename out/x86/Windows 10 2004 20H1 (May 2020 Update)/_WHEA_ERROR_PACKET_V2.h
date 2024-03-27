#pragma once
/* ------------------ */

#include <_WHEA_ERROR_PACKET_FLAGS.h>
#include <_WHEA_ERROR_TYPE.h>
#include <_WHEA_ERROR_SEVERITY.h>
#include <_WHEA_ERROR_SOURCE_TYPE.h>
#include <_GUID.h>
#include <_WHEA_ERROR_PACKET_DATA_FORMAT.h>

//0x50 bytes (sizeof)
struct _WHEA_ERROR_PACKET_V2
{
    ULONG Signature;                                                        //0x0
    ULONG Version;                                                          //0x4
    ULONG Length;                                                           //0x8
    union _WHEA_ERROR_PACKET_FLAGS Flags;                                   //0xc
    enum _WHEA_ERROR_TYPE ErrorType;                                        //0x10
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;                                //0x14
    ULONG ErrorSourceId;                                                    //0x18
    enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;                           //0x1c
    struct _GUID NotifyType;                                                //0x20
    ULONGLONG Context;                                                      //0x30
    enum _WHEA_ERROR_PACKET_DATA_FORMAT DataFormat;                         //0x38
    ULONG Reserved1;                                                        //0x3c
    ULONG DataOffset;                                                       //0x40
    ULONG DataLength;                                                       //0x44
    ULONG PshedDataOffset;                                                  //0x48
    ULONG PshedDataLength;                                                  //0x4c
};
