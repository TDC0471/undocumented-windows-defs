#pragma once
/* ------------------ */

#include <_MI_BAD_MEMORY_EVENT_ENTRY.h>
#include <_MI_PROBE_RAISE_TRACKER.h>
#include <_MI_FORCED_COMMITS.h>
#include <_MI_RESAVAIL_FAILURES.h>

//0xb8 bytes (sizeof)
struct _MI_ERROR_STATE
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;                  //0x0
    ULONGLONG PageOfInterest;                                               //0x38
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;                             //0x40
    struct _MI_FORCED_COMMITS ForcedCommits;                                //0x80
    ULONG WsleFailures[1];                                                  //0x88
    ULONG PageHashErrors;                                                   //0x8c
    ULONG CheckZeroCount;                                                   //0x90
    volatile LONG ZeroedPageSingleBitErrorsDetected;                        //0x94
    volatile LONG BadPagesDetected;                                         //0x98
    LONG ScrubPasses;                                                       //0x9c
    LONG ScrubBadPagesFound;                                                //0xa0
    ULONG UserViewFailures;                                                 //0xa4
    ULONG UserViewCollisionFailures;                                        //0xa8
    struct _MI_RESAVAIL_FAILURES ResavailFailures;                          //0xac
    UCHAR PendingBadPages;                                                  //0xb4
    UCHAR InitFailure;                                                      //0xb5
    UCHAR StopBadMaps;                                                      //0xb6
};
/* Used in */
// _MI_SYSTEM_INFORMATION

