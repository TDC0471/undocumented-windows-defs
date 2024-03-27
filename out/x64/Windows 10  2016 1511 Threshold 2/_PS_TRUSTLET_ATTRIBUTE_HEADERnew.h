#pragma once
/* ------------------ */

#include <_PS_TRUSTLET_ATTRIBUTE_TYPE.h>

//0x8 bytes (sizeof)
struct _PS_TRUSTLET_ATTRIBUTE_HEADER
{
    struct _PS_TRUSTLET_ATTRIBUTE_TYPE AttributeType;                       //0x0
    ULONG InstanceNumber:8;                                                 //0x4
    ULONG Reserved:24;                                                      //0x4
};
/* Used in */
// _PS_TRUSTLET_ATTRIBUTE_DATA

