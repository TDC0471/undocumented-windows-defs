#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>

//0x18 bytes (sizeof)
struct _OBJECT_ATTRIBUTES
{
    ULONG Length;                                                           //0x0
    VOID* RootDirectory;                                                    //0x4
    struct _UNICODE_STRING* ObjectName;                                     //0x8
    ULONG Attributes;                                                       //0xc
    VOID* SecurityDescriptor;                                               //0x10
    VOID* SecurityQualityOfService;                                         //0x14
};
/* Used in */
// _OPEN_PACKET

