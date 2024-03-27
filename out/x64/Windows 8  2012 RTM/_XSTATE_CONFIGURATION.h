#pragma once
/* ------------------ */

#include <_XSTATE_FEATURE.h>

//0x218 bytes (sizeof)
struct _XSTATE_CONFIGURATION
{
    ULONGLONG EnabledFeatures;                                              //0x0
    ULONGLONG EnabledVolatileFeatures;                                      //0x8
    ULONG Size;                                                             //0x10
    ULONG OptimizedSave:1;                                                  //0x14
    struct _XSTATE_FEATURE Features[64];                                    //0x18
};
/* Used in */
// _KUSER_SHARED_DATA

