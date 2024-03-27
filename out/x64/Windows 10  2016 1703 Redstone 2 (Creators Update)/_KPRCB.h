#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KNODE.h>
#include <_KPROCESSOR_STATE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_GENERAL_LOOKASIDE_POOL.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_KDPC_DATA.h>
#include <_KTIMER_TABLE.h>
#include <_KGATE.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>
#include <_RTL_RB_TREE.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_CACHE_DESCRIPTOR.h>
#include <_SLIST_HEADER.h>
#include <_KAFFINITY_EX.h>
#include <_KSHARED_READY_QUEUE.h>
#include <_PROCESSOR_PROFILE_CONTROL_AREA.h>
#include <_SYNCH_COUNTERS.h>
#include <_FILESYSTEM_DISK_COUNTERS.h>
#include <_CONTEXT.h>
#include <_XSAVE_AREA.h>
#include <_KENTROPY_TIMING_STATE.h>
#include <_IOP_IRP_STACK_PROFILER.h>
#include <_KTIMER_EXPIRATION_TRACE.h>
#include <_KSECURE_FAULT_INFORMATION.h>
#include <_REQUEST_MAILBOX.h>

//0x6a40 bytes (sizeof)
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
    ULONGLONG PrcbPad04[6];                                                 //0x90
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
    ULONG PrcbPad10;                                                        //0xec
    ULONGLONG PrcbPad11[2];                                                 //0xf0
    struct _KPROCESSOR_STATE ProcessorState;                                //0x100
    ULONGLONG PrcbPad12[6];                                                 //0x6c0
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
    VOID* IsrDpcStats;                                                      //0x2d90
    ULONG DeviceInterrupts;                                                 //0x2d98
    LONG LookasideIrpFloat;                                                 //0x2d9c
    ULONG InterruptLastCount;                                               //0x2da0
    ULONG InterruptRate;                                                    //0x2da4
    ULONGLONG LastNonHrTimerExpiration;                                     //0x2da8
    ULONG PrcbPad41[20];                                                    //0x2db0
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
    UCHAR PrcbPad80[5];                                                     //0x5b9b
    ULONG DpcTimeCount;                                                     //0x5ba0
    ULONG DpcTimeLimit;                                                     //0x5ba4
    ULONG PeriodicCount;                                                    //0x5ba8
    ULONG PeriodicBias;                                                     //0x5bac
    ULONG AvailableTime;                                                    //0x5bb0
    ULONG KeExceptionDispatchCount;                                         //0x5bb4
    ULONG ReadyThreadCount;                                                 //0x5bb8
    ULONGLONG StartCycles;                                                  //0x5bc0
    ULONGLONG TaggedCyclesStart;                                            //0x5bc8
    ULONGLONG TaggedCycles[2];                                              //0x5bd0
    ULONGLONG GenerationTarget;                                             //0x5be0
    ULONGLONG AffinitizedCycles;                                            //0x5be8
    ULONGLONG ImportantCycles;                                              //0x5bf0
    ULONGLONG UnimportantCycles;                                            //0x5bf8
    ULONGLONG ReadyQueueExpectedRunTime;                                    //0x5c00
    ULONG PrcbPad81[21];                                                    //0x5c08
    ULONG DpcWatchdogProfileSingleDpcThreshold;                             //0x5c5c
    volatile LONG MmSpinLockOrdering;                                       //0x5c60
    ULONG PageColor;                                                        //0x5c64
    ULONG NodeColor;                                                        //0x5c68
    ULONG NodeShiftedColor;                                                 //0x5c6c
    ULONG SecondaryColorMask;                                               //0x5c70
    ULONG PrcbPad83;                                                        //0x5c74
    ULONGLONG CycleTime;                                                    //0x5c78
    ULONGLONG Cycles[4][2];                                                 //0x5c80
    ULONG PrcbPad84[16];                                                    //0x5cc0
    ULONG CcFastMdlReadNoWait;                                              //0x5d00
    ULONG CcFastMdlReadWait;                                                //0x5d04
    ULONG CcFastMdlReadNotPossible;                                         //0x5d08
    ULONG CcMapDataNoWait;                                                  //0x5d0c
    ULONG CcMapDataWait;                                                    //0x5d10
    ULONG CcPinMappedDataCount;                                             //0x5d14
    ULONG CcPinReadNoWait;                                                  //0x5d18
    ULONG CcPinReadWait;                                                    //0x5d1c
    ULONG CcMdlReadNoWait;                                                  //0x5d20
    ULONG CcMdlReadWait;                                                    //0x5d24
    ULONG CcLazyWriteHotSpots;                                              //0x5d28
    ULONG CcLazyWriteIos;                                                   //0x5d2c
    ULONG CcLazyWritePages;                                                 //0x5d30
    ULONG CcDataFlushes;                                                    //0x5d34
    ULONG CcDataPages;                                                      //0x5d38
    ULONG CcLostDelayedWrites;                                              //0x5d3c
    ULONG CcFastReadResourceMiss;                                           //0x5d40
    ULONG CcCopyReadWaitMiss;                                               //0x5d44
    ULONG CcFastMdlReadResourceMiss;                                        //0x5d48
    ULONG CcMapDataNoWaitMiss;                                              //0x5d4c
    ULONG CcMapDataWaitMiss;                                                //0x5d50
    ULONG CcPinReadNoWaitMiss;                                              //0x5d54
    ULONG CcPinReadWaitMiss;                                                //0x5d58
    ULONG CcMdlReadNoWaitMiss;                                              //0x5d5c
    ULONG CcMdlReadWaitMiss;                                                //0x5d60
    ULONG CcReadAheadIos;                                                   //0x5d64
    volatile LONG MmCacheTransitionCount;                                   //0x5d68
    volatile LONG MmCacheReadCount;                                         //0x5d6c
    volatile LONG MmCacheIoCount;                                           //0x5d70
    ULONG PrcbPad91[3];                                                     //0x5d74
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x5d80
    struct _LIST_ENTRY ScbList;                                             //0x5f58
    struct _KDPC ForceIdleDpc;                                              //0x5f68
    ULONG PrcbPad92[18];                                                    //0x5fa8
    ULONG KeAlignmentFixupCount;                                            //0x5ff0
    struct _KDPC DpcWatchdogDpc;                                            //0x5ff8
    struct _KTIMER DpcWatchdogTimer;                                        //0x6038
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x6078
    ULONG CacheCount;                                                       //0x60b4
    volatile ULONG CachedCommit;                                            //0x60b8
    volatile ULONG CachedResidentAvailable;                                 //0x60bc
    VOID* HyperPte;                                                         //0x60c0
    VOID* WheaInfo;                                                         //0x60c8
    VOID* EtwSupport;                                                       //0x60d0
    union _SLIST_HEADER InterruptObjectPool;                                //0x60e0
    union _SLIST_HEADER HypercallPageList;                                  //0x60f0
    VOID* HypercallCachedPages;                                             //0x6100
    VOID* VirtualApicAssist;                                                //0x6108
    ULONGLONG* StatisticsPage;                                              //0x6110
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x6118
    ULONGLONG SharedReadyQueueMask;                                         //0x61c0
    struct _KSHARED_READY_QUEUE* SharedReadyQueue;                          //0x61c8
    ULONG SharedQueueScanOwner;                                             //0x61d0
    ULONG ScanSiblingIndex;                                                 //0x61d4
    ULONGLONG CoreProcessorSet;                                             //0x61d8
    ULONGLONG ScanSiblingMask;                                              //0x61e0
    ULONGLONG LLCMask;                                                      //0x61e8
    ULONGLONG CacheProcessorMask[5];                                        //0x61f0
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x6218
    VOID* ProfileEventIndexAddress;                                         //0x6220
    VOID** DpcWatchdogProfile;                                              //0x6228
    VOID** DpcWatchdogProfileCurrentEmptyCapture;                           //0x6230
    ULONGLONG PrcbPad94[9];                                                 //0x6238
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x6280
    ULONGLONG PteBitCache;                                                  //0x6338
    ULONG PteBitOffset;                                                     //0x6340
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x6348
    UCHAR VendorString[13];                                                 //0x6358
    UCHAR PrcbPad100[2];                                                    //0x6365
    UCHAR PendingVirtualLittle;                                             //0x6367
    ULONGLONG FeatureBits;                                                  //0x6368
    ULONG PrcbPad110;                                                       //0x6370
    union _LARGE_INTEGER UpdateSignature;                                   //0x6378
    struct _CONTEXT* Context;                                               //0x6380
    ULONG ContextFlagsInit;                                                 //0x6388
    struct _XSAVE_AREA* ExtendedState;                                      //0x6390
    VOID* IsrStack;                                                         //0x6398
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x63a0
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;                           //0x64f0
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;                        //0x64f8
    struct _KDPC AbDpc;                                                     //0x6500
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;               //0x6540
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;              //0x6594
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;                      //0x6600
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];               //0x6870
    ULONG TimerExpirationTraceCount;                                        //0x6970
    VOID* ExSaPageArray;                                                    //0x6978
    struct _KSECURE_FAULT_INFORMATION SecureFault;                          //0x6980
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x69c0
    struct _REQUEST_MAILBOX RequestMailbox[1];                              //0x6a00
};
/* Used in */
// _KPCR
// _KTHREAD
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

