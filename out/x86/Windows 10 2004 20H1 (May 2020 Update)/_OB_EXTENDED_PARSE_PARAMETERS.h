#pragma once
/* ------------------ */

#include <_EJOB.h>

//0xc bytes (sizeof)
struct _OB_EXTENDED_PARSE_PARAMETERS
{
    USHORT Length;                                                          //0x0
    ULONG RestrictedAccessMask;                                             //0x4
    struct _EJOB* Silo;                                                     //0x8
};
/* Used in */
// _OBJECT_TYPE_INITIALIZER

