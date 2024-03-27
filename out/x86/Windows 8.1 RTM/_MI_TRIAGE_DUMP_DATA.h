#pragma once
/* ------------------ */

#include <_EXCEPTION_REGISTRATION_RECORD.h>

//0x30 bytes (sizeof)
struct _MI_TRIAGE_DUMP_DATA
{
    ULONG BadPageCount;                                                     //0x0
    LONG BadPagesDetected;                                                  //0x4
    LONG ZeroedPageSingleBitErrorsDetected;                                 //0x8
    LONG ScrubPasses;                                                       //0xc
    LONG ScrubBadPagesFound;                                                //0x10
    ULONGLONG FeatureBits;                                                  //0x18
    ULONG TimeZoneId;                                                       //0x20
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionChainTerminator;        //0x24
    struct _EXCEPTION_REGISTRATION_RECORD ExceptionChainTerminatorRecord;   //0x28
};
