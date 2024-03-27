#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPRIORITY_STATE.h>
#include <_KSCHEDULER_SUBNODE.h>
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
#include <_KSOFTWARE_INTERRUPT_BATCH.h>
#include <_SLIST_HEADER.h>
#include <_RTL_HASH_TABLE.h>
#include <_KDPC.h>
#include <_KDPC_DATA.h>
#include <_KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO.h>
#include <_KTIMER_TABLE.h>
#include <_KGATE.h>
#include <_LIST_ENTRY.h>
#include <_RTL_RB_TREE.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_CACHE_DESCRIPTOR.h>
#include <_KAFFINITY_EX.h>
#include <_KSHARED_READY_QUEUE.h>
#include <_KCORE_CONTROL_BLOCK.h>
#include <_PROCESSOR_PROFILE_CONTROL_AREA.h>
#include <_SYNCH_COUNTERS.h>
#include <_FILESYSTEM_DISK_COUNTERS.h>
#include <_CONTEXT.h>
#include <_XSAVE_AREA.h>
#include <_KENTROPY_TIMING_STATE.h>
#include <_IOP_IRP_STACK_PROFILER.h>
#include <_KSECURE_FAULT_INFORMATION.h>
#include <_KTIMER_EXPIRATION_TRACE.h>
#include <_KCLOCK_TIMER_STATE.h>
#include <_REQUEST_MAILBOX.h>
#include <_MACHINE_CHECK_CONTEXT.h>
#include <_KLOCK_QUEUE_HANDLE.h>

