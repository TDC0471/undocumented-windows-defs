#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KNODE.h>
#include <_KPRCBFLAG.h>
#include <_KPROCESSOR_STATE.h>
#include <_XSAVE_AREA_HEADER.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_GENERAL_LOOKASIDE_POOL.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_KPRCB.h>
#include <_SLIST_HEADER.h>
#include <_KDPC_DATA.h>
#include <_KTIMER_TABLE.h>
#include <_KGATE.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>
#include <_RTL_RB_TREE.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_CACHE_DESCRIPTOR.h>
#include <_KAFFINITY_EX.h>
#include <_KSHARED_READY_QUEUE.h>
#include <_PROCESSOR_PROFILE_CONTROL_AREA.h>
#include <_SYNCH_COUNTERS.h>
#include <_FILESYSTEM_DISK_COUNTERS.h>
#include <_CONTEXT.h>
#include <_XSAVE_AREA.h>
#include <_KENTROPY_TIMING_STATE.h>
#include <_IOP_IRP_STACK_PROFILER.h>
#include <_KSECURE_FAULT_INFORMATION.h>
#include <_KTIMER_EXPIRATION_TRACE.h>
#include <_REQUEST_MAILBOX.h>
#include <_MACHINE_CHECK_CONTEXT.h>
#include <_KLOCK_QUEUE_HANDLE.h>

