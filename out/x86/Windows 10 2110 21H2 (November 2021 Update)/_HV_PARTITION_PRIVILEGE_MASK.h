#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _HV_PARTITION_PRIVILEGE_MASK
{
    ULONGLONG AsUINT64;                                                     //0x0
    ULONGLONG AccessVpRunTimeReg:1;                                         //0x0
    ULONGLONG AccessPartitionReferenceCounter:1;                            //0x0
    ULONGLONG AccessSynicRegs:1;                                            //0x0
    ULONGLONG AccessSyntheticTimerRegs:1;                                   //0x0
    ULONGLONG AccessIntrCtrlRegs:1;                                         //0x0
    ULONGLONG AccessHypercallMsrs:1;                                        //0x0
    ULONGLONG AccessVpIndex:1;                                              //0x0
    ULONGLONG AccessResetReg:1;                                             //0x0
    ULONGLONG AccessStatsReg:1;                                             //0x0
    ULONGLONG AccessPartitionReferenceTsc:1;                                //0x0
    ULONGLONG AccessGuestIdleReg:1;                                         //0x0
    ULONGLONG AccessFrequencyRegs:1;                                        //0x0
    ULONGLONG AccessDebugRegs:1;                                            //0x0
    ULONGLONG AccessReenlightenmentControls:1;                              //0x0
    ULONGLONG AccessRootSchedulerReg:1;                                     //0x0
    ULONGLONG AccessTscInvariantControls:1;                                 //0x0
    ULONGLONG Reserved1:16;                                                 //0x0
    ULONGLONG CreatePartitions:1;                                           //0x0
    ULONGLONG AccessPartitionId:1;                                          //0x0
    ULONGLONG AccessMemoryPool:1;                                           //0x0
    ULONGLONG AdjustMessageBuffers:1;                                       //0x0
    ULONGLONG PostMessages:1;                                               //0x0
    ULONGLONG SignalEvents:1;                                               //0x0
    ULONGLONG CreatePort:1;                                                 //0x0
    ULONGLONG ConnectPort:1;                                                //0x0
    ULONGLONG AccessStats:1;                                                //0x0
    ULONGLONG Reserved2:2;                                                  //0x0
    ULONGLONG Debugging:1;                                                  //0x0
    ULONGLONG CpuManagement:1;                                              //0x0
    ULONGLONG ConfigureProfiler:1;                                          //0x0
    ULONGLONG AccessVpExitTracing:1;                                        //0x0
    ULONGLONG EnableExtendedGvaRangesForFlushVirtualAddressList:1;          //0x0
    ULONGLONG AccessVsm:1;                                                  //0x0
    ULONGLONG AccessVpRegisters:1;                                          //0x0
    ULONGLONG UnusedBit:1;                                                  //0x0
    ULONGLONG FastHypercallOutput:1;                                        //0x0
    ULONGLONG EnableExtendedHypercalls:1;                                   //0x0
    ULONGLONG StartVirtualProcessor:1;                                      //0x0
    ULONGLONG Isolation:1;                                                  //0x0
    ULONGLONG Reserved3:9;                                                  //0x0
};
/* Used in */
// _HV_X64_HYPERVISOR_FEATURES

