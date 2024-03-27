#pragma once
/* ------------------ */

#include <_GUID.h>

//0x40 bytes (sizeof)
struct tagSWITCH_CONTEXT_DATA
{
    struct _GUID guPlatform;                                                //0x0
    struct _GUID guMinPlatform;                                             //0x10
    ULONG ulElementCount;                                                   //0x20
    USHORT ulContextMinimum;                                                //0x24
    ULONGLONG ullOsMaxVersionTested;                                        //0x28
    struct _GUID guElements[1];                                             //0x30
};
/* Used in */
// tagSWITCH_CONTEXT

