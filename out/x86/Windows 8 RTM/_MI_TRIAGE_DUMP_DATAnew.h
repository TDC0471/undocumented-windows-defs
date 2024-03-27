#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _MI_TRIAGE_DUMP_DATA
{
    ULONG BadPageCount;                                                     //0x0
    LONG BadPagesDetected;                                                  //0x4
    LONG ZeroedPageSingleBitErrorsDetected;                                 //0x8
    LONG ScrubPasses;                                                       //0xc
    LONG ScrubBadPagesFound;                                                //0x10
    ULONG FeatureBits;                                                      //0x14
    ULONG TimeZoneId;                                                       //0x18
};
