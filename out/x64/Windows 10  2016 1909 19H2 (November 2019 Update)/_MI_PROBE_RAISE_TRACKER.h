#pragma once
/* ------------------ */


//0x44 bytes (sizeof)
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
    ULONG NoPhysicalMapping;                                                //0x20
    ULONG NoIoReference;                                                    //0x24
    ULONG ProbeFailed;                                                      //0x28
    ULONG PteIsZero;                                                        //0x2c
    ULONG StrongCodeWrite;                                                  //0x30
    ULONG ReducedCloneCommitChargeFailed;                                   //0x34
    ULONG CopyOnWriteAtDispatchNoPages;                                     //0x38
    ULONG NoPageTablesAllowed;                                              //0x3c
    ULONG EnclavePageFailed;                                                //0x40
};
/* Used in */
// _MI_ERROR_STATE

