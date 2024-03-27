#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x20 bytes (sizeof)
struct _ETW_PROVIDER_TRAITS
{
    struct _RTL_BALANCED_NODE Node;                                         //0x0
    ULONG ReferenceCount;                                                   //0x18
    UCHAR Traits[1];                                                        //0x1c
};
/* Used in */
// _ETW_REG_ENTRY

