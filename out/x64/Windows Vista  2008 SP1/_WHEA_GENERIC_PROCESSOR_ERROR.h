#pragma once
/* ------------------ */

#include <_WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS.h>

//0xc0 bytes (sizeof)
struct _WHEA_GENERIC_PROCESSOR_ERROR
{
    union _WHEA_GENERIC_PROCESSOR_ERROR_VALIDBITS ValidBits;                //0x0
    UCHAR ProcessorType;                                                    //0x8
    UCHAR InstructionSet;                                                   //0x9
    UCHAR ErrorType;                                                        //0xa
    UCHAR Operation;                                                        //0xb
    UCHAR Flags;                                                            //0xc
    UCHAR Level;                                                            //0xd
    USHORT Reserved;                                                        //0xe
    ULONGLONG CPUVersion;                                                   //0x10
    UCHAR CPUBrandString[128];                                              //0x18
    ULONGLONG ProcessorId;                                                  //0x98
    ULONGLONG TargetAddress;                                                //0xa0
    ULONGLONG RequesterId;                                                  //0xa8
    ULONGLONG ResponderId;                                                  //0xb0
    ULONGLONG InstructionPointer;                                           //0xb8
};
/* Used in */
// _WHEA_ERROR_PACKET

