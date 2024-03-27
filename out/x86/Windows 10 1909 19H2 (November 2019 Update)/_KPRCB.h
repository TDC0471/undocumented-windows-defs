#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KNODE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_KPRCBFLAG.h>
#include <_LARGE_INTEGER.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_GENERAL_LOOKASIDE_POOL.h>
#include <_KDPC_DATA.h>
#include <_KGATE.h>
#include <_KTIMER_TABLE.h>
#include <_KDPC.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_LIST_ENTRY.h>
#include <_RTL_RB_TREE.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_SLIST_HEADER.h>
#include <_CACHE_DESCRIPTOR.h>
#include <_KAFFINITY_EX.h>
#include <_KSHARED_READY_QUEUE.h>
#include <_PROCESSOR_PROFILE_CONTROL_AREA.h>
#include <_SYNCH_COUNTERS.h>
#include <_FILESYSTEM_DISK_COUNTERS.h>
#include <_CONTEXT.h>
#include <_XSAVE_AREA.h>
#include <_KENTROPY_TIMING_STATE.h>
#include <_KINTERRUPT.h>
#include <_IOP_IRP_STACK_PROFILER.h>
#include <_KTIMER_EXPIRATION_TRACE.h>
#include <_XSAVE_AREA_HEADER.h>
#include <_REQUEST_MAILBOX.h>

