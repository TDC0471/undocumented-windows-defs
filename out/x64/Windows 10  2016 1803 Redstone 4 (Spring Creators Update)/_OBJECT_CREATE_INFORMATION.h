#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>

//0x40 bytes (sizeof)
struct _OBJECT_CREATE_INFORMATION
{
    ULONG Attributes;                                                       //0x0
    VOID* RootDirectory;                                                    //0x8
    CHAR ProbeMode;                                                         //0x10
    ULONG PagedPoolCharge;                                                  //0x14
    ULONG NonPagedPoolCharge;                                               //0x18
    ULONG SecurityDescriptorCharge;                                         //0x1c
    VOID* SecurityDescriptor;                                               //0x20
    struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;                       //0x28
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;           //0x30
};
/* Used in */
// _OBJECT_HEADER

