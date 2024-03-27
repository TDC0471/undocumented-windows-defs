#pragma once
/* ------------------ */

#include <_GUID.h>

//0x48 bytes (sizeof)
struct tagSWITCH_CONTEXT_DATA
{
    ULONGLONG ullOsMaxVersionTested;                                        //0x0
    ULONGLONG ullContextMinimum;                                            //0x8
    struct _GUID guPlatform;                                                //0x10
    struct _GUID guMinPlatform;                                             //0x20
    ULONG ulContextSource;                                                  //0x30
    ULONG ulElementCount;                                                   //0x34
    struct _GUID guElements[1];                                             //0x38
};
/* Used in */
// tagSWITCH_CONTEXT

