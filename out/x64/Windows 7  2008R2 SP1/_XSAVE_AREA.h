#pragma once
/* ------------------ */

#include <_XSAVE_FORMAT.h>
#include <_XSAVE_AREA_HEADER.h>

//0x240 bytes (sizeof)
struct _XSAVE_AREA
{
    struct _XSAVE_FORMAT LegacyState;                                       //0x0
    struct _XSAVE_AREA_HEADER Header;                                       //0x200
};
/* Used in */
// _KPRCB
// _XSTATE_CONTEXT

