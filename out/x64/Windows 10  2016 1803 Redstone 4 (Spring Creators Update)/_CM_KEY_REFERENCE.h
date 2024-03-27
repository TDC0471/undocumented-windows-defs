#pragma once
/* ------------------ */

#include <_HHIVE.h>

//0x10 bytes (sizeof)
struct _CM_KEY_REFERENCE
{
    ULONG KeyCell;                                                          //0x0
    struct _HHIVE* KeyHive;                                                 //0x8
};
/* Used in */
// _CM_KEY_NODE

