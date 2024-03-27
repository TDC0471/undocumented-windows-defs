#pragma once
/* ------------------ */

#include <wil_FeatureEnabledState.h>
#include <wil_FeatureVariantPayloadKind.h>

//0x18 bytes (sizeof)
struct wil_FeatureState
{
    enum wil_FeatureEnabledState enabledState;                              //0x0
    UCHAR variant;                                                          //0x4
    enum wil_FeatureVariantPayloadKind payloadKind;                         //0x8
    ULONG payload;                                                          //0xc
    LONG hasNotification;                                                   //0x10
    LONG isVariantConfiguration;                                            //0x14
};
