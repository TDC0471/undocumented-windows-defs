#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union wil_details_FeatureStateCache
{
    ULONG exchange;                                                         //0x0
    ULONG stateCached:1;                                                    //0x0
    ULONG hasNotificationCached:1;                                          //0x0
    ULONG variantCached:1;                                                  //0x0
    ULONG effectiveState:1;                                                 //0x0
    ULONG desiredState:1;                                                   //0x0
    ULONG configuredState:2;                                                //0x0
    ULONG needsRefresh:1;                                                   //0x0
    ULONG hasNotification:1;                                                //0x0
    ULONG isWexpConfiguration:1;                                            //0x0
    ULONG variant:6;                                                        //0x0
    struct
    {
        ULONG unused:16;                                                    //0x0
        ULONG payloadId;                                                    //0x4
    };
    ULONGLONG exchange64;                                                   //0x0
};
/* Used in */
// wil_details_FeatureDescriptor

