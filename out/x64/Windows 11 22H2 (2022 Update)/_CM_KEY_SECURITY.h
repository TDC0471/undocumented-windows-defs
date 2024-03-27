#pragma once
/* ------------------ */

#include <_SECURITY_DESCRIPTOR_RELATIVE.h>

//0x28 bytes (sizeof)
struct _CM_KEY_SECURITY
{
    USHORT Signature;                                                       //0x0
    USHORT Reserved;                                                        //0x2
    ULONG Flink;                                                            //0x4
    ULONG Blink;                                                            //0x8
    ULONG ReferenceCount;                                                   //0xc
    ULONG DescriptorLength;                                                 //0x10
    struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor;                        //0x14
};
/* Used in */
// _u

