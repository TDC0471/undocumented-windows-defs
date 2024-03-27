#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>

//0x8c bytes (sizeof)
struct _MM_DRIVER_VERIFIER_DATA
{
    ULONG Level;                                                            //0x0
    volatile ULONG RaiseIrqls;                                              //0x4
    volatile ULONG AcquireSpinLocks;                                        //0x8
    volatile ULONG SynchronizeExecutions;                                   //0xc
    volatile ULONG AllocationsAttempted;                                    //0x10
    volatile ULONG AllocationsSucceeded;                                    //0x14
    volatile ULONG AllocationsSucceededSpecialPool;                         //0x18
    ULONG AllocationsWithNoTag;                                             //0x1c
    ULONG TrimRequests;                                                     //0x20
    ULONG Trims;                                                            //0x24
    ULONG AllocationsFailed;                                                //0x28
    volatile ULONG AllocationsFailedDeliberately;                           //0x2c
    volatile ULONG Loads;                                                   //0x30
    volatile ULONG Unloads;                                                 //0x34
    ULONG UnTrackedPool;                                                    //0x38
    ULONG UserTrims;                                                        //0x3c
    volatile ULONG CurrentPagedPoolAllocations;                             //0x40
    volatile ULONG CurrentNonPagedPoolAllocations;                          //0x44
    ULONG PeakPagedPoolAllocations;                                         //0x48
    ULONG PeakNonPagedPoolAllocations;                                      //0x4c
    volatile ULONG PagedBytes;                                              //0x50
    volatile ULONG NonPagedBytes;                                           //0x54
    ULONG PeakPagedBytes;                                                   //0x58
    ULONG PeakNonPagedBytes;                                                //0x5c
    volatile ULONG BurstAllocationsFailedDeliberately;                      //0x60
    ULONG SessionTrims;                                                     //0x64
    volatile ULONG OptionChanges;                                           //0x68
    volatile ULONG VerifyMode;                                              //0x6c
    struct _UNICODE_STRING PreviousBucketName;                              //0x70
    volatile ULONG ExecutePoolTypes;                                        //0x78
    volatile ULONG ExecutePageProtections;                                  //0x7c
    volatile ULONG ExecutePageMappings;                                     //0x80
    volatile ULONG ExecuteWriteSections;                                    //0x84
    volatile ULONG SectionAlignmentFailures;                                //0x88
};
