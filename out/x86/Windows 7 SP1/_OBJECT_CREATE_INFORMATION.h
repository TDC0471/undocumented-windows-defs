#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>

//0x2c bytes (sizeof)
struct _OBJECT_CREATE_INFORMATION
{
    ULONG Attributes;                                                       //0x0
    VOID* RootDirectory;                                                    //0x4
    CHAR ProbeMode;                                                         //0x8
    ULONG PagedPoolCharge;                                                  //0xc
    ULONG NonPagedPoolCharge;                                               //0x10
    ULONG SecurityDescriptorCharge;                                         //0x14
    VOID* SecurityDescriptor;                                               //0x18
    struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;                       //0x1c
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;           //0x20
};
/* Used in */
// _OBJECT_HEADER

