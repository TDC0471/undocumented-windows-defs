#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union wil_details_ReportedState
{
    ULONG exchange;                                                         //0x0
    ULONG queuedForReporting:1;                                             //0x0
    ULONG reportedDeviceUsage:1;                                            //0x0
    ULONG reportedDevicePotential:1;                                        //0x0
    ULONG reportedDeviceOpportunity:1;                                      //0x0
    ULONG reportedDevicePotentialOpportunity:1;                             //0x0
    ULONG usageCount:9;                                                     //0x0
    ULONG usageCountRepresentsPotential:1;                                  //0x0
    ULONG opportunityCount:7;                                               //0x0
    ULONG opportunityCountRepresentsPotential:1;                            //0x0
    ULONG unused:9;                                                         //0x0
};
/* Used in */
// wil_details_FeatureReportingCache

