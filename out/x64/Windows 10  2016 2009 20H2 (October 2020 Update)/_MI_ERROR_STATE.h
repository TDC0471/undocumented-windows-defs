#pragma once
/* ------------------ */

#include <_MI_BAD_MEMORY_EVENT_ENTRY.h>
#include <_MI_PROBE_RAISE_TRACKER.h>
#include <_MI_FORCED_COMMITS.h>
#include <_MI_RESAVAIL_FAILURES.h>

//0xc8 bytes (sizeof)
struct _MI_ERROR_STATE
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;                  //0x0
    ULONGLONG PageOfInterest;                                               //0x38
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;                             //0x40
    struct _MI_FORCED_COMMITS ForcedCommits;                                //0x84
    ULONG WsleFailures[1];                                                  //0x8c
    ULONG PageHashErrors;                                                   //0x90
    ULONG CheckZeroCount;                                                   //0x94
    volatile LONG ZeroedPageSingleBitErrorsDetected;                        //0x98
    volatile LONG BadPagesDetected;                                         //0x9c
    LONG ScrubPasses;                                                       //0xa0
    LONG ScrubBadPagesFound;                                                //0xa4
    ULONG UserViewFailures;                                                 //0xa8
    ULONG UserViewCollisionFailures;                                        //0xac
    ULONG UserAllocateFailures;                                             //0xb0
    ULONG UserAllocateCollisionFailures;                                    //0xb4
    struct _MI_RESAVAIL_FAILURES ResavailFailures;                          //0xb8
    UCHAR PendingBadPages;                                                  //0xc0
    UCHAR FatalGraphicsFailures;                                            //0xc1
    UCHAR InitFailure;                                                      //0xc2
    UCHAR StopBadMaps;                                                      //0xc3
};
/* Used in */
// _MI_SYSTEM_INFORMATION

