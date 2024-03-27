#pragma once
/* ------------------ */

#include <_OB_DUPLICATE_OBJECT_STATE.h>

//0x20 bytes (sizeof)
struct _KALPC_HANDLE_DATA
{
    ULONG Flags;                                                            //0x0
    ULONG ObjectType;                                                       //0x4
    struct _OB_DUPLICATE_OBJECT_STATE DuplicateContext;                     //0x8
};
/* Used in */
// _KALPC_MESSAGE_ATTRIBUTES

