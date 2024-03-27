#pragma once
/* ------------------ */

#include <_LUID.h>

//0xc bytes (sizeof)
struct _LUID_AND_ATTRIBUTES
{
    struct _LUID Luid;                                                      //0x0
    ULONG Attributes;                                                       //0x8
};
/* Used in */
// _INITIAL_PRIVILEGE_SET
// _PRIVILEGE_SET

