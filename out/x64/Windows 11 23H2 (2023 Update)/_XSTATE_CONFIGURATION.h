#pragma once
/* ------------------ */

#include <_XSTATE_FEATURE.h>

//0x348 bytes (sizeof)
struct _XSTATE_CONFIGURATION
{
    ULONGLONG EnabledFeatures;                                              //0x0
    ULONGLONG EnabledVolatileFeatures;                                      //0x8
    ULONG Size;                                                             //0x10
    union
    {
        ULONG ControlFlags;                                                 //0x14
        struct
        {
            ULONG OptimizedSave:1;                                          //0x14
            ULONG CompactionEnabled:1;                                      //0x14
            ULONG ExtendedFeatureDisable:1;                                 //0x14
        };
    };
    struct _XSTATE_FEATURE Features[64];                                    //0x18
    ULONGLONG EnabledSupervisorFeatures;                                    //0x218
    ULONGLONG AlignedFeatures;                                              //0x220
    ULONG AllFeatureSize;                                                   //0x228
    ULONG AllFeatures[64];                                                  //0x22c
    ULONGLONG EnabledUserVisibleSupervisorFeatures;                         //0x330
    ULONGLONG ExtendedFeatureDisableFeatures;                               //0x338
    ULONG AllNonLargeFeatureSize;                                           //0x340
    ULONG Spare;                                                            //0x344
};
/* Used in */
// _KUSER_SHARED_DATA

