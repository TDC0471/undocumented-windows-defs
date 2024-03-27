#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct wil_details_StagingConfigFeature
{
    ULONG featureId;                                                        //0x0
    ULONG changedInSession:1;                                               //0x4
    ULONG isVariantConfig:1;                                                //0x4
    ULONG unused1:6;                                                        //0x4
    ULONG serviceState:2;                                                   //0x4
    ULONG userState:2;                                                      //0x4
    ULONG testState:2;                                                      //0x4
    ULONG unused2:2;                                                        //0x4
    ULONG unused3:8;                                                        //0x4
    ULONG variant:6;                                                        //0x4
    ULONG payloadKind:2;                                                    //0x4
    ULONG payload;                                                          //0x8
};
/* Used in */
// wil_details_StagingConfig

