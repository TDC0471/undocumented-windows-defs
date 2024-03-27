#pragma once
/* ------------------ */

#include <_PS_TRUSTLET_ATTRIBUTE_HEADER.h>

//0x10 bytes (sizeof)
struct _PS_TRUSTLET_ATTRIBUTE_DATA
{
    struct _PS_TRUSTLET_ATTRIBUTE_HEADER Header;                            //0x0
    ULONGLONG Data[1];                                                      //0x8
};
/* Used in */
// _PS_TRUSTLET_CREATE_ATTRIBUTES

