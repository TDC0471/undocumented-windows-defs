#pragma once
/* ------------------ */

#include <_CM_KEY_HASH.h>
#include <_HHIVE.h>

//0x10 bytes (sizeof)
struct _CM_KEY_HASH
{
    ULONG ConvKey;                                                          //0x0
    struct _CM_KEY_HASH* NextHash;                                          //0x4
    struct _HHIVE* KeyHive;                                                 //0x8
    ULONG KeyCell;                                                          //0xc
};
/* Used in */
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_NAME_CONTROL_BLOCK
