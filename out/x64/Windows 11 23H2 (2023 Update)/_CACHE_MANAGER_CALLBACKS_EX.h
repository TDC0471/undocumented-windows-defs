#pragma once
/* ------------------ */

#include <_CACHE_MANAGER_CALLBACK_FUNCTIONS.h>

//0x28 bytes (sizeof)
struct _CACHE_MANAGER_CALLBACKS_EX
{
    USHORT Version;                                                         //0x0
    USHORT Size;                                                            //0x2
    struct _CACHE_MANAGER_CALLBACK_FUNCTIONS Functions;                     //0x8
};
/* Used in */
// _SHARED_CACHE_MAP

