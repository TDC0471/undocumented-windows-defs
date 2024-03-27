#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _MI_TRIAGE_DUMP_DATA
{
    ULONGLONG BadPageCount;                                                 //0x0
    LONG BadPagesDetected;                                                  //0x8
    LONG ZeroedPageSingleBitErrorsDetected;                                 //0xc
    LONG ScrubPasses;                                                       //0x10
    LONG ScrubBadPagesFound;                                                //0x14
    ULONGLONG FeatureBits;                                                  //0x18
    ULONG TimeZoneId;                                                       //0x20
};
