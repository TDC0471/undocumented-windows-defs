#pragma once
/* ------------------ */

#include <_GUID.h>

//0x8 bytes (sizeof)
struct _DISALLOWED_GUIDS
{
    USHORT Count;                                                           //0x0
    struct _GUID* Guids;                                                    //0x4
};
/* Used in */
// _WMI_LOGGER_CONTEXT

