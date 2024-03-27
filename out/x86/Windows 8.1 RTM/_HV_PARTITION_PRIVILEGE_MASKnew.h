#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _HV_PARTITION_PRIVILEGE_MASK
{
    ULONGLONG AsUINT64;                                                     //0x0
    ULONGLONG AccessVpRunTimeMsr:1;                                         //0x0
    ULONGLONG AccessPartitionReferenceCounter:1;                            //0x0
    ULONGLONG AccessSynicMsrs:1;                                            //0x0
    ULONGLONG AccessSyntheticTimerMsrs:1;                                   //0x0
    ULONGLONG AccessApicMsrs:1;                                             //0x0
    ULONGLONG AccessHypercallMsrs:1;                                        //0x0
    ULONGLONG AccessVpIndex:1;                                              //0x0
    ULONGLONG AccessResetMsr:1;                                             //0x0
    ULONGLONG AccessStatsMsr:1;                                             //0x0
    ULONGLONG AccessPartitionReferenceTsc:1;                                //0x0
    ULONGLONG AccessGuestIdleMsr:1;                                         //0x0
    ULONGLONG AccessFrequencyMsrs:1;                                        //0x0
    ULONGLONG AccessDebugMsrs:1;                                            //0x0
    ULONGLONG Reserved1:19;                                                 //0x0
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
    ULONGLONG EnableExpandedStackwalking:1;                                 //0x0
    ULONGLONG Reserved3:17;                                                 //0x0
};
/* Used in */
// _HV_HYPERVISOR_FEATURES

