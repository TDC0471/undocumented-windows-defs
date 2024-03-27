#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _MI_PROBE_RAISE_TRACKER
{
    ULONG UserRangeInKernel;                                                //0x0
    ULONG FaultFailed;                                                      //0x4
    ULONG WriteFaultFailed;                                                 //0x8
    ULONG LargePageFailed;                                                  //0xc
    ULONG UserAccessToKernelPte;                                            //0x10
    ULONG BadPageLocation;                                                  //0x14
    ULONG InsufficientCharge;                                               //0x18
    ULONG PageTableCharge;                                                  //0x1c
    ULONG NoIoReference;                                                    //0x20
    ULONG ProbeFailed;                                                      //0x24
    ULONG PteIsZero;                                                        //0x28
    ULONG StrongCodeWrite;                                                  //0x2c
    ULONG ReducedCloneCommitChargeFailed;                                   //0x30
    ULONG CopyOnWriteAtDispatchNoPages;                                     //0x34
    ULONG NoPageTablesAllowed;                                              //0x38
    ULONG EnclavePageFailed;                                                //0x3c
};
/* Used in */
// _MI_ERROR_STATE