//0x8f00 bytes (sizeof)
struct _KPRCB
{
    ULONG MxCsr;                                                            //0x0
    UCHAR LegacyNumber;                                                     //0x4
    UCHAR ReservedMustBeZero;                                               //0x5
    UCHAR InterruptRequest;                                                 //0x6
    UCHAR IdleHalt;                                                         //0x7
    struct _KTHREAD* CurrentThread;                                         //0x8
    struct _KTHREAD* NextThread;                                            //0x10
    struct _KTHREAD* IdleThread;                                            //0x18
    UCHAR NestingLevel;                                                     //0x20
    UCHAR ClockOwner;                                                       //0x21
    union
    {
        UCHAR PendingTickFlags;                                             //0x22
        struct
        {
            UCHAR PendingTick:1;                                            //0x22
            UCHAR PendingBackupTick:1;                                      //0x22
        };
    };
    UCHAR IdleState;                                                        //0x23
    ULONG Number;                                                           //0x24
    ULONGLONG RspBase;                                                      //0x28
    ULONGLONG PrcbLock;                                                     //0x30
    CHAR* PriorityState;                                                    //0x38
    CHAR CpuType;                                                           //0x40
    CHAR CpuID;                                                             //0x41
    union
    {
        USHORT CpuStep;                                                     //0x42
        struct
        {
            UCHAR CpuStepping;                                              //0x42
            UCHAR CpuModel;                                                 //0x43
        };
    };
    ULONG MHz;                                                              //0x44
    ULONGLONG HalReserved[8];                                               //0x48
    USHORT MinorVersion;                                                    //0x88
    USHORT MajorVersion;                                                    //0x8a
    UCHAR BuildType;                                                        //0x8c
    UCHAR CpuVendor;                                                        //0x8d
    UCHAR CoresPerPhysicalProcessor;                                        //0x8e
    UCHAR LogicalProcessorsPerCore;                                         //0x8f
    ULONGLONG TscFrequency;                                                 //0x90
    ULONGLONG PrcbPad04[5];                                                 //0x98
    struct _KNODE* ParentNode;                                              //0xc0
    ULONGLONG GroupSetMember;                                               //0xc8
    UCHAR Group;                                                            //0xd0
    UCHAR GroupIndex;                                                       //0xd1
    UCHAR PrcbPad05[2];                                                     //0xd2
    ULONG InitialApicId;                                                    //0xd4
    ULONG ScbOffset;                                                        //0xd8
    ULONG ApicMask;                                                         //0xdc
    VOID* AcpiReserved;                                                     //0xe0
    ULONG CFlushSize;                                                       //0xe8
    union _KPRCBFLAG PrcbFlags;                                             //0xec
    union
    {
        struct
        {
            ULONGLONG TrappedSecurityDomain;                                //0xf0
            union
            {
                UCHAR BpbState;                                             //0xf8
                struct
                {
                    UCHAR BpbCpuIdle:1;                                     //0xf8
                    UCHAR BpbFlushRsbOnTrap:1;                              //0xf8
                    UCHAR BpbIbpbOnReturn:1;                                //0xf8
                    UCHAR BpbIbpbOnTrap:1;                                  //0xf8
                    UCHAR BpbIbpbOnRetpolineExit:1;                         //0xf8
                    UCHAR BpbStateReserved:3;                               //0xf8
                };
            };
            union
            {
                UCHAR BpbFeatures;                                          //0xf9
                struct
                {
                    UCHAR BpbClearOnIdle:1;                                 //0xf9
                    UCHAR BpbEnabled:1;                                     //0xf9
                    UCHAR BpbSmep:1;                                        //0xf9
                    UCHAR BpbFeaturesReserved:5;                            //0xf9
                };
            };
            UCHAR BpbCurrentSpecCtrl;                                       //0xfa
            UCHAR BpbKernelSpecCtrl;                                        //0xfb
            UCHAR BpbNmiSpecCtrl;                                           //0xfc
            UCHAR BpbUserSpecCtrl;                                          //0xfd
            volatile SHORT PairRegister;                                    //0xfe
        };
        ULONGLONG PrcbPad11[2];                                             //0xf0
    };
    struct _KPROCESSOR_STATE ProcessorState;                                //0x100
    struct _XSAVE_AREA_HEADER* ExtendedSupervisorState;                     //0x6c0
    ULONG ProcessorSignature;                                               //0x6c8
    ULONG ProcessorFlags;                                                   //0x6cc
    union
    {
        struct
        {
            UCHAR BpbRetpolineExitSpecCtrl;                                 //0x6d0
            UCHAR BpbTrappedRetpolineExitSpecCtrl;                          //0x6d1
            union
            {
                UCHAR BpbTrappedBpbState;                                   //0x6d2
                struct
                {
                    UCHAR BpbTrappedCpuIdle:1;                              //0x6d2
                    UCHAR BpbTrappedFlushRsbOnTrap:1;                       //0x6d2
                    UCHAR BpbTrappedIbpbOnReturn:1;                         //0x6d2
                    UCHAR BpbTrappedIbpbOnTrap:1;                           //0x6d2
                    UCHAR BpbTrappedIbpbOnRetpolineExit:1;                  //0x6d2
                    UCHAR BpbtrappedBpbStateReserved:3;                     //0x6d2
                };
            };
            union
            {
                UCHAR BpbRetpolineState;                                    //0x6d3
                struct
                {
                    UCHAR BpbRunningNonRetpolineCode:1;                     //0x6d3
                    UCHAR BpbIndirectCallsSafe:1;                           //0x6d3
                    UCHAR BpbRetpolineEnabled:1;                            //0x6d3
                    UCHAR BpbRetpolineStateReserved:5;                      //0x6d3
                };
            };
            ULONG PrcbPad12b;                                               //0x6d4
        };
        ULONGLONG PrcbPad12a;                                               //0x6d0
    };
    ULONGLONG PrcbPad12[3];                                                 //0x6d8
    struct _KSPIN_LOCK_QUEUE LockQueue[17];                                 //0x6f0
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x800
    struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];              //0x900
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0x1500
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0x2100
    ULONGLONG PrcbPad20;                                                    //0x2d00
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x2d08
    volatile LONG MmPageFaultCount;                                         //0x2d10
    volatile LONG MmCopyOnWriteCount;                                       //0x2d14
    volatile LONG MmTransitionCount;                                        //0x2d18
    volatile LONG MmDemandZeroCount;                                        //0x2d1c
    volatile LONG MmPageReadCount;                                          //0x2d20
    volatile LONG MmPageReadIoCount;                                        //0x2d24
    volatile LONG MmDirtyPagesWriteCount;                                   //0x2d28
    volatile LONG MmDirtyWriteIoCount;                                      //0x2d2c
    volatile LONG MmMappedPagesWriteCount;                                  //0x2d30
    volatile LONG MmMappedWriteIoCount;                                     //0x2d34
    ULONG KeSystemCalls;                                                    //0x2d38
    ULONG KeContextSwitches;                                                //0x2d3c
    ULONG PrcbPad40;                                                        //0x2d40
    ULONG CcFastReadNoWait;                                                 //0x2d44
    ULONG CcFastReadWait;                                                   //0x2d48
    ULONG CcFastReadNotPossible;                                            //0x2d4c
    ULONG CcCopyReadNoWait;                                                 //0x2d50
    ULONG CcCopyReadWait;                                                   //0x2d54
    ULONG CcCopyReadNoWaitMiss;                                             //0x2d58
    volatile LONG IoReadOperationCount;                                     //0x2d5c
    volatile LONG IoWriteOperationCount;                                    //0x2d60
    volatile LONG IoOtherOperationCount;                                    //0x2d64
    union _LARGE_INTEGER IoReadTransferCount;                               //0x2d68
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x2d70
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x2d78
    volatile LONG PacketBarrier;                                            //0x2d80
    volatile LONG TargetCount;                                              //0x2d84
    volatile ULONG IpiFrozen;                                               //0x2d88
    ULONG PrcbPad30;                                                        //0x2d8c
    VOID* IsrDpcStats;                                                      //0x2d90
    ULONG DeviceInterrupts;                                                 //0x2d98
    LONG LookasideIrpFloat;                                                 //0x2d9c
    ULONG InterruptLastCount;                                               //0x2da0
    ULONG InterruptRate;                                                    //0x2da4
    ULONGLONG LastNonHrTimerExpiration;                                     //0x2da8
    struct _KPRCB* PairPrcb;                                                //0x2db0
    ULONGLONG PrcbPad35[1];                                                 //0x2db8
    union _SLIST_HEADER InterruptObjectPool;                                //0x2dc0
    ULONGLONG PrcbPad41[6];                                                 //0x2dd0
    struct _KDPC_DATA DpcData[2];                                           //0x2e00
    VOID* DpcStack;                                                         //0x2e50
    LONG MaximumDpcQueueDepth;                                              //0x2e58
    ULONG DpcRequestRate;                                                   //0x2e5c
    ULONG MinimumDpcRate;                                                   //0x2e60
    ULONG DpcLastCount;                                                     //0x2e64
    UCHAR ThreadDpcEnable;                                                  //0x2e68
    volatile UCHAR QuantumEnd;                                              //0x2e69
    volatile UCHAR DpcRoutineActive;                                        //0x2e6a
    volatile UCHAR IdleSchedule;                                            //0x2e6b
    union
    {
        volatile LONG DpcRequestSummary;                                    //0x2e6c
        SHORT DpcRequestSlot[2];                                            //0x2e6c
        struct
        {
            SHORT NormalDpcState;                                           //0x2e6c
            SHORT ThreadDpcState;                                           //0x2e6e
        };
        struct
        {
            ULONG DpcNormalProcessingActive:1;                              //0x2e6c
            ULONG DpcNormalProcessingRequested:1;                           //0x2e6c
            ULONG DpcNormalThreadSignal:1;                                  //0x2e6c
            ULONG DpcNormalTimerExpiration:1;                               //0x2e6c
            ULONG DpcNormalDpcPresent:1;                                    //0x2e6c
            ULONG DpcNormalLocalInterrupt:1;                                //0x2e6c
            ULONG DpcNormalSpare:10;                                        //0x2e6c
            ULONG DpcThreadActive:1;                                        //0x2e6c
            ULONG DpcThreadRequested:1;                                     //0x2e6c
            ULONG DpcThreadSpare:14;                                        //0x2e6c
        };
    };
    ULONG LastTimerHand;                                                    //0x2e70
    ULONG LastTick;                                                         //0x2e74
    ULONG ClockInterrupts;                                                  //0x2e78
    ULONG ReadyScanTick;                                                    //0x2e7c
    VOID* InterruptObject[256];                                             //0x2e80
    struct _KTIMER_TABLE TimerTable;                                        //0x3680
    struct _KGATE DpcGate;                                                  //0x5880
    VOID* PrcbPad52;                                                        //0x5898
    struct _KDPC CallDpc;                                                   //0x58a0
    LONG ClockKeepAlive;                                                    //0x58e0
    UCHAR PrcbPad60[2];                                                     //0x58e4
    USHORT NmiActive;                                                       //0x58e6
    LONG DpcWatchdogPeriod;                                                 //0x58e8
    LONG DpcWatchdogCount;                                                  //0x58ec
    volatile LONG KeSpinLockOrdering;                                       //0x58f0
    ULONG DpcWatchdogProfileCumulativeDpcThreshold;                         //0x58f4
    VOID* CachedPtes;                                                       //0x58f8
    struct _LIST_ENTRY WaitListHead;                                        //0x5900
    ULONGLONG WaitLock;                                                     //0x5910
    ULONG ReadySummary;                                                     //0x5918
    LONG AffinitizedSelectionMask;                                          //0x591c
    ULONG QueueIndex;                                                       //0x5920
    ULONG PrcbPad75[3];                                                     //0x5924
    struct _KDPC TimerExpirationDpc;                                        //0x5930
    struct _RTL_RB_TREE ScbQueue;                                           //0x5970
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x5980
    ULONG InterruptCount;                                                   //0x5b80
    ULONG KernelTime;                                                       //0x5b84
    ULONG UserTime;                                                         //0x5b88
    ULONG DpcTime;                                                          //0x5b8c
    ULONG InterruptTime;                                                    //0x5b90
    ULONG AdjustDpcThreshold;                                               //0x5b94
    UCHAR DebuggerSavedIRQL;                                                //0x5b98
    UCHAR GroupSchedulingOverQuota;                                         //0x5b99
    volatile UCHAR DeepSleep;                                               //0x5b9a
    UCHAR PrcbPad80;                                                        //0x5b9b
    ULONG DpcTimeCount;                                                     //0x5b9c
    ULONG DpcTimeLimit;                                                     //0x5ba0
    ULONG PeriodicCount;                                                    //0x5ba4
    ULONG PeriodicBias;                                                     //0x5ba8
    ULONG AvailableTime;                                                    //0x5bac
    ULONG KeExceptionDispatchCount;                                         //0x5bb0
    ULONG ReadyThreadCount;                                                 //0x5bb4
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x5bb8
    ULONGLONG StartCycles;                                                  //0x5bc0
    ULONGLONG TaggedCyclesStart;                                            //0x5bc8
    ULONGLONG TaggedCycles[2];                                              //0x5bd0
    ULONGLONG GenerationTarget;                                             //0x5be0
    ULONGLONG AffinitizedCycles;                                            //0x5be8
    ULONGLONG ImportantCycles;                                              //0x5bf0
    ULONGLONG UnimportantCycles;                                            //0x5bf8
    ULONG DpcWatchdogProfileSingleDpcThreshold;                             //0x5c00
    volatile LONG MmSpinLockOrdering;                                       //0x5c04
    VOID* volatile CachedStack;                                             //0x5c08
    ULONG PageColor;                                                        //0x5c10
    ULONG NodeColor;                                                        //0x5c14
    ULONG NodeShiftedColor;                                                 //0x5c18
    ULONG SecondaryColorMask;                                               //0x5c1c
    UCHAR PrcbPad81[6];                                                     //0x5c20
    UCHAR ExceptionStackActive;                                             //0x5c26
    UCHAR TbFlushListActive;                                                //0x5c27
    VOID* ExceptionStack;                                                   //0x5c28
    ULONGLONG PrcbPad82[1];                                                 //0x5c30
    ULONGLONG CycleTime;                                                    //0x5c38
    ULONGLONG Cycles[4][2];                                                 //0x5c40
    ULONG CcFastMdlReadNoWait;                                              //0x5c80
    ULONG CcFastMdlReadWait;                                                //0x5c84
    ULONG CcFastMdlReadNotPossible;                                         //0x5c88
    ULONG CcMapDataNoWait;                                                  //0x5c8c
    ULONG CcMapDataWait;                                                    //0x5c90
    ULONG CcPinMappedDataCount;                                             //0x5c94
    ULONG CcPinReadNoWait;                                                  //0x5c98
    ULONG CcPinReadWait;                                                    //0x5c9c
    ULONG CcMdlReadNoWait;                                                  //0x5ca0
    ULONG CcMdlReadWait;                                                    //0x5ca4
    ULONG CcLazyWriteHotSpots;                                              //0x5ca8
    ULONG CcLazyWriteIos;                                                   //0x5cac
    ULONG CcLazyWritePages;                                                 //0x5cb0
    ULONG CcDataFlushes;                                                    //0x5cb4
    ULONG CcDataPages;                                                      //0x5cb8
    ULONG CcLostDelayedWrites;                                              //0x5cbc
    ULONG CcFastReadResourceMiss;                                           //0x5cc0
    ULONG CcCopyReadWaitMiss;                                               //0x5cc4
    ULONG CcFastMdlReadResourceMiss;                                        //0x5cc8
    ULONG CcMapDataNoWaitMiss;                                              //0x5ccc
    ULONG CcMapDataWaitMiss;                                                //0x5cd0
    ULONG CcPinReadNoWaitMiss;                                              //0x5cd4
    ULONG CcPinReadWaitMiss;                                                //0x5cd8
    ULONG CcMdlReadNoWaitMiss;                                              //0x5cdc
    ULONG CcMdlReadWaitMiss;                                                //0x5ce0
    ULONG CcReadAheadIos;                                                   //0x5ce4
    volatile LONG MmCacheTransitionCount;                                   //0x5ce8
    volatile LONG MmCacheReadCount;                                         //0x5cec
    volatile LONG MmCacheIoCount;                                           //0x5cf0
    ULONG PrcbPad91;                                                        //0x5cf4
    VOID* MmInternal;                                                       //0x5cf8
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x5d00
    VOID* HyperPte;                                                         //0x5f00
    struct _LIST_ENTRY ScbList;                                             //0x5f08
    struct _KDPC ForceIdleDpc;                                              //0x5f18
    struct _KDPC DpcWatchdogDpc;                                            //0x5f58
    struct _KTIMER DpcWatchdogTimer;                                        //0x5f98
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x5fd8
    ULONG CacheCount;                                                       //0x6014
    volatile ULONG CachedCommit;                                            //0x6018
    volatile ULONG CachedResidentAvailable;                                 //0x601c
    VOID* WheaInfo;                                                         //0x6020
    VOID* EtwSupport;                                                       //0x6028
    VOID* ExSaPageArray;                                                    //0x6030
    ULONG KeAlignmentFixupCount;                                            //0x6038
    ULONG PrcbPad95;                                                        //0x603c
    union _SLIST_HEADER HypercallPageList;                                  //0x6040
    ULONGLONG* StatisticsPage;                                              //0x6050
    ULONGLONG PrcbPad85[5];                                                 //0x6058
    VOID* HypercallCachedPages;                                             //0x6080
    VOID* VirtualApicAssist;                                                //0x6088
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x6090
    ULONG PackageId;                                                        //0x6138
    ULONG PrcbPad86;                                                        //0x613c
    ULONGLONG SharedReadyQueueMask;                                         //0x6140
    struct _KSHARED_READY_QUEUE* SharedReadyQueue;                          //0x6148
    ULONG SharedQueueScanOwner;                                             //0x6150
    ULONG ScanSiblingIndex;                                                 //0x6154
    ULONGLONG CoreProcessorSet;                                             //0x6158
    ULONGLONG ScanSiblingMask;                                              //0x6160
    ULONGLONG LLCMask;                                                      //0x6168
    ULONGLONG CacheProcessorMask[5];                                        //0x6170
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x6198
    VOID* ProfileEventIndexAddress;                                         //0x61a0
    VOID** DpcWatchdogProfile;                                              //0x61a8
    VOID** DpcWatchdogProfileCurrentEmptyCapture;                           //0x61b0
    VOID* SchedulerAssist;                                                  //0x61b8
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x61c0
    ULONGLONG PrcbPad94;                                                    //0x6278
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x6280
    UCHAR VendorString[13];                                                 //0x6290
    UCHAR PrcbPad100[3];                                                    //0x629d
    ULONGLONG FeatureBits;                                                  //0x62a0
    union _LARGE_INTEGER UpdateSignature;                                   //0x62a8
    ULONGLONG PteBitCache;                                                  //0x62b0
    ULONG PteBitOffset;                                                     //0x62b8
    ULONG PrcbPad105;                                                       //0x62bc
    struct _CONTEXT* Context;                                               //0x62c0
    ULONG ContextFlagsInit;                                                 //0x62c8
    ULONG PrcbPad115;                                                       //0x62cc
    struct _XSAVE_AREA* ExtendedState;                                      //0x62d0
    VOID* IsrStack;                                                         //0x62d8
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x62e0
    ULONGLONG PrcbPad110;                                                   //0x6430
    struct
    {
        ULONG UpdateCycle;                                                  //0x6438
        union
        {
            SHORT PairLocal;                                                //0x643c
            struct
            {
                UCHAR PairLocalLow;                                         //0x643c
                UCHAR PairLocalForceStibp:1;                                //0x643d
                UCHAR Reserved:4;                                           //0x643d
                UCHAR Frozen:1;                                             //0x643d
                UCHAR ForceUntrusted:1;                                     //0x643d
                UCHAR SynchIpi:1;                                           //0x643d
            };
        };
        union
        {
            SHORT PairRemote;                                               //0x643e
            struct
            {
                UCHAR PairRemoteLow;                                        //0x643e
                UCHAR Reserved2;                                            //0x643f
            };
        };
        UCHAR Trace[24];                                                    //0x6440
        ULONGLONG LocalDomain;                                              //0x6458
        ULONGLONG RemoteDomain;                                             //0x6460
        struct _KTHREAD* Thread;                                            //0x6468
    } StibpPairingTrace;                                                    //0x6438
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;                           //0x6470
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;                        //0x6478
    struct _KDPC AbDpc;                                                     //0x6480
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;               //0x64c0
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;              //0x6514
    struct _KSECURE_FAULT_INFORMATION SecureFault;                          //0x6568
    ULONGLONG PrcbPad120;                                                   //0x6578
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;                      //0x6580
    ULONGLONG PrcbPad125[2];                                                //0x67f0
    ULONG TimerExpirationTraceCount;                                        //0x6800
    ULONG PrcbPad127;                                                       //0x6804
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];               //0x6808
    ULONGLONG PrcbPad128[7];                                                //0x6908
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x6940
    ULONGLONG PrcbPad130[7];                                                //0x6948
    struct _MACHINE_CHECK_CONTEXT McheckContext[2];                         //0x6980
    ULONGLONG PrcbPad134[4];                                                //0x6a20
    struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];                        //0x6a40
    ULONGLONG PrcbPad134a[4];                                               //0x6aa0
    UCHAR PrcbPad138[896];                                                  //0x6ac0
    UCHAR PrcbPad138a[64];                                                  //0x6e40
    ULONGLONG KernelDirectoryTableBase;                                     //0x6e80
    ULONGLONG RspBaseShadow;                                                //0x6e88
    ULONGLONG UserRspShadow;                                                //0x6e90
    ULONG ShadowFlags;                                                      //0x6e98
    ULONG PrcbPad138b;                                                      //0x6e9c
    ULONGLONG PrcbPad138c;                                                  //0x6ea0
    USHORT PrcbPad138d;                                                     //0x6ea8
    USHORT PrcbPad138e;                                                     //0x6eaa
    ULONG DbgMceNestingLevel;                                               //0x6eac
    ULONG DbgMceFlags;                                                      //0x6eb0
    ULONG PrcbPad139b;                                                      //0x6eb4
    ULONGLONG PrcbPad140[505];                                              //0x6eb8
    ULONGLONG PrcbPad140a[8];                                               //0x7e80
    ULONGLONG PrcbPad141[504];                                              //0x7ec0
    UCHAR PrcbPad141a[64];                                                  //0x8e80
    struct _REQUEST_MAILBOX RequestMailbox[1];                              //0x8ec0
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

