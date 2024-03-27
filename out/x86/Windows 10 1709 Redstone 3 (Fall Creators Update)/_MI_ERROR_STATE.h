#pragma once
/* ------------------ */

#include <_MI_BAD_MEMORY_EVENT_ENTRY.h>
#include <_MI_PROBE_RAISE_TRACKER.h>
#include <_MI_FORCED_COMMITS.h>
#include <_MI_RESAVAIL_FAILURES.h>

//0xa8 bytes (sizeof)
struct _MI_ERROR_STATE
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;                  //0x0
    ULONG PageOfInterest;                                                   //0x28
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;                             //0x2c
    struct _MI_FORCED_COMMITS ForcedCommits;                                //0x6c
    ULONG WsleFailures[1];                                                  //0x74
    ULONG PageHashErrors;                                                   //0x78
    ULONG CheckZeroCount;                                                   //0x7c
    volatile LONG ZeroedPageSingleBitErrorsDetected;                        //0x80
    volatile LONG BadPagesDetected;                                         //0x84
    LONG ScrubPasses;                                                       //0x88
    LONG ScrubBadPagesFound;                                                //0x8c
    ULONG UserViewFailures;                                                 //0x90
    ULONG UserViewCollisionFailures;                                        //0x94
    struct _MI_RESAVAIL_FAILURES ResavailFailures;                          //0x98
    UCHAR PendingBadPages;                                                  //0xa0
    UCHAR InitFailure;                                                      //0xa1
    UCHAR StopBadMaps;                                                      //0xa2
};
/* Used in */
// _MI_SYSTEM_INFORMATION

