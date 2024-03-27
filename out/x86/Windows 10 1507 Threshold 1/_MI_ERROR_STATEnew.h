#pragma once
/* ------------------ */

#include <_MI_BAD_MEMORY_EVENT_ENTRY.h>
#include <_MI_PROBE_RAISE_TRACKER.h>
#include <_MI_FORCED_COMMITS.h>

//0x98 bytes (sizeof)
struct _MI_ERROR_STATE
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;                  //0x0
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;                             //0x28
    struct _MI_FORCED_COMMITS ForcedCommits;                                //0x64
    ULONG WsleFailures[2];                                                  //0x6c
    ULONG WsLinear;                                                         //0x74
    ULONG PageHashErrors;                                                   //0x78
    ULONG CheckZeroCount;                                                   //0x7c
    volatile LONG ZeroedPageSingleBitErrorsDetected;                        //0x80
    volatile LONG BadPagesDetected;                                         //0x84
    LONG ScrubPasses;                                                       //0x88
    LONG ScrubBadPagesFound;                                                //0x8c
    UCHAR PendingBadPages;                                                  //0x90
    UCHAR InitFailure;                                                      //0x91
    UCHAR StopBadMaps;                                                      //0x92
};
/* Used in */
// _MI_SYSTEM_INFORMATION

