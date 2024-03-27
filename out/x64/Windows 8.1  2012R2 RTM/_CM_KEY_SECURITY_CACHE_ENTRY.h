#pragma once
/* ------------------ */

#include <_CM_KEY_SECURITY_CACHE.h>

//0x10 bytes (sizeof)
struct _CM_KEY_SECURITY_CACHE_ENTRY
{
    ULONG Cell;                                                             //0x0
    struct _CM_KEY_SECURITY_CACHE* CachedSecurity;                          //0x8
};
/* Used in */
// _CMHIVE

