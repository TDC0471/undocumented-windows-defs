#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>

//0x2c bytes (sizeof)
struct _ALPC_PORT_ATTRIBUTES
{
    ULONG Flags;                                                            //0x0
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQos;                        //0x4
    ULONG MaxMessageLength;                                                 //0x10
    ULONG MemoryBandwidth;                                                  //0x14
    ULONG MaxPoolUsage;                                                     //0x18
    ULONG MaxSectionSize;                                                   //0x1c
    ULONG MaxViewSize;                                                      //0x20
    ULONG MaxTotalSectionSize;                                              //0x24
    ULONG DupObjectTypes;                                                   //0x28
};
/* Used in */
// _ALPC_PORT

