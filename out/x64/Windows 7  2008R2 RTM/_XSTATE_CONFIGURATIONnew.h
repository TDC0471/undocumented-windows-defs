#pragma once
/* ------------------ */

#include <_XSTATE_FEATURE.h>

//0x210 bytes (sizeof)
struct _XSTATE_CONFIGURATION
{
    ULONGLONG EnabledFeatures;                                              //0x0
    ULONG Size;                                                             //0x8
    ULONG OptimizedSave:1;                                                  //0xc
    struct _XSTATE_FEATURE Features[64];                                    //0x10
};
/* Used in */
// _KUSER_SHARED_DATA

