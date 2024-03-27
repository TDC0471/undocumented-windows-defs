#pragma once
/* ------------------ */

#include <_LUID_AND_ATTRIBUTES.h>

//0x2c bytes (sizeof)
struct _INITIAL_PRIVILEGE_SET
{
    ULONG PrivilegeCount;                                                   //0x0
    ULONG Control;                                                          //0x4
    struct _LUID_AND_ATTRIBUTES Privilege[3];                               //0x8
};
/* Used in */
// _ACCESS_STATE

