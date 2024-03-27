#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _RTL_FEATURE_CONFIGURATION
{
    ULONG FeatureId;                                                        //0x0
    ULONG Priority:4;                                                       //0x4
    ULONG EnabledState:2;                                                   //0x4
    ULONG IsWexpConfiguration:1;                                            //0x4
    ULONG HasSubscriptions:1;                                               //0x4
    ULONG Variant:6;                                                        //0x4
    ULONG VariantPayloadKind:2;                                             //0x4
    ULONG VariantPayload;                                                   //0x8
};
