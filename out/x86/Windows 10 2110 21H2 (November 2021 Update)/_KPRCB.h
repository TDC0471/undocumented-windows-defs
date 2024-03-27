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
#include <_RTL_HASH_TABLE.h>
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
    ULONGLONG PrcbPad94[1];                                                 //0x21a8
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
    ULONG LastTick;                                                         //0x2240
    ULONG PeriodicCount;                                                    //0x2244
    ULONG PeriodicBias;                                                     //0x2248
    ULONG ClockInterrupts;                                                  //0x224c
    ULONG ReadyScanTick;                                                    //0x2250
    UCHAR GroupSchedulingOverQuota;                                         //0x2254
    UCHAR ThreadDpcEnable;                                                  //0x2255
    UCHAR PrcbPad41[6];                                                     //0x2256
    struct _KTIMER_TABLE TimerTable;                                        //0x2260
    ULONG PrcbPad92[12];                                                    //0x3ab0
    struct _KDPC CallDpc;                                                   //0x3ae0
    LONG ClockKeepAlive;                                                    //0x3b00
    UCHAR PrcbPad6[4];                                                      //0x3b04
    LONG DpcWatchdogPeriod;                                                 //0x3b08
    LONG DpcWatchdogCount;                                                  //0x3b0c
    volatile LONG KeSpinLockOrdering;                                       //0x3b10
    ULONG DpcWatchdogProfileCumulativeDpcThreshold;                         //0x3b14
    ULONG QueueIndex;                                                       //0x3b18
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x3b1c
    ULONG ReadySummary;                                                     //0x3b20
    LONG AffinitizedSelectionMask;                                          //0x3b24
    ULONG WaitLock;                                                         //0x3b28
    struct _LIST_ENTRY WaitListHead;                                        //0x3b2c
    ULONG ScbOffset;                                                        //0x3b34
    ULONG ReadyThreadCount;                                                 //0x3b38
    ULONGLONG StartCycles;                                                  //0x3b40
    ULONGLONG TaggedCyclesStart;                                            //0x3b48
    ULONGLONG TaggedCycles[3];                                              //0x3b50
    volatile ULONGLONG CycleTime;                                           //0x3b68
    ULONGLONG AffinitizedCycles;                                            //0x3b70
    ULONGLONG ImportantCycles;                                              //0x3b78
    ULONGLONG UnimportantCycles;                                            //0x3b80
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x3b88
    volatile ULONG HighCycleTime;                                           //0x3b90
    ULONGLONG Cycles[4][2];                                                 //0x3b98
    ULONG PrcbPad71;                                                        //0x3bd8
    ULONG DpcWatchdogSequenceNumber;                                        //0x3bdc
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x3be0
    VOID* ChainedInterruptList;                                             //0x3ce0
    LONG LookasideIrpFloat;                                                 //0x3ce4
    struct _RTL_RB_TREE ScbQueue;                                           //0x3ce8
    struct _LIST_ENTRY ScbList;                                             //0x3cf0
    volatile LONG MmPageFaultCount;                                         //0x3cf8
    volatile LONG MmCopyOnWriteCount;                                       //0x3cfc
    volatile LONG MmTransitionCount;                                        //0x3d00
    volatile LONG MmCacheTransitionCount;                                   //0x3d04
    volatile LONG MmDemandZeroCount;                                        //0x3d08
    volatile LONG MmPageReadCount;                                          //0x3d0c
    volatile LONG MmPageReadIoCount;                                        //0x3d10
    volatile LONG MmCacheReadCount;                                         //0x3d14
    volatile LONG MmCacheIoCount;                                           //0x3d18
    volatile LONG MmDirtyPagesWriteCount;                                   //0x3d1c
    volatile LONG MmDirtyWriteIoCount;                                      //0x3d20
    volatile LONG MmMappedPagesWriteCount;                                  //0x3d24
    volatile LONG MmMappedWriteIoCount;                                     //0x3d28
    volatile ULONG CachedCommit;                                            //0x3d2c
    volatile ULONG CachedResidentAvailable;                                 //0x3d30
    VOID* HyperPte;                                                         //0x3d34
    UCHAR PrcbPad8[4];                                                      //0x3d38
    UCHAR VendorString[13];                                                 //0x3d3c
    UCHAR InitialApicId;                                                    //0x3d49
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0x3d4a
    UCHAR PrcbPad9[1];                                                      //0x3d4b
    ULONGLONG FeatureBits;                                                  //0x3d50
    union _LARGE_INTEGER UpdateSignature;                                   //0x3d58
    volatile ULONGLONG IsrTime;                                             //0x3d60
    ULONGLONG GenerationTarget;                                             //0x3d68
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x3d70
    struct _KDPC ForceIdleDpc;                                              //0x3f18
    ULONGLONG MsrIa32TsxCtrl;                                               //0x3f38
    ULONG PrcbPad91[6];                                                     //0x3f40
    struct _RTL_HASH_TABLE* DpcRuntimeHistoryHashTable;                     //0x3f58
    struct _KDPC* DpcRuntimeHistoryHashTableCleanupDpc;                     //0x3f5c
    ULONGLONG CurrentDpcRuntimeHistoryCached;                               //0x3f60
    ULONGLONG CurrentDpcStartTime;                                          //0x3f68
    VOID (*CurrentDpcRoutine)(struct _KDPC* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x3f70
    ULONG DpcWatchdogProfileSingleDpcThreshold;                             //0x3f74
    struct _KDPC DpcWatchdogDpc;                                            //0x3f78
    struct _KTIMER DpcWatchdogTimer;                                        //0x3f98
    union _SLIST_HEADER HypercallPageList;                                  //0x3fc0
    VOID* HypercallCachedPages;                                             //0x3fc8
    VOID* VirtualApicAssist;                                                //0x3fcc
    ULONGLONG* StatisticsPage;                                              //0x3fd0
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x3fd4
    ULONG CacheCount;                                                       //0x4010
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x4014
    ULONG SharedReadyQueueMask;                                             //0x4020
    struct _KSHARED_READY_QUEUE* SharedReadyQueue;                          //0x4024
    ULONG SharedQueueScanOwner;                                             //0x4028
    ULONG CoreProcessorSet;                                                 //0x402c
    ULONG ScanSiblingMask;                                                  //0x4030
    ULONG LLCMask;                                                          //0x4034
    ULONG CacheProcessorMask[5];                                            //0x4038
    ULONG ScanSiblingIndex;                                                 //0x404c
    VOID* WheaInfo;                                                         //0x4050
    VOID* EtwSupport;                                                       //0x4054
    union _SLIST_HEADER InterruptObjectPool;                                //0x4058
    VOID** DpcWatchdogProfile;                                              //0x4060
    VOID** DpcWatchdogProfileCurrentEmptyCapture;                           //0x4064
    ULONG PackageId;                                                        //0x4068
    ULONG PteBitCache;                                                      //0x406c
    ULONG PteBitOffset;                                                     //0x4070
    ULONG PrcbPad93;                                                        //0x4074
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x4078
    VOID* ProfileEventIndexAddress;                                         //0x407c
    struct _KDPC TimerExpirationDpc;                                        //0x4080
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x40a0
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x4158
    struct _CONTEXT* Context;                                               //0x4168
    ULONG ContextFlagsInit;                                                 //0x416c
    struct _XSAVE_AREA* ExtendedState;                                      //0x4170
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x4174
    VOID* IsrStack;                                                         //0x429c
    struct _KINTERRUPT* VectorToInterruptObject[208];                       //0x42a0
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;                           //0x45e0
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;                        //0x45e4
    struct _KDPC AbDpc;                                                     //0x45e8
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;               //0x4608
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;              //0x465c
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];               //0x46b0
    ULONG TimerExpirationTraceCount;                                        //0x47b0
    VOID* ExSaPageArray;                                                    //0x47b4
    struct _XSAVE_AREA_HEADER* ExtendedSupervisorState;                     //0x47b8
    ULONG PrcbPad100[9];                                                    //0x47bc
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;                      //0x47e0
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x4920
    UCHAR PrcbPad[1468];                                                    //0x4924
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

