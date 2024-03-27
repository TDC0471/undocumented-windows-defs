#pragma once
/* ------------------ */

#include <_MI_BAD_MEMORY_EVENT_ENTRY.h>
#include <_MI_PROBE_RAISE_TRACKER.h>
#include <_MI_FORCED_COMMITS.h>

//0xa8 bytes (sizeof)
struct _MI_ERROR_STATE
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;                  //0x0
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;                             //0x38
    struct _MI_FORCED_COMMITS ForcedCommits;                                //0x74
    ULONG WsleFailures[2];                                                  //0x7c
    ULONG WsLinear;                                                         //0x84
    ULONG PageHashErrors;                                                   //0x88
    ULONG CheckZeroCount;                                                   //0x8c
    volatile LONG ZeroedPageSingleBitErrorsDetected;                        //0x90
    volatile LONG BadPagesDetected;                                         //0x94
    LONG ScrubPasses;                                                       //0x98
    LONG ScrubBadPagesFound;                                                //0x9c
    UCHAR PendingBadPages;                                                  //0xa0
    UCHAR InitFailure;                                                      //0xa1
    UCHAR StopBadMaps;                                                      //0xa2
};
/* Used in */
// _MI_SYSTEM_INFORMATION

