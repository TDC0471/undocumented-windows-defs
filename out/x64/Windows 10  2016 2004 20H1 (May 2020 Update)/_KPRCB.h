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
#include <_KSTATIC_AFFINITY_BLOCK.h>
#include <_SLIST_HEADER.h>
#include <_RTL_HASH_TABLE.h>
#include <_KDPC.h>
#include <_KDPC_DATA.h>
#include <_KTIMER_TABLE.h>
#include <_KGATE.h>
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

//0xaf00 bytes (sizeof)
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
    ULONGLONG MsrIa32TsxCtrl;                                               //0x2d00
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
    ULONGLONG PrcbPad31;                                                    //0x2da8
    struct _KPRCB* PairPrcb;                                                //0x2db0
    struct _KSTATIC_AFFINITY_BLOCK StaticAffinity;                          //0x2db8
    ULONGLONG PrcbPad35[5];                                                 //0x3058
    union _SLIST_HEADER InterruptObjectPool;                                //0x3080
    struct _RTL_HASH_TABLE* DpcRuntimeHistoryHashTable;                     //0x3090
    struct _KDPC* DpcRuntimeHistoryHashTableCleanupDpc;                     //0x3098
    VOID (*CurrentDpcRoutine)(struct _KDPC* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x30a0
    ULONGLONG CurrentDpcRuntimeHistoryCached;                               //0x30a8
    ULONGLONG CurrentDpcStartTime;                                          //0x30b0
    ULONGLONG PrcbPad41[1];                                                 //0x30b8
    struct _KDPC_DATA DpcData[2];                                           //0x30c0
    VOID* DpcStack;                                                         //0x3110
    LONG MaximumDpcQueueDepth;                                              //0x3118
    ULONG DpcRequestRate;                                                   //0x311c
    ULONG MinimumDpcRate;                                                   //0x3120
    ULONG DpcLastCount;                                                     //0x3124
    UCHAR ThreadDpcEnable;                                                  //0x3128
    volatile UCHAR QuantumEnd;                                              //0x3129
    volatile UCHAR DpcRoutineActive;                                        //0x312a
    volatile UCHAR IdleSchedule;                                            //0x312b
    union
    {
        volatile LONG DpcRequestSummary;                                    //0x312c
        SHORT DpcRequestSlot[2];                                            //0x312c
        struct
        {
            SHORT NormalDpcState;                                           //0x312c
            SHORT ThreadDpcState;                                           //0x312e
        };
        struct
        {
            ULONG DpcNormalProcessingActive:1;                              //0x312c
            ULONG DpcNormalProcessingRequested:1;                           //0x312c
            ULONG DpcNormalThreadSignal:1;                                  //0x312c
            ULONG DpcNormalTimerExpiration:1;                               //0x312c
            ULONG DpcNormalDpcPresent:1;                                    //0x312c
            ULONG DpcNormalLocalInterrupt:1;                                //0x312c
            ULONG DpcNormalSpare:10;                                        //0x312c
            ULONG DpcThreadActive:1;                                        //0x312c
            ULONG DpcThreadRequested:1;                                     //0x312c
            ULONG DpcThreadSpare:14;                                        //0x312c
        };
    };
    ULONG PrcbPad93;                                                        //0x3130
    ULONG LastTick;                                                         //0x3134
    ULONG ClockInterrupts;                                                  //0x3138
    ULONG ReadyScanTick;                                                    //0x313c
    VOID* InterruptObject[256];                                             //0x3140
    struct _KTIMER_TABLE TimerTable;                                        //0x3940
    ULONG PrcbPad92[10];                                                    //0x7b58
    struct _KGATE DpcGate;                                                  //0x7b80
    VOID* PrcbPad52;                                                        //0x7b98
    struct _KDPC CallDpc;                                                   //0x7ba0
    LONG ClockKeepAlive;                                                    //0x7be0
    UCHAR PrcbPad60[2];                                                     //0x7be4
    union
    {
        struct
        {
            UCHAR NmiActive;                                                //0x7be6
            UCHAR MceActive;                                                //0x7be7
        };
        USHORT CombinedNmiMceActive;                                        //0x7be6
    };
    LONG DpcWatchdogPeriod;                                                 //0x7be8
    LONG DpcWatchdogCount;                                                  //0x7bec
    volatile LONG KeSpinLockOrdering;                                       //0x7bf0
    ULONG DpcWatchdogProfileCumulativeDpcThreshold;                         //0x7bf4
    VOID* CachedPtes;                                                       //0x7bf8
    struct _LIST_ENTRY WaitListHead;                                        //0x7c00
    ULONGLONG WaitLock;                                                     //0x7c10
    ULONG ReadySummary;                                                     //0x7c18
    LONG AffinitizedSelectionMask;                                          //0x7c1c
    ULONG QueueIndex;                                                       //0x7c20
    ULONG PrcbPad75[2];                                                     //0x7c24
    ULONG DpcWatchdogSequenceNumber;                                        //0x7c2c
    struct _KDPC TimerExpirationDpc;                                        //0x7c30
    struct _RTL_RB_TREE ScbQueue;                                           //0x7c70
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x7c80
    ULONG InterruptCount;                                                   //0x7e80
    ULONG KernelTime;                                                       //0x7e84
    ULONG UserTime;                                                         //0x7e88
    ULONG DpcTime;                                                          //0x7e8c
    ULONG InterruptTime;                                                    //0x7e90
    ULONG AdjustDpcThreshold;                                               //0x7e94
    UCHAR DebuggerSavedIRQL;                                                //0x7e98
    UCHAR GroupSchedulingOverQuota;                                         //0x7e99
    volatile UCHAR DeepSleep;                                               //0x7e9a
    UCHAR PrcbPad80;                                                        //0x7e9b
    ULONG DpcTimeCount;                                                     //0x7e9c
    ULONG DpcTimeLimit;                                                     //0x7ea0
    ULONG PeriodicCount;                                                    //0x7ea4
    ULONG PeriodicBias;                                                     //0x7ea8
    ULONG AvailableTime;                                                    //0x7eac
    ULONG KeExceptionDispatchCount;                                         //0x7eb0
    ULONG ReadyThreadCount;                                                 //0x7eb4
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x7eb8
    ULONGLONG StartCycles;                                                  //0x7ec0
    ULONGLONG TaggedCyclesStart;                                            //0x7ec8
    ULONGLONG TaggedCycles[3];                                              //0x7ed0
    ULONGLONG AffinitizedCycles;                                            //0x7ee8
    ULONGLONG ImportantCycles;                                              //0x7ef0
    ULONGLONG UnimportantCycles;                                            //0x7ef8
    ULONG DpcWatchdogProfileSingleDpcThreshold;                             //0x7f00
    volatile LONG MmSpinLockOrdering;                                       //0x7f04
    VOID* volatile CachedStack;                                             //0x7f08
    ULONG PageColor;                                                        //0x7f10
    ULONG NodeColor;                                                        //0x7f14
    ULONG NodeShiftedColor;                                                 //0x7f18
    ULONG SecondaryColorMask;                                               //0x7f1c
    UCHAR PrcbPad81[6];                                                     //0x7f20
    UCHAR ExceptionStackActive;                                             //0x7f26
    UCHAR TbFlushListActive;                                                //0x7f27
    VOID* ExceptionStack;                                                   //0x7f28
    ULONGLONG PrcbPad82[1];                                                 //0x7f30
    ULONGLONG CycleTime;                                                    //0x7f38
    ULONGLONG Cycles[4][2];                                                 //0x7f40
    ULONG CcFastMdlReadNoWait;                                              //0x7f80
    ULONG CcFastMdlReadWait;                                                //0x7f84
    ULONG CcFastMdlReadNotPossible;                                         //0x7f88
    ULONG CcMapDataNoWait;                                                  //0x7f8c
    ULONG CcMapDataWait;                                                    //0x7f90
    ULONG CcPinMappedDataCount;                                             //0x7f94
    ULONG CcPinReadNoWait;                                                  //0x7f98
    ULONG CcPinReadWait;                                                    //0x7f9c
    ULONG CcMdlReadNoWait;                                                  //0x7fa0
    ULONG CcMdlReadWait;                                                    //0x7fa4
    ULONG CcLazyWriteHotSpots;                                              //0x7fa8
    ULONG CcLazyWriteIos;                                                   //0x7fac
    ULONG CcLazyWritePages;                                                 //0x7fb0
    ULONG CcDataFlushes;                                                    //0x7fb4
    ULONG CcDataPages;                                                      //0x7fb8
    ULONG CcLostDelayedWrites;                                              //0x7fbc
    ULONG CcFastReadResourceMiss;                                           //0x7fc0
    ULONG CcCopyReadWaitMiss;                                               //0x7fc4
    ULONG CcFastMdlReadResourceMiss;                                        //0x7fc8
    ULONG CcMapDataNoWaitMiss;                                              //0x7fcc
    ULONG CcMapDataWaitMiss;                                                //0x7fd0
    ULONG CcPinReadNoWaitMiss;                                              //0x7fd4
    ULONG CcPinReadWaitMiss;                                                //0x7fd8
    ULONG CcMdlReadNoWaitMiss;                                              //0x7fdc
    ULONG CcMdlReadWaitMiss;                                                //0x7fe0
    ULONG CcReadAheadIos;                                                   //0x7fe4
    volatile LONG MmCacheTransitionCount;                                   //0x7fe8
    volatile LONG MmCacheReadCount;                                         //0x7fec
    volatile LONG MmCacheIoCount;                                           //0x7ff0
    ULONG PrcbPad91;                                                        //0x7ff4
    VOID* MmInternal;                                                       //0x7ff8
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x8000
    VOID* HyperPte;                                                         //0x8200
    struct _LIST_ENTRY ScbList;                                             //0x8208
    struct _KDPC ForceIdleDpc;                                              //0x8218
    struct _KDPC DpcWatchdogDpc;                                            //0x8258
    struct _KTIMER DpcWatchdogTimer;                                        //0x8298
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x82d8
    ULONG CacheCount;                                                       //0x8314
    volatile ULONG CachedCommit;                                            //0x8318
    volatile ULONG CachedResidentAvailable;                                 //0x831c
    VOID* WheaInfo;                                                         //0x8320
    VOID* EtwSupport;                                                       //0x8328
    VOID* ExSaPageArray;                                                    //0x8330
    ULONG KeAlignmentFixupCount;                                            //0x8338
    ULONG PrcbPad95;                                                        //0x833c
    union _SLIST_HEADER HypercallPageList;                                  //0x8340
    ULONGLONG* StatisticsPage;                                              //0x8350
    ULONGLONG GenerationTarget;                                             //0x8358
    ULONGLONG PrcbPad85[4];                                                 //0x8360
    VOID* HypercallCachedPages;                                             //0x8380
    VOID* VirtualApicAssist;                                                //0x8388
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x8390
    ULONG PackageId;                                                        //0x8438
    ULONG PrcbPad86;                                                        //0x843c
    ULONGLONG SharedReadyQueueMask;                                         //0x8440
    struct _KSHARED_READY_QUEUE* SharedReadyQueue;                          //0x8448
    ULONG SharedQueueScanOwner;                                             //0x8450
    ULONG ScanSiblingIndex;                                                 //0x8454
    ULONGLONG CoreProcessorSet;                                             //0x8458
    ULONGLONG ScanSiblingMask;                                              //0x8460
    ULONGLONG LLCMask;                                                      //0x8468
    ULONGLONG CacheProcessorMask[5];                                        //0x8470
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x8498
    VOID* ProfileEventIndexAddress;                                         //0x84a0
    VOID** DpcWatchdogProfile;                                              //0x84a8
    VOID** DpcWatchdogProfileCurrentEmptyCapture;                           //0x84b0
    VOID* SchedulerAssist;                                                  //0x84b8
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x84c0
    ULONGLONG PrcbPad94;                                                    //0x8578
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x8580
    UCHAR VendorString[13];                                                 //0x8590
    UCHAR PrcbPad100[3];                                                    //0x859d
    ULONGLONG FeatureBits;                                                  //0x85a0
    union _LARGE_INTEGER UpdateSignature;                                   //0x85a8
    ULONGLONG PteBitCache;                                                  //0x85b0
    ULONG PteBitOffset;                                                     //0x85b8
    ULONG PrcbPad105;                                                       //0x85bc
    struct _CONTEXT* Context;                                               //0x85c0
    ULONG ContextFlagsInit;                                                 //0x85c8
    ULONG PrcbPad115;                                                       //0x85cc
    struct _XSAVE_AREA* ExtendedState;                                      //0x85d0
    VOID* IsrStack;                                                         //0x85d8
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x85e0
    ULONGLONG PrcbPad110;                                                   //0x8730
    struct
    {
        ULONG UpdateCycle;                                                  //0x8738
        union
        {
            SHORT PairLocal;                                                //0x873c
            struct
            {
                UCHAR PairLocalLow;                                         //0x873c
                UCHAR PairLocalForceStibp:1;                                //0x873d
                UCHAR Reserved:4;                                           //0x873d
                UCHAR Frozen:1;                                             //0x873d
                UCHAR ForceUntrusted:1;                                     //0x873d
                UCHAR SynchIpi:1;                                           //0x873d
            };
        };
        union
        {
            SHORT PairRemote;                                               //0x873e
            struct
            {
                UCHAR PairRemoteLow;                                        //0x873e
                UCHAR Reserved2;                                            //0x873f
            };
        };
        UCHAR Trace[24];                                                    //0x8740
        ULONGLONG LocalDomain;                                              //0x8758
        ULONGLONG RemoteDomain;                                             //0x8760
        struct _KTHREAD* Thread;                                            //0x8768
    } StibpPairingTrace;                                                    //0x8738
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;                           //0x8770
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;                        //0x8778
    struct _KDPC AbDpc;                                                     //0x8780
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;               //0x87c0
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;              //0x8814
    struct _KSECURE_FAULT_INFORMATION SecureFault;                          //0x8868
    ULONGLONG PrcbPad120;                                                   //0x8878
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;                      //0x8880
    ULONGLONG PrcbPad125[2];                                                //0x8af0
    ULONG TimerExpirationTraceCount;                                        //0x8b00
    ULONG PrcbPad127;                                                       //0x8b04
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];               //0x8b08
    ULONGLONG PrcbPad128[7];                                                //0x8c08
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x8c40
    ULONGLONG PrcbPad130[7];                                                //0x8c48
    struct _MACHINE_CHECK_CONTEXT McheckContext[2];                         //0x8c80
    ULONGLONG PrcbPad134[4];                                                //0x8d20
    struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];                        //0x8d40
    ULONGLONG PrcbPad134a[4];                                               //0x8da0
    UCHAR PrcbPad138[128];                                                  //0x8dc0
    UCHAR PrcbPad138a[64];                                                  //0x8e40
    ULONGLONG KernelDirectoryTableBase;                                     //0x8e80
    ULONGLONG RspBaseShadow;                                                //0x8e88
    ULONGLONG UserRspShadow;                                                //0x8e90
    ULONG ShadowFlags;                                                      //0x8e98
    ULONG PrcbPad138b;                                                      //0x8e9c
    ULONGLONG PrcbPad138c;                                                  //0x8ea0
    USHORT PrcbPad138d;                                                     //0x8ea8
    USHORT VerwSelector;                                                    //0x8eaa
    ULONG DbgMceNestingLevel;                                               //0x8eac
    ULONG DbgMceFlags;                                                      //0x8eb0
    ULONG PrcbPad139b;                                                      //0x8eb4
    ULONGLONG PrcbPad140[505];                                              //0x8eb8
    ULONGLONG PrcbPad140a[8];                                               //0x9e80
    ULONGLONG PrcbPad141[504];                                              //0x9ec0
    UCHAR PrcbPad141a[64];                                                  //0xae80
    struct _REQUEST_MAILBOX RequestMailbox[1];                              //0xaec0
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD

