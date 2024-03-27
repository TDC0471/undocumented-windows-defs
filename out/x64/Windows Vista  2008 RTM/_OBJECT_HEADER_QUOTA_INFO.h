#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x20 bytes (sizeof)
struct _OBJECT_HEADER_QUOTA_INFO
{
    ULONG PagedPoolCharge;                                                  //0x0
    ULONG NonPagedPoolCharge;                                               //0x4
    ULONG SecurityDescriptorCharge;                                         //0x8
    struct _EPROCESS* ExclusiveProcess;                                     //0x10
    ULONGLONG Reserved;                                                     //0x18
};
