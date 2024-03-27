#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>

//0x48 bytes (sizeof)
struct _OBJECT_CREATE_INFORMATION
{
    ULONG Attributes;                                                       //0x0
    VOID* RootDirectory;                                                    //0x8
    VOID* ParseContext;                                                     //0x10
    CHAR ProbeMode;                                                         //0x18
    ULONG PagedPoolCharge;                                                  //0x1c
    ULONG NonPagedPoolCharge;                                               //0x20
    ULONG SecurityDescriptorCharge;                                         //0x24
    VOID* SecurityDescriptor;                                               //0x28
    struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;                       //0x30
    struct _SECURITY_QUALITY_OF_SERVICE SecurityQualityOfService;           //0x38
};
/* Used in */
// _OBJECT_HEADER

