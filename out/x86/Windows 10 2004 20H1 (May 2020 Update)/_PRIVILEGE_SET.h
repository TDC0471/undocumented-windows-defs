#pragma once
/* ------------------ */

#include <_LUID_AND_ATTRIBUTES.h>

//0x14 bytes (sizeof)
struct _PRIVILEGE_SET
{
    ULONG PrivilegeCount;                                                   //0x0
    ULONG Control;                                                          //0x4
    struct _LUID_AND_ATTRIBUTES Privilege[1];                               //0x8
};
/* Used in */
// _ACCESS_STATE
// _AUX_ACCESS_DATA

