#pragma once
/* ------------------ */

#include <_WHEA_ERROR_PACKET_FLAGS.h>
#include <_WHEA_ERROR_TYPE.h>
#include <_WHEA_ERROR_SEVERITY.h>
#include <_WHEA_ERROR_SOURCE_TYPE.h>
#include <_WHEA_GENERIC_PROCESSOR_ERROR.h>
#include <_WHEA_MEMORY_ERROR.h>
#include <_WHEA_NMI_ERROR.h>
#include <_WHEA_PCIEXPRESS_ERROR.h>
#include <_WHEA_PCIXBUS_ERROR.h>
#include <_WHEA_PCIXDEVICE_ERROR.h>
#include <_WHEA_RAW_DATA_FORMAT.h>

//0x119 bytes (sizeof)
struct _WHEA_ERROR_PACKET
{
    ULONG Signature;                                                        //0x0
    union _WHEA_ERROR_PACKET_FLAGS Flags;                                   //0x4
    ULONG Size;                                                             //0x8
    ULONG RawDataLength;                                                    //0xc
    ULONGLONG Reserved1;                                                    //0x10
    ULONGLONG Context;                                                      //0x18
    enum _WHEA_ERROR_TYPE ErrorType;                                        //0x20
    enum _WHEA_ERROR_SEVERITY ErrorSeverity;                                //0x24
    ULONG ErrorSourceId;                                                    //0x28
    enum _WHEA_ERROR_SOURCE_TYPE ErrorSourceType;                           //0x2c
    ULONG Reserved2;                                                        //0x30
    ULONG Version;                                                          //0x34
    ULONGLONG Cpu;                                                          //0x38
    union
    {
        struct _WHEA_GENERIC_PROCESSOR_ERROR ProcessorError;                //0x40
        struct _WHEA_MEMORY_ERROR MemoryError;                              //0x40
        struct _WHEA_NMI_ERROR NmiError;                                    //0x40
        struct _WHEA_PCIEXPRESS_ERROR PciExpressError;                      //0x40
        struct _WHEA_PCIXBUS_ERROR PciXBusError;                            //0x40
        struct _WHEA_PCIXDEVICE_ERROR PciXDeviceError;                      //0x40
    } u;                                                                    //0x40
    enum _WHEA_RAW_DATA_FORMAT RawDataFormat;                               //0x110
    ULONG RawDataOffset;                                                    //0x114
    UCHAR RawData[1];                                                       //0x118
};
