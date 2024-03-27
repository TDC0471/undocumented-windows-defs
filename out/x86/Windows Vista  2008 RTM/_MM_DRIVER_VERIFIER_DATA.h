#pragma once
/* ------------------ */


//0x70 bytes (sizeof)
struct _MM_DRIVER_VERIFIER_DATA
{
    ULONG Level;                                                            //0x0
    ULONG RaiseIrqls;                                                       //0x4
    ULONG AcquireSpinLocks;                                                 //0x8
    ULONG SynchronizeExecutions;                                            //0xc
    ULONG AllocationsAttempted;                                             //0x10
    ULONG AllocationsSucceeded;                                             //0x14
    volatile ULONG AllocationsSucceededSpecialPool;                         //0x18
    ULONG AllocationsWithNoTag;                                             //0x1c
    ULONG TrimRequests;                                                     //0x20
    ULONG Trims;                                                            //0x24
    ULONG AllocationsFailed;                                                //0x28
    ULONG AllocationsFailedDeliberately;                                    //0x2c
    ULONG Loads;                                                            //0x30
    ULONG Unloads;                                                          //0x34
    ULONG UnTrackedPool;                                                    //0x38
    ULONG UserTrims;                                                        //0x3c
    ULONG CurrentPagedPoolAllocations;                                      //0x40
    ULONG CurrentNonPagedPoolAllocations;                                   //0x44
    ULONG PeakPagedPoolAllocations;                                         //0x48
    ULONG PeakNonPagedPoolAllocations;                                      //0x4c
    ULONG PagedBytes;                                                       //0x50
    ULONG NonPagedBytes;                                                    //0x54
    ULONG PeakPagedBytes;                                                   //0x58
    ULONG PeakNonPagedBytes;                                                //0x5c
    ULONG BurstAllocationsFailedDeliberately;                               //0x60
    ULONG SessionTrims;                                                     //0x64
    ULONG OptionChanges;                                                    //0x68
    ULONG VerifyMode;                                                       //0x6c
};
