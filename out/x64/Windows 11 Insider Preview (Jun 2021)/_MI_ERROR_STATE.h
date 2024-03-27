#pragma once
/* ------------------ */

#include <_MI_BAD_MEMORY_EVENT_ENTRY.h>
#include <_MI_PROBE_RAISE_TRACKER.h>
#include <_MI_FORCED_COMMITS.h>
#include <_MI_PAGE_HASH_ERROR_BEHAVIOR.h>
#include <_WORK_QUEUE_ITEM.h>
#include <_MI_RESAVAIL_FAILURES.h>

//0x100 bytes (sizeof)
struct _MI_ERROR_STATE
{
    struct _MI_BAD_MEMORY_EVENT_ENTRY BadMemoryEventEntry;                  //0x0
    struct _MI_PROBE_RAISE_TRACKER ProbeRaises;                             //0x38
    struct _MI_FORCED_COMMITS ForcedCommits;                                //0x78
    ULONG PrePhase0BugCheckParameter;                                       //0x80
    ULONG WsleFailures;                                                     //0x84
    enum _MI_PAGE_HASH_ERROR_BEHAVIOR PageHashErrorBehavior;                //0x88
    ULONG PageHashReadErrors;                                               //0x8c
    ULONG PageHashStandbyErrors;                                            //0x90
    ULONG PageHashTransferErrors;                                           //0x94
    ULONG PageHashAllocationErrors;                                         //0x98
    ULONGLONG FailedHashPageFrameIndex;                                     //0xa0
    ULONG CheckZeroCount;                                                   //0xa8
    volatile LONG ZeroedPageSingleBitErrorsDetected;                        //0xac
    volatile LONG BadPagesDetected;                                         //0xb0
    ULONG BadPagesInserted;                                                 //0xb4
    struct _WORK_QUEUE_ITEM BadPageInsertWorkItem;                          //0xb8
    LONG ScrubPasses;                                                       //0xd8
    LONG ScrubBadPagesFound;                                                //0xdc
    ULONG UserViewFailures;                                                 //0xe0
    ULONG UserViewCollisionFailures;                                        //0xe4
    ULONG UserAllocateFailures;                                             //0xe8
    ULONG UserAllocateCollisionFailures;                                    //0xec
    struct _MI_RESAVAIL_FAILURES ResavailFailures;                          //0xf0
    UCHAR PendingBadPages;                                                  //0xf8
    UCHAR FatalGraphicsFailures;                                            //0xf9
    UCHAR InitFailure;                                                      //0xfa
    UCHAR BadPagesInsertSignalState;                                        //0xfb
};
/* Used in */
// _MI_SYSTEM_INFORMATION

