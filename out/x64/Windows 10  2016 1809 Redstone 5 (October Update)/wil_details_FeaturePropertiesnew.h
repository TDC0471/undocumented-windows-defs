#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct wil_details_FeatureProperties
{
    ULONG enabledState:2;                                                   //0x0
    ULONG isVariant:1;                                                      //0x0
    ULONG queuedForReporting:1;                                             //0x0
    ULONG hasNotificationState:2;                                           //0x0
    ULONG usageCount:9;                                                     //0x0
    ULONG usageCountRepresentsPotential:1;                                  //0x0
    ULONG reportedDeviceUsage:1;                                            //0x0
    ULONG reportedDevicePotential:1;                                        //0x0
    ULONG reportedDeviceOpportunity:1;                                      //0x0
    ULONG reportedDevicePotentialOpportunity:1;                             //0x0
    ULONG recordedDeviceUsage:1;                                            //0x0
    ULONG recordedDevicePotential:1;                                        //0x0
    ULONG recordedDeviceOpportunity:1;                                      //0x0
    ULONG recordedDevicePotentialOpportunity:1;                             //0x0
    ULONG opportunityCount:7;                                               //0x0
    ULONG opportunityCountRepresentsPotential:1;                            //0x0
};
/* Used in */
// wil_details_FeaturePropertyCache

