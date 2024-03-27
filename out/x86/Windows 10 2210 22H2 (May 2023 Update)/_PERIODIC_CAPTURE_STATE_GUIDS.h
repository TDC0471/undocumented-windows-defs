#pragma once
/* ------------------ */

#include <_GUID.h>

//0x8 bytes (sizeof)
struct _PERIODIC_CAPTURE_STATE_GUIDS
{
    USHORT ProviderCount;                                                   //0x0
    struct _GUID* Providers;                                                //0x4
};
/* Used in */
// PERIODIC_CAPTURE_STATE_CONTEXT

