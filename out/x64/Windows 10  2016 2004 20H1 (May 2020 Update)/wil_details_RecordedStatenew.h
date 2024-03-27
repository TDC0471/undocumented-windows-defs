#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union wil_details_RecordedState
{
    ULONG exchange;                                                         //0x0
    ULONG recordedDeviceUsage:1;                                            //0x0
    ULONG recordedDevicePotential:1;                                        //0x0
    ULONG recordedDeviceOpportunity:1;                                      //0x0
    ULONG recordedDevicePotentialOpportunity:1;                             //0x0
    ULONG recordedVariantDeviceUsage:1;                                     //0x0
    ULONG recordedVariant:6;                                                //0x0
    ULONG unused:21;                                                        //0x0
};
/* Used in */
// wil_details_FeatureReportingCache

