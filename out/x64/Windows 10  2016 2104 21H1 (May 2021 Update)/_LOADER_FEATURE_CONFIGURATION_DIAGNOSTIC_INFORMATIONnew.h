#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _LOADER_FEATURE_CONFIGURATION_DIAGNOSTIC_INFORMATION
{
    UCHAR OriginalBootStatus;                                               //0x0
    UCHAR NewBootStatus;                                                    //0x1
    UCHAR ConfigurationLoaded;                                              //0x2
    UCHAR Spare;                                                            //0x3
    union
    {
        ULONG AllFlags;                                                     //0x4
        ULONG LkgSupported:1;                                               //0x4
        ULONG FinalBootBeforeRecovery:1;                                    //0x4
        ULONG ConfigurationComparisonAttempted:1;                           //0x4
        ULONG CurrentConfigurationLoadAttempted:1;                          //0x4
        ULONG LkgConfigurationLoadAttempted:1;                              //0x4
        ULONG UsageSubscriptionLoadAttempted:1;                             //0x4
        ULONG Spare:26;                                                     //0x4
    } Flags;                                                                //0x4
    LONG ConfigurationComparisonStatus;                                     //0x8
    LONG CurrentConfigurationLoadStatus;                                    //0xc
    LONG LkgConfigurationLoadStatus;                                        //0x10
    LONG UsageSubscriptionLoadStatus;                                       //0x14
};
/* Used in */
// _LOADER_FEATURE_CONFIGURATION_INFORMATION