//0x5f00 bytes (sizeof)
struct _KPRCB
{
    USHORT MinorVersion;                                                    //0x0
    USHORT MajorVersion;                                                    //0x2
    struct _KTHREAD* CurrentThread;                                         //0x4
    struct _KTHREAD* NextThread;                                            //0x8
    struct _KTHREAD* IdleThread;                                            //0xc
    UCHAR LegacyNumber;                                                     //0x10
    UCHAR NestingLevel;                                                     //0x11
    USHORT BuildType;                                                       //0x12
    CHAR CpuType;                                                           //0x14
    CHAR CpuID;                                                             //0x15
    union
    {
        USHORT CpuStep;                                                     //0x16
        struct
        {
            UCHAR CpuStepping;                                              //0x16
            UCHAR CpuModel;                                                 //0x17
        };
    };
    struct _KPROCESSOR_STATE ProcessorState;                                //0x18
    struct _KNODE* ParentNode;                                              //0x338
    CHAR* PriorityState;                                                    //0x33c
    ULONG KernelReserved[14];                                               //0x340
    ULONG HalReserved[16];                                                  //0x378
    ULONG CFlushSize;                                                       //0x3b8
    UCHAR CoresPerPhysicalProcessor;                                        //0x3bc
    UCHAR LogicalProcessorsPerCore;                                         //0x3bd
    UCHAR CpuVendor;                                                        //0x3be
    UCHAR PrcbPad0[1];                                                      //0x3bf
    ULONG MHz;                                                              //0x3c0
    UCHAR GroupIndex;                                                       //0x3c4
    UCHAR Group;                                                            //0x3c5
    UCHAR PrcbPad05[2];                                                     //0x3c6
    ULONG GroupSetMember;                                                   //0x3c8
    ULONG Number;                                                           //0x3cc
    UCHAR ClockOwner;                                                       //0x3d0
    union
    {
        UCHAR PendingTickFlags;                                             //0x3d1
        struct
        {
            UCHAR PendingTick:1;                                            //0x3d1
            UCHAR PendingBackupTick:1;                                      //0x3d1
        };
    };
    UCHAR PrcbPad10[70];                                                    //0x3d2
    struct _KSPIN_LOCK_QUEUE LockQueue[17];                                 //0x418
    ULONG InterruptCount;                                                   //0x4a0
    ULONG KernelTime;                                                       //0x4a4
    ULONG UserTime;                                                         //0x4a8
    ULONG DpcTime;                                                          //0x4ac
    ULONG DpcTimeCount;                                                     //0x4b0
    ULONG InterruptTime;                                                    //0x4b4
    ULONG AdjustDpcThreshold;                                               //0x4b8
    ULONG PageColor;                                                        //0x4bc
    UCHAR DebuggerSavedIRQL;                                                //0x4c0
    UCHAR NodeColor;                                                        //0x4c1
    UCHAR DeepSleep;                                                        //0x4c2
    UCHAR TbFlushListActive;                                                //0x4c3
    VOID* volatile CachedStack;                                             //0x4c4
    ULONG NodeShiftedColor;                                                 //0x4c8
    ULONG SecondaryColorMask;                                               //0x4cc
    ULONG DpcTimeLimit;                                                     //0x4d0
    VOID* MmInternal;                                                       //0x4d4
    union _KPRCBFLAG PrcbFlags;                                             //0x4d8
    VOID* SchedulerAssist;                                                  //0x4dc
    ULONG CcFastReadNoWait;                                                 //0x4e0
    ULONG CcFastReadWait;                                                   //0x4e4
    ULONG CcFastReadNotPossible;                                            //0x4e8
    ULONG CcCopyReadNoWait;                                                 //0x4ec
    ULONG CcCopyReadWait;                                                   //0x4f0
    ULONG CcCopyReadNoWaitMiss;                                             //0x4f4
    volatile LONG MmSpinLockOrdering;                                       //0x4f8
    volatile LONG IoReadOperationCount;                                     //0x4fc
    volatile LONG IoWriteOperationCount;                                    //0x500
    volatile LONG IoOtherOperationCount;                                    //0x504
    union _LARGE_INTEGER IoReadTransferCount;                               //0x508
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x510
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x518
    ULONG CcFastMdlReadNoWait;                                              //0x520
    ULONG CcFastMdlReadWait;                                                //0x524
    ULONG CcFastMdlReadNotPossible;                                         //0x528
    ULONG CcMapDataNoWait;                                                  //0x52c
    ULONG CcMapDataWait;                                                    //0x530
    ULONG CcPinMappedDataCount;                                             //0x534
    ULONG CcPinReadNoWait;                                                  //0x538
    ULONG CcPinReadWait;                                                    //0x53c
    ULONG CcMdlReadNoWait;                                                  //0x540
    ULONG CcMdlReadWait;                                                    //0x544
    ULONG CcLazyWriteHotSpots;                                              //0x548
    ULONG CcLazyWriteIos;                                                   //0x54c
    ULONG CcLazyWritePages;                                                 //0x550
    ULONG CcDataFlushes;                                                    //0x554
    ULONG CcDataPages;                                                      //0x558
    ULONG CcLostDelayedWrites;                                              //0x55c
    ULONG CcFastReadResourceMiss;                                           //0x560
    ULONG CcCopyReadWaitMiss;                                               //0x564
    ULONG CcFastMdlReadResourceMiss;                                        //0x568
    ULONG CcMapDataNoWaitMiss;                                              //0x56c
    ULONG CcMapDataWaitMiss;                                                //0x570
    ULONG CcPinReadNoWaitMiss;                                              //0x574
    ULONG CcPinReadWaitMiss;                                                //0x578
    ULONG CcMdlReadNoWaitMiss;                                              //0x57c
    ULONG CcMdlReadWaitMiss;                                                //0x580
    ULONG CcReadAheadIos;                                                   //0x584
    ULONG KeAlignmentFixupCount;                                            //0x588
    ULONG KeExceptionDispatchCount;                                         //0x58c
    ULONG KeSystemCalls;                                                    //0x590
    ULONG AvailableTime;                                                    //0x594
    ULONG PrcbPad22[2];                                                     //0x598
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x5a0
    struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];              //0x620
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0xf20
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0x1820
    volatile LONG PacketBarrier;                                            //0x2120
    volatile LONG ReverseStall;                                             //0x2124
    VOID* IpiFrame;                                                         //0x2128
    UCHAR PrcbPad3[52];                                                     //0x212c
    VOID* volatile CurrentPacket[3];                                        //0x2160
    volatile ULONG TargetSet;                                               //0x216c
    VOID (* volatileWorkerRoutine)(VOID* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x2170
    volatile ULONG IpiFrozen;                                               //0x2174
    UCHAR PrcbPad4[40];                                                     //0x2178
    volatile ULONG RequestSummary;                                          //0x21a0
    volatile LONG TargetCount;                                              //0x21a4
    ULONGLONG LastNonHrTimerExpiration;                                     //0x21a8
    ULONGLONG TrappedSecurityDomain;                                        //0x21b0
    union
    {
        UCHAR BpbState;                                                     //0x21b8
        struct
        {
            UCHAR BpbCpuIdle:1;                                             //0x21b8
            UCHAR BpbFlushRsbOnTrap:1;                                      //0x21b8
            UCHAR BpbIbpbOnReturn:1;                                        //0x21b8
            UCHAR BpbIbpbOnTrap:1;                                          //0x21b8
            UCHAR BpbReserved:4;                                            //0x21b8
        };
    };
    union
    {
        UCHAR BpbFeatures;                                                  //0x21b9
        struct
        {
            UCHAR BpbClearOnIdle:1;                                         //0x21b9
            UCHAR BpbEnabled:1;                                             //0x21b9
            UCHAR BpbSmep:1;                                                //0x21b9
            UCHAR BpbFeaturesReserved:5;                                    //0x21b9
        };
    };
    UCHAR BpbCurrentSpecCtrl;                                               //0x21ba
    UCHAR BpbKernelSpecCtrl;                                                //0x21bb
    UCHAR BpbNmiSpecCtrl;                                                   //0x21bc
    UCHAR BpbUserSpecCtrl;                                                  //0x21bd
    UCHAR PrcbPad49[2];                                                     //0x21be
    ULONG ProcessorSignature;                                               //0x21c0
    ULONG ProcessorFlags;                                                   //0x21c4
    UCHAR PrcbPad50[8];                                                     //0x21c8
    ULONG InterruptLastCount;                                               //0x21d0
    ULONG InterruptRate;                                                    //0x21d4
    ULONG DeviceInterrupts;                                                 //0x21d8
    VOID* IsrDpcStats;                                                      //0x21dc
    struct _KDPC_DATA DpcData[2];                                           //0x21e0
    VOID* DpcStack;                                                         //0x2210
    LONG MaximumDpcQueueDepth;                                              //0x2214
    ULONG DpcRequestRate;                                                   //0x2218
    ULONG MinimumDpcRate;                                                   //0x221c
    ULONG DpcLastCount;                                                     //0x2220
    ULONG PrcbLock;                                                         //0x2224
    struct _KGATE DpcGate;                                                  //0x2228
    UCHAR IdleState;                                                        //0x2238
    volatile UCHAR QuantumEnd;                                              //0x2239
    volatile UCHAR DpcRoutineActive;                                        //0x223a
    volatile UCHAR IdleSchedule;                                            //0x223b
    union
    {
        volatile LONG DpcRequestSummary;                                    //0x223c
        SHORT DpcRequestSlot[2];                                            //0x223c
        struct
        {
            SHORT NormalDpcState;                                           //0x223c
            SHORT ThreadDpcState;                                           //0x223e
        };
        struct
        {
            ULONG DpcNormalProcessingActive:1;                              //0x223c
            ULONG DpcNormalProcessingRequested:1;                           //0x223c
            ULONG DpcNormalThreadSignal:1;                                  //0x223c
            ULONG DpcNormalTimerExpiration:1;                               //0x223c
            ULONG DpcNormalDpcPresent:1;                                    //0x223c
            ULONG DpcNormalLocalInterrupt:1;                                //0x223c
            ULONG DpcNormalSpare:10;                                        //0x223c
            ULONG DpcThreadActive:1;                                        //0x223c
            ULONG DpcThreadRequested:1;                                     //0x223c
            ULONG DpcThreadSpare:14;                                        //0x223c
        };
    };
    ULONG LastTimerHand;                                                    //0x2240
    ULONG LastTick;                                                         //0x2244
    ULONG PeriodicCount;                                                    //0x2248
    ULONG PeriodicBias;                                                     //0x224c
    ULONG ClockInterrupts;                                                  //0x2250
    ULONG ReadyScanTick;                                                    //0x2254
    UCHAR GroupSchedulingOverQuota;                                         //0x2258
    UCHAR ThreadDpcEnable;                                                  //0x2259
    UCHAR PrcbPad41[2];                                                     //0x225a
    struct _KTIMER_TABLE TimerTable;                                        //0x2260
    struct _KDPC CallDpc;                                                   //0x3aa0
    LONG ClockKeepAlive;                                                    //0x3ac0
    UCHAR PrcbPad6[4];                                                      //0x3ac4
    LONG DpcWatchdogPeriod;                                                 //0x3ac8
    LONG DpcWatchdogCount;                                                  //0x3acc
    volatile LONG KeSpinLockOrdering;                                       //0x3ad0
    ULONG DpcWatchdogProfileCumulativeDpcThreshold;                         //0x3ad4
    ULONG QueueIndex;                                                       //0x3ad8
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x3adc
    ULONG ReadySummary;                                                     //0x3ae0
    LONG AffinitizedSelectionMask;                                          //0x3ae4
    ULONG WaitLock;                                                         //0x3ae8
    struct _LIST_ENTRY WaitListHead;                                        //0x3aec
    ULONG ScbOffset;                                                        //0x3af4
    ULONG ReadyThreadCount;                                                 //0x3af8
    ULONGLONG StartCycles;                                                  //0x3b00
    ULONGLONG TaggedCyclesStart;                                            //0x3b08
    ULONGLONG TaggedCycles[2];                                              //0x3b10
    ULONGLONG GenerationTarget;                                             //0x3b20
    volatile ULONGLONG CycleTime;                                           //0x3b28
    ULONGLONG AffinitizedCycles;                                            //0x3b30
    ULONGLONG ImportantCycles;                                              //0x3b38
    ULONGLONG UnimportantCycles;                                            //0x3b40
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x3b48
    volatile ULONG HighCycleTime;                                           //0x3b50
    ULONGLONG Cycles[4][2];                                                 //0x3b58
    ULONG PrcbPad71[2];                                                     //0x3b98
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x3ba0
    VOID* ChainedInterruptList;                                             //0x3ca0
    LONG LookasideIrpFloat;                                                 //0x3ca4
    struct _RTL_RB_TREE ScbQueue;                                           //0x3ca8
    struct _LIST_ENTRY ScbList;                                             //0x3cb0
    volatile LONG MmPageFaultCount;                                         //0x3cb8
    volatile LONG MmCopyOnWriteCount;                                       //0x3cbc
    volatile LONG MmTransitionCount;                                        //0x3cc0
    volatile LONG MmCacheTransitionCount;                                   //0x3cc4
    volatile LONG MmDemandZeroCount;                                        //0x3cc8
    volatile LONG MmPageReadCount;                                          //0x3ccc
    volatile LONG MmPageReadIoCount;                                        //0x3cd0
    volatile LONG MmCacheReadCount;                                         //0x3cd4
    volatile LONG MmCacheIoCount;                                           //0x3cd8
    volatile LONG MmDirtyPagesWriteCount;                                   //0x3cdc
    volatile LONG MmDirtyWriteIoCount;                                      //0x3ce0
    volatile LONG MmMappedPagesWriteCount;                                  //0x3ce4
    volatile LONG MmMappedWriteIoCount;                                     //0x3ce8
    volatile ULONG CachedCommit;                                            //0x3cec
    volatile ULONG CachedResidentAvailable;                                 //0x3cf0
    VOID* HyperPte;                                                         //0x3cf4
    UCHAR PrcbPad8[4];                                                      //0x3cf8
    UCHAR VendorString[13];                                                 //0x3cfc
    UCHAR InitialApicId;                                                    //0x3d09
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0x3d0a
    UCHAR PrcbPad9[1];                                                      //0x3d0b
    ULONGLONG FeatureBits;                                                  //0x3d10
    union _LARGE_INTEGER UpdateSignature;                                   //0x3d18
    volatile ULONGLONG IsrTime;                                             //0x3d20
    ULONG PrcbPad90[2];                                                     //0x3d28
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x3d30
    struct _KDPC ForceIdleDpc;                                              //0x3ed8
    ULONG PrcbPad91[14];                                                    //0x3ef8
    ULONG DpcWatchdogProfileSingleDpcThreshold;                             //0x3f30
    struct _KDPC DpcWatchdogDpc;                                            //0x3f34
    struct _KTIMER DpcWatchdogTimer;                                        //0x3f58
    union _SLIST_HEADER HypercallPageList;                                  //0x3f80
    VOID* HypercallCachedPages;                                             //0x3f88
    VOID* VirtualApicAssist;                                                //0x3f8c
    ULONGLONG* StatisticsPage;                                              //0x3f90
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x3f94
    ULONG CacheCount;                                                       //0x3fd0
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x3fd4
    ULONG SharedReadyQueueMask;                                             //0x3fe0
    struct _KSHARED_READY_QUEUE* SharedReadyQueue;                          //0x3fe4
    ULONG SharedQueueScanOwner;                                             //0x3fe8
    ULONG CoreProcessorSet;                                                 //0x3fec
    ULONG ScanSiblingMask;                                                  //0x3ff0
    ULONG LLCMask;                                                          //0x3ff4
    ULONG CacheProcessorMask[5];                                            //0x3ff8
    ULONG ScanSiblingIndex;                                                 //0x400c
    VOID* WheaInfo;                                                         //0x4010
    VOID* EtwSupport;                                                       //0x4014
    union _SLIST_HEADER InterruptObjectPool;                                //0x4018
    VOID** DpcWatchdogProfile;                                              //0x4020
    VOID** DpcWatchdogProfileCurrentEmptyCapture;                           //0x4024
    ULONG PackageId;                                                        //0x4028
    ULONG PteBitCache;                                                      //0x402c
    ULONG PteBitOffset;                                                     //0x4030
    ULONG PrcbPad93;                                                        //0x4034
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x4038
    VOID* ProfileEventIndexAddress;                                         //0x403c
    struct _KDPC TimerExpirationDpc;                                        //0x4040
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x4060
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x4118
    struct _CONTEXT* Context;                                               //0x4128
    ULONG ContextFlagsInit;                                                 //0x412c
    struct _XSAVE_AREA* ExtendedState;                                      //0x4130
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x4134
    VOID* IsrStack;                                                         //0x425c
    struct _KINTERRUPT* VectorToInterruptObject[208];                       //0x4260
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;                           //0x45a0
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;                        //0x45a4
    struct _KDPC AbDpc;                                                     //0x45a8
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;               //0x45c8
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;              //0x461c
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];               //0x4670
    ULONG TimerExpirationTraceCount;                                        //0x4770
    VOID* ExSaPageArray;                                                    //0x4774
    struct _XSAVE_AREA_HEADER* ExtendedSupervisorState;                     //0x4778
    ULONG PrcbPad100[9];                                                    //0x477c
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;                      //0x47a0
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x48e0
    UCHAR PrcbPad[1532];                                                    //0x48e4
    ULONG KernelDirectoryTableBase;                                         //0x4ee0
    ULONG EspBaseShadow;                                                    //0x4ee4
    ULONG UserEspShadow;                                                    //0x4ee8
    ULONG ShadowFlags;                                                      //0x4eec
    ULONG UserDS;                                                           //0x4ef0
    ULONG UserES;                                                           //0x4ef4
    ULONG UserFS;                                                           //0x4ef8
    VOID* EspIretd;                                                         //0x4efc
    ULONG RestoreSegOption;                                                 //0x4f00
    ULONG SavedEsi;                                                         //0x4f04
    USHORT VerwSelector;                                                    //0x4f08
    USHORT PrcbShadowPad;                                                   //0x4f0a
    ULONG TaskSwitchCount;                                                  //0x4f0c
    ULONG DbgLogs[512];                                                     //0x4f10
    ULONG DbgCount;                                                         //0x5710
    ULONG PrcbPadRemainingPage[499];                                        //0x5714
    struct _REQUEST_MAILBOX RequestMailbox[1];                              //0x5ee0
};
/* Used in */
// _KPCR
// _KTHREAD
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

