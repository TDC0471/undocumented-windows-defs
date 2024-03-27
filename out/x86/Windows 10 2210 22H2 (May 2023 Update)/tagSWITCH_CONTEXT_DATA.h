#pragma once
/* ------------------ */

#include <_GUID.h>

//0x340 bytes (sizeof)
struct tagSWITCH_CONTEXT_DATA
{
    ULONGLONG ullOsMaxVersionTested;                                        //0x0
    ULONG ulTargetPlatform;                                                 //0x8
    ULONGLONG ullContextMinimum;                                            //0x10
    struct _GUID guPlatform;                                                //0x18
    struct _GUID guMinPlatform;                                             //0x28
    ULONG ulContextSource;                                                  //0x38
    ULONG ulElementCount;                                                   //0x3c
    struct _GUID guElements[48];                                            //0x40
};
/* Used in */
// tagSWITCH_CONTEXT

