#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _RTL_FEATURE_USAGE_REPORT
{
    ULONG FeatureId;                                                        //0x0
    USHORT ReportingKind;                                                   //0x4
    USHORT ReportingOptions;                                                //0x6
};
