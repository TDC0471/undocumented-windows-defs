#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct wil_details_VariantProperties
{
    ULONG enabledState:2;                                                   //0x0
    ULONG isVariant:1;                                                      //0x0
    ULONG queuedForReporting:1;                                             //0x0
    ULONG hasNotificationState:2;                                           //0x0
    ULONG recordedDeviceUsage:1;                                            //0x0
    ULONG variant:6;                                                        //0x0
    ULONG unused:19;                                                        //0x0
};
/* Used in */
// wil_details_FeaturePropertyCache

