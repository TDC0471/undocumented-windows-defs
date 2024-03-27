#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_SECURITY_DESCRIPTOR_RELATIVE.h>

//0x28 bytes (sizeof)
struct _CM_KEY_SECURITY_CACHE
{
    ULONG Cell;                                                             //0x0
    ULONG ConvKey;                                                          //0x4
    struct _LIST_ENTRY List;                                                //0x8
    ULONG DescriptorLength;                                                 //0x10
    struct _SECURITY_DESCRIPTOR_RELATIVE Descriptor;                        //0x14
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_SECURITY_CACHE_ENTRY

