#pragma once
/* ------------------ */

#include <_CM_NAME_HASH.h>

//0x18 bytes (sizeof)
struct _CM_NAME_HASH
{
    ULONG ConvKey;                                                          //0x0
    struct _CM_NAME_HASH* NextHash;                                         //0x8
    USHORT NameLength;                                                      //0x10
    USHORT Name[1];                                                         //0x12
};
/* Used in */
// _CM_NAME_CONTROL_BLOCK
// _CM_NAME_HASH