//0xbf00 bytes (sizeof)
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
    union _KPRIORITY_STATE* PriorityState;                                  //0x38
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
    struct _KSCHEDULER_SUBNODE* SchedulerSubNode;                           //0xc0
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
    struct _KSOFTWARE_INTERRUPT_BATCH DeferredDispatchInterrupts;           //0x31d8
    ULONGLONG PrcbPad35[3];                                                 //0x32e8
    union _SLIST_HEADER InterruptObjectPool;                                //0x3300
    struct _RTL_HASH_TABLE* DpcRuntimeHistoryHashTable;                     //0x3310
    struct _KDPC* DpcRuntimeHistoryHashTableCleanupDpc;                     //0x3318
    VOID (*CurrentDpcRoutine)(struct _KDPC* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x3320
    ULONGLONG CurrentDpcRuntimeHistoryCached;                               //0x3328
    ULONGLONG CurrentDpcStartTime;                                          //0x3330
    struct _KTHREAD* DpcDelegateThread;                                     //0x3338
    struct _KDPC_DATA DpcData[2];                                           //0x3340
    VOID* DpcStack;                                                         //0x33a0
    LONG MaximumDpcQueueDepth;                                              //0x33a8
    ULONG DpcRequestRate;                                                   //0x33ac
    ULONG MinimumDpcRate;                                                   //0x33b0
    ULONG DpcLastCount;                                                     //0x33b4
    UCHAR ThreadDpcEnable;                                                  //0x33b8
    volatile UCHAR QuantumEnd;                                              //0x33b9
    volatile UCHAR DpcRoutineActive;                                        //0x33ba
    volatile UCHAR IdleSchedule;                                            //0x33bb
    union
    {
        volatile LONG DpcRequestSummary;                                    //0x33bc
        SHORT DpcRequestSlot[2];                                            //0x33bc
        struct
        {
            SHORT NormalDpcState;                                           //0x33bc
            SHORT ThreadDpcState;                                           //0x33be
        };
        struct
        {
            ULONG DpcNormalProcessingActive:1;                              //0x33bc
            ULONG DpcNormalProcessingRequested:1;                           //0x33bc
            ULONG DpcNormalThreadSignal:1;                                  //0x33bc
            ULONG DpcNormalTimerExpiration:1;                               //0x33bc
            ULONG DpcNormalDpcPresent:1;                                    //0x33bc
            ULONG DpcNormalLocalInterrupt:1;                                //0x33bc
            ULONG DpcNormalPriorityAntiStarvation:1;                        //0x33bc
            ULONG DpcNormalSwapToDpcDelegate:1;                             //0x33bc
            ULONG DpcNormalSpare:8;                                         //0x33bc
            ULONG DpcThreadActive:1;                                        //0x33bc
            ULONG DpcThreadRequested:1;                                     //0x33bc
            ULONG DpcThreadSpare:14;                                        //0x33bc
        };
    };
    ULONG LastTick;                                                         //0x33c0
    ULONG ClockInterrupts;                                                  //0x33c4
    ULONG ReadyScanTick;                                                    //0x33c8
    ULONG SingleDpcSoftTimeLimitTicks;                                      //0x33cc
    struct _KSINGLE_DPC_SOFT_TIMEOUT_EVENT_INFO* SingleDpcSoftTimeoutEventInfo; //0x33d0
    ULONG CumulativeDpcSoftTimeLimitTicks;                                  //0x33d8
    ULONG PrcbPad93[9];                                                     //0x33dc
    VOID* InterruptObject[256];                                             //0x3400
    struct _KTIMER_TABLE TimerTable;                                        //0x3c00
    ULONG PrcbPad92[10];                                                    //0x7e18
    struct _KGATE DpcGate;                                                  //0x7e40
    VOID* PrcbPad52;                                                        //0x7e58
    struct _KDPC CallDpc;                                                   //0x7e60
    LONG ClockKeepAlive;                                                    //0x7ea0
    UCHAR PrcbPad60[2];                                                     //0x7ea4
    union
    {
        struct
        {
            UCHAR NmiActive;                                                //0x7ea6
            UCHAR MceActive;                                                //0x7ea7
        };
        USHORT CombinedNmiMceActive;                                        //0x7ea6
    };
    LONG DpcWatchdogPeriodTicks;                                            //0x7ea8
    LONG DpcWatchdogCount;                                                  //0x7eac
    volatile LONG KeSpinLockOrdering;                                       //0x7eb0
    ULONG DpcWatchdogProfileCumulativeDpcThresholdTicks;                    //0x7eb4
    VOID* CachedPtes;                                                       //0x7eb8
    struct _LIST_ENTRY WaitListHead;                                        //0x7ec0
    ULONGLONG WaitLock;                                                     //0x7ed0
    ULONG ReadySummary;                                                     //0x7ed8
    LONG AffinitizedSelectionMask;                                          //0x7edc
    ULONG QueueIndex;                                                       //0x7ee0
    ULONG NormalPriorityQueueIndex;                                         //0x7ee4
    ULONG NormalPriorityReadyScanTick;                                      //0x7ee8
    ULONG DpcWatchdogSequenceNumber;                                        //0x7eec
    struct _KDPC TimerExpirationDpc;                                        //0x7ef0
    struct _RTL_RB_TREE ScbQueue;                                           //0x7f30
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x7f40
    ULONG InterruptCount;                                                   //0x8140
    ULONG KernelTime;                                                       //0x8144
    ULONG UserTime;                                                         //0x8148
    ULONG DpcTime;                                                          //0x814c
    ULONG InterruptTime;                                                    //0x8150
    ULONG AdjustDpcThreshold;                                               //0x8154
    UCHAR DebuggerSavedIRQL;                                                //0x8158
    UCHAR GroupSchedulingOverQuota;                                         //0x8159
    volatile UCHAR DeepSleep;                                               //0x815a
    UCHAR PrcbPad80;                                                        //0x815b
    ULONG DpcTimeCount;                                                     //0x815c
    ULONG DpcTimeLimitTicks;                                                //0x8160
    ULONG PeriodicCount;                                                    //0x8164
    ULONG PeriodicBias;                                                     //0x8168
    ULONG AvailableTime;                                                    //0x816c
    ULONG KeExceptionDispatchCount;                                         //0x8170
    ULONG ReadyThreadCount;                                                 //0x8174
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x8178
    ULONGLONG StartCycles;                                                  //0x8180
    ULONGLONG TaggedCycles[4];                                              //0x8188
    ULONGLONG AffinitizedCycles;                                            //0x81a8
    ULONGLONG* CyclesByThreadType;                                          //0x81b0
    ULONG CpuCycleScalingFactor;                                            //0x81b8
    USHORT PerformanceScoreByClass[8];                                      //0x81bc
    USHORT EfficiencyScoreByClass[8];                                       //0x81cc
    ULONG PrcbPad83[25];                                                    //0x81dc
    ULONG DpcWatchdogProfileSingleDpcThresholdTicks;                        //0x8240
    LONG PrcbPad82;                                                         //0x8244
    VOID* volatile CachedStack;                                             //0x8248
    ULONG PageColor;                                                        //0x8250
    ULONG NodeColor;                                                        //0x8254
    ULONG NodeShiftedColor;                                                 //0x8258
    ULONG SecondaryColorMask;                                               //0x825c
    UCHAR PrcbPad81[5];                                                     //0x8260
    UCHAR SystemWorkKickInProgress;                                         //0x8265
    UCHAR ExceptionStackActive;                                             //0x8266
    UCHAR TbFlushListActive;                                                //0x8267
    VOID* ExceptionStack;                                                   //0x8268
    volatile LONGLONG MmSpinLockOrdering;                                   //0x8270
    ULONGLONG CycleTime;                                                    //0x8278
    ULONGLONG Cycles[4][2];                                                 //0x8280
    ULONG CcFastMdlReadNoWait;                                              //0x82c0
    ULONG CcFastMdlReadWait;                                                //0x82c4
    ULONG CcFastMdlReadNotPossible;                                         //0x82c8
    ULONG CcMapDataNoWait;                                                  //0x82cc
    ULONG CcMapDataWait;                                                    //0x82d0
    ULONG CcPinMappedDataCount;                                             //0x82d4
    ULONG CcPinReadNoWait;                                                  //0x82d8
    ULONG CcPinReadWait;                                                    //0x82dc
    ULONG CcMdlReadNoWait;                                                  //0x82e0
    ULONG CcMdlReadWait;                                                    //0x82e4
    ULONG CcLazyWriteHotSpots;                                              //0x82e8
    ULONG CcLazyWriteIos;                                                   //0x82ec
    ULONG CcLazyWritePages;                                                 //0x82f0
    ULONG CcDataFlushes;                                                    //0x82f4
    ULONG CcDataPages;                                                      //0x82f8
    ULONG CcLostDelayedWrites;                                              //0x82fc
    ULONG CcFastReadResourceMiss;                                           //0x8300
    ULONG CcCopyReadWaitMiss;                                               //0x8304
    ULONG CcFastMdlReadResourceMiss;                                        //0x8308
    ULONG CcMapDataNoWaitMiss;                                              //0x830c
    ULONG CcMapDataWaitMiss;                                                //0x8310
    ULONG CcPinReadNoWaitMiss;                                              //0x8314
    ULONG CcPinReadWaitMiss;                                                //0x8318
    ULONG CcMdlReadNoWaitMiss;                                              //0x831c
    ULONG CcMdlReadWaitMiss;                                                //0x8320
    ULONG CcReadAheadIos;                                                   //0x8324
    volatile LONG MmCacheTransitionCount;                                   //0x8328
    volatile LONG MmCacheReadCount;                                         //0x832c
    volatile LONG MmCacheIoCount;                                           //0x8330
    ULONG PrcbPad91;                                                        //0x8334
    VOID* MmInternal;                                                       //0x8338
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x8340
    ULONGLONG PrcbPad96[2];                                                 //0x8570
    VOID* HyperPte;                                                         //0x8580
    struct _LIST_ENTRY ScbList;                                             //0x8588
    struct _KDPC ForceIdleDpc;                                              //0x8598
    struct _KDPC DpcWatchdogDpc;                                            //0x85d8
    struct _KTIMER DpcWatchdogTimer;                                        //0x8618
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x8658
    ULONG CacheCount;                                                       //0x8694
    volatile ULONG CachedCommit;                                            //0x8698
    volatile ULONG CachedResidentAvailable;                                 //0x869c
    VOID* WheaInfo;                                                         //0x86a0
    VOID* EtwSupport;                                                       //0x86a8
    VOID* ExSaPageArray;                                                    //0x86b0
    ULONG KeAlignmentFixupCount;                                            //0x86b8
    ULONG PrcbPad95;                                                        //0x86bc
    union _SLIST_HEADER HypercallPageList;                                  //0x86c0
    ULONGLONG* StatisticsPage;                                              //0x86d0
    ULONGLONG GenerationTarget;                                             //0x86d8
    ULONGLONG PrcbPad85[4];                                                 //0x86e0
    VOID* HypercallCachedPages;                                             //0x8700
    VOID* VirtualApicAssist;                                                //0x8708
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x8710
    ULONG PackageId;                                                        //0x8818
    ULONG DieId;                                                            //0x881c
    ULONG PrcbPad87[8];                                                     //0x8820
    ULONGLONG SharedReadyQueueMask;                                         //0x8840
    struct _KSHARED_READY_QUEUE* SharedReadyQueue;                          //0x8848
    ULONG SharedQueueScanOwner;                                             //0x8850
    ULONG ScanSiblingIndex;                                                 //0x8854
    struct _KCORE_CONTROL_BLOCK* CoreControlBlock;                          //0x8858
    ULONGLONG CoreProcessorSet;                                             //0x8860
    ULONGLONG ScanSiblingMask;                                              //0x8868
    ULONGLONG LLCMask;                                                      //0x8870
    ULONGLONG GroupModuleProcessorSet;                                      //0x8878
    ULONGLONG PrcbPad97[3];                                                 //0x8880
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x8898
    VOID* ProfileEventIndexAddress;                                         //0x88a0
    VOID** DpcWatchdogProfile;                                              //0x88a8
    VOID** DpcWatchdogProfileCurrentEmptyCapture;                           //0x88b0
    VOID* SchedulerAssist;                                                  //0x88b8
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x88c0
    ULONGLONG PrcbPad94;                                                    //0x8978
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x8980
    UCHAR VendorString[13];                                                 //0x8990
    UCHAR PrcbPad100[3];                                                    //0x899d
    ULONGLONG FeatureBits;                                                  //0x89a0
    union _LARGE_INTEGER UpdateSignature;                                   //0x89a8
    ULONGLONG PteBitCache;                                                  //0x89b0
    ULONG PteBitOffset;                                                     //0x89b8
    ULONG PrcbPad105;                                                       //0x89bc
    struct _CONTEXT* Context;                                               //0x89c0
    ULONG ContextFlagsInit;                                                 //0x89c8
    ULONG PrcbPad115;                                                       //0x89cc
    struct _XSAVE_AREA* ExtendedState;                                      //0x89d0
    VOID* IsrStack;                                                         //0x89d8
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x89e0
    struct
    {
        ULONG UpdateCycle;                                                  //0x8b38
        union
        {
            SHORT PairLocal;                                                //0x8b3c
            struct
            {
                UCHAR PairLocalLow;                                         //0x8b3c
                UCHAR PairLocalForceStibp:1;                                //0x8b3d
                UCHAR Reserved:4;                                           //0x8b3d
                UCHAR Frozen:1;                                             //0x8b3d
                UCHAR ForceUntrusted:1;                                     //0x8b3d
                UCHAR SynchIpi:1;                                           //0x8b3d
            };
        };
        union
        {
            SHORT PairRemote;                                               //0x8b3e
            struct
            {
                UCHAR PairRemoteLow;                                        //0x8b3e
                UCHAR Reserved2;                                            //0x8b3f
            };
        };
        UCHAR Trace[24];                                                    //0x8b40
        ULONGLONG LocalDomain;                                              //0x8b58
        ULONGLONG RemoteDomain;                                             //0x8b60
        struct _KTHREAD* Thread;                                            //0x8b68
    } StibpPairingTrace;                                                    //0x8b38
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;                           //0x8b70
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;                        //0x8b78
    struct _KDPC AbDpc;                                                     //0x8b80
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;               //0x8bc0
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;              //0x8c14
    struct _KSECURE_FAULT_INFORMATION SecureFault;                          //0x8c68
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;                      //0x8c80
    ULONGLONG PrcbPad125[2];                                                //0x8f30
    ULONG TimerExpirationTraceCount;                                        //0x8f40
    ULONG PrcbPad127;                                                       //0x8f44
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];               //0x8f48
    ULONGLONG PrcbPad128[7];                                                //0x9048
    struct _KCLOCK_TIMER_STATE ClockTimerState;                             //0x9080
    UCHAR PrcbPad129[40];                                                   //0x9598
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x95c0
    ULONGLONG PrcbPad130[7];                                                //0x95c8
    struct _MACHINE_CHECK_CONTEXT McheckContext[2];                         //0x9600
    ULONGLONG TransitionShadowStack;                                        //0x96a0
    ULONGLONG KernelShadowStackInitial;                                     //0x96a8
    ULONGLONG* IstShadowStacksTable;                                        //0x96b0
    VOID* CachedShadowStack;                                                //0x96b8
    struct _KLOCK_QUEUE_HANDLE SelfmapLockHandle[4];                        //0x96c0
    ULONGLONG PrcbPad134a[4];                                               //0x9720
    struct _KAFFINITY_EX DieProcessorSet;                                   //0x9740
    UCHAR CoresPerPhysicalDie;                                              //0x9848
    UCHAR LogicalProcessorsPerModule;                                       //0x9849
    UCHAR PrcbPad136a[6];                                                   //0x984a
    struct _KDPC FreezeForRecoveryDpc;                                      //0x9850
    struct _KAFFINITY_EX ModuleProcessorSet;                                //0x9890
    struct _KCORE_CONTROL_BLOCK LocalCoreControlBlock;                      //0x9998
    UCHAR PrcbPad138[1120];                                                 //0x99e0
    UCHAR PrcbPad138a[64];                                                  //0x9e40
    ULONGLONG KernelDirectoryTableBase;                                     //0x9e80
    ULONGLONG RspBaseShadow;                                                //0x9e88
    ULONGLONG UserRspShadow;                                                //0x9e90
    ULONG ShadowFlags;                                                      //0x9e98
    ULONG PrcbPad138b;                                                      //0x9e9c
    ULONGLONG PrcbPad138c;                                                  //0x9ea0
    USHORT PrcbPad138d;                                                     //0x9ea8
    USHORT VerwSelector;                                                    //0x9eaa
    ULONG DbgMceNestingLevel;                                               //0x9eac
    ULONG DbgMceFlags;                                                      //0x9eb0
    ULONG PrcbPad139b;                                                      //0x9eb4
    struct _KAFFINITY_EX CacheProcessorSet[5];                              //0x9eb8
    ULONGLONG PrcbPad140[340];                                              //0xa3e0
    ULONGLONG PrcbPad140a[8];                                               //0xae80
    ULONGLONG PrcbPad141[504];                                              //0xaec0
    UCHAR PrcbPad141a[64];                                                  //0xbe80
    struct _REQUEST_MAILBOX RequestMailbox[1];                              //0xbec0
};
/* Used in */
// _KCORE_CONTROL_BLOCK
// _KPCR
// _KPRCB
// _KTHREAD

