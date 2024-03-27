#pragma once
/* ------------------ */

#include <_CM_NAME_HASH.h>

//0xc bytes (sizeof)
struct _CM_NAME_HASH
{
    ULONG ConvKey;                                                          //0x0
    struct _CM_NAME_HASH* NextHash;                                         //0x4
    USHORT NameLength;                                                      //0x8
    USHORT Name[1];                                                         //0xa
};
/* Used in */
// _CM_NAME_CONTROL_BLOCK
// _CM_NAME_HASH

