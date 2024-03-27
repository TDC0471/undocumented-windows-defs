#pragma once
/* ------------------ */

#include <_MI_FLAGS.h>

//0x40 bytes (sizeof)
struct _MI_TRIAGE_DUMP_DATA
{
    ULONGLONG BadPageCount;                                                 //0x0
    LONG BadPagesDetected;                                                  //0x8
    LONG ZeroedPageSingleBitErrorsDetected;                                 //0xc
    LONG ScrubPasses;                                                       //0x10
    LONG ScrubBadPagesFound;                                                //0x14
    ULONG PageHashErrors;                                                   //0x18
    ULONGLONG FeatureBits;                                                  //0x20
    ULONG TimeZoneId;                                                       //0x28
    struct _MI_FLAGS Flags;                                                 //0x2c
    VOID* VsmConnection;                                                    //0x38
};
