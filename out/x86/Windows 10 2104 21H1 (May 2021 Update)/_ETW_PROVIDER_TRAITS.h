#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>

//0x14 bytes (sizeof)
struct _ETW_PROVIDER_TRAITS
{
    struct _RTL_BALANCED_NODE Node;                                         //0x0
    ULONG ReferenceCount;                                                   //0xc
    UCHAR Traits[1];                                                        //0x10
};
/* Used in */
// _ETW_REG_ENTRY

