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
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;                             //0x28
    struct _MI_FORCED_COMMITS ForcedCommits;                                //0x68
    ULONG WsleFailures[2];                                                  //0x70
    ULONG WsLinear;                                                         //0x78
    ULONG PageHashErrors;                                                   //0x7c
    ULONG CheckZeroCount;                                                   //0x80
    volatile LONG ZeroedPageSingleBitErrorsDetected;                        //0x84
    volatile LONG BadPagesDetected;                                         //0x88
    LONG ScrubPasses;                                                       //0x8c
    LONG ScrubBadPagesFound;                                                //0x90
    ULONG UserViewFailures;                                                 //0x94
    ULONG UserViewCollisionFailures;                                        //0x98
    struct _MI_RESAVAIL_FAILURES ResavailFailures;                          //0x9c
    UCHAR PendingBadPages;                                                  //0xa4
    UCHAR InitFailure;                                                      //0xa5
    UCHAR StopBadMaps;                                                      //0xa6
};
/* Used in */
// _MI_SYSTEM_INFORMATION

