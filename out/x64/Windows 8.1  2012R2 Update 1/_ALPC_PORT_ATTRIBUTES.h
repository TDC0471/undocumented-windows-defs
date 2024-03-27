#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>

//0x48 bytes (sizeof)
struct _ALPC_PORT_ATTRIBUTES
{
    ULONG Flags;                                                            //0x0
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;                        //0x4
    ULONGLONG MaxMessageLength;                                             //0x10
    ULONGLONG MemoryBandwidth;                                              //0x18
    ULONGLONG MaxPoolUsage;                                                 //0x20
    ULONGLONG MaxSectionSize;                                               //0x28
    ULONGLONG MaxViewSize;                                                  //0x30
    ULONGLONG MaxTotalSectionSize;                                          //0x38
    ULONG DupObjectTypes;                                                   //0x40
    ULONG Reserved;                                                         //0x44
};
/* Used in */
// _ALPC_PORT

