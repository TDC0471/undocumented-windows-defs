#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>

//0x30 bytes (sizeof)
struct _OBJECT_CREATE_INFORMATION
{
    ULONG Attributes;                                                       //0x0
    VOID* RootDirectory;                                                    //0x4
    VOID* ParseContext;                                                     //0x8
    CHAR ProbeMode;                                                         //0xc
    ULONG PagedPoolCharge;                                                  //0x10
    ULONG NonPagedPoolCharge;                                               //0x14
    ULONG SecurityDescriptorCharge;                                         //0x18
    VOID* SecurityDescriptor;                                               //0x1c
    struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;                       //0x20
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;           //0x24
};
/* Used in */
// _OBJECT_HEADER

