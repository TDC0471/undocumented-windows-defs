#pragma once
/* ------------------ */

#include <_KTHREAD.h>
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
#include <_KPRCB.h>
#include <_RTL_RB_TREE.h>
#include <_KNODE.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_CACHE_DESCRIPTOR.h>
#include <_SLIST_HEADER.h>
#include <_KAFFINITY_EX.h>
#include <_PROCESSOR_PROFILE_CONTROL_AREA.h>
#include <_SYNCH_COUNTERS.h>
#include <_FILESYSTEM_DISK_COUNTERS.h>
#include <_CONTEXT.h>
#include <_XSAVE_AREA.h>
#include <_KENTROPY_TIMING_STATE.h>
#include <_REQUEST_MAILBOX.h>

//0x5b80 bytes (sizeof)
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
    UCHAR PendingTick;                                                      //0x22
    UCHAR PrcbPad00[1];                                                     //0x23
    ULONG Number;                                                           //0x24
    ULONGLONG RspBase;                                                      //0x28
    ULONGLONG PrcbLock;                                                     //0x30
    ULONGLONG PrcbPad01;                                                    //0x38
    struct _KPROCESSOR_STATE ProcessorState;                                //0x40
    CHAR CpuType;                                                           //0x5f0
    CHAR CpuID;                                                             //0x5f1
    union
    {
        USHORT CpuStep;                                                     //0x5f2
        struct
        {
            UCHAR CpuStepping;                                              //0x5f2
            UCHAR CpuModel;                                                 //0x5f3
        };
    };
    ULONG MHz;                                                              //0x5f4
    ULONGLONG HalReserved[8];                                               //0x5f8
    USHORT MinorVersion;                                                    //0x638
    USHORT MajorVersion;                                                    //0x63a
    UCHAR BuildType;                                                        //0x63c
    UCHAR CpuVendor;                                                        //0x63d
    UCHAR CoresPerPhysicalProcessor;                                        //0x63e
    UCHAR LogicalProcessorsPerCore;                                         //0x63f
    ULONG ApicMask;                                                         //0x640
    ULONG CFlushSize;                                                       //0x644
    VOID* AcpiReserved;                                                     //0x648
    ULONG InitialApicId;                                                    //0x650
    ULONG Stride;                                                           //0x654
    USHORT Group;                                                           //0x658
    ULONGLONG GroupSetMember;                                               //0x660
    UCHAR GroupIndex;                                                       //0x668
    struct _KSPIN_LOCK_QUEUE LockQueue[17];                                 //0x670
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x780
    struct _GENERAL_LOOKASIDE_POOL PPNxPagedLookasideList[32];              //0x880
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0x1480
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0x2080
    ULONGLONG PrcbPad20;                                                    //0x2c80
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x2c88
    volatile LONG MmPageFaultCount;                                         //0x2c90
    volatile LONG MmCopyOnWriteCount;                                       //0x2c94
    volatile LONG MmTransitionCount;                                        //0x2c98
    volatile LONG MmDemandZeroCount;                                        //0x2c9c
    volatile LONG MmPageReadCount;                                          //0x2ca0
    volatile LONG MmPageReadIoCount;                                        //0x2ca4
    volatile LONG MmDirtyPagesWriteCount;                                   //0x2ca8
    volatile LONG MmDirtyWriteIoCount;                                      //0x2cac
    volatile LONG MmMappedPagesWriteCount;                                  //0x2cb0
    volatile LONG MmMappedWriteIoCount;                                     //0x2cb4
    ULONG KeSystemCalls;                                                    //0x2cb8
    ULONG KeContextSwitches;                                                //0x2cbc
    ULONG CcFastReadNoWait;                                                 //0x2cc0
    ULONG CcFastReadWait;                                                   //0x2cc4
    ULONG CcFastReadNotPossible;                                            //0x2cc8
    ULONG CcCopyReadNoWait;                                                 //0x2ccc
    ULONG CcCopyReadWait;                                                   //0x2cd0
    ULONG CcCopyReadNoWaitMiss;                                             //0x2cd4
    LONG LookasideIrpFloat;                                                 //0x2cd8
    volatile LONG IoReadOperationCount;                                     //0x2cdc
    volatile LONG IoWriteOperationCount;                                    //0x2ce0
    volatile LONG IoOtherOperationCount;                                    //0x2ce4
    union _LARGE_INTEGER IoReadTransferCount;                               //0x2ce8
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x2cf0
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x2cf8
    volatile LONG PacketBarrier;                                            //0x2d00
    volatile LONG TargetCount;                                              //0x2d04
    volatile ULONG IpiFrozen;                                               //0x2d08
    ULONG PrcbPad40[29];                                                    //0x2d0c
    struct _KDPC_DATA DpcData[2];                                           //0x2d80
    VOID* DpcStack;                                                         //0x2dc0
    LONG MaximumDpcQueueDepth;                                              //0x2dc8
    ULONG DpcRequestRate;                                                   //0x2dcc
    ULONG MinimumDpcRate;                                                   //0x2dd0
    ULONG DpcLastCount;                                                     //0x2dd4
    UCHAR ThreadDpcEnable;                                                  //0x2dd8
    volatile UCHAR QuantumEnd;                                              //0x2dd9
    volatile UCHAR DpcRoutineActive;                                        //0x2dda
    volatile UCHAR IdleSchedule;                                            //0x2ddb
    union
    {
        volatile LONG DpcRequestSummary;                                    //0x2ddc
        SHORT DpcRequestSlot[2];                                            //0x2ddc
        struct
        {
            SHORT NormalDpcState;                                           //0x2ddc
            SHORT ThreadDpcState;                                           //0x2dde
        };
        struct
        {
            ULONG DpcNormalProcessingActive:1;                              //0x2ddc
            ULONG DpcNormalProcessingRequested:1;                           //0x2ddc
            ULONG DpcNormalThreadSignal:1;                                  //0x2ddc
            ULONG DpcNormalTimerExpiration:1;                               //0x2ddc
            ULONG DpcNormalDpcPresent:1;                                    //0x2ddc
            ULONG DpcNormalLocalInterrupt:1;                                //0x2ddc
            ULONG DpcNormalSpare:10;                                        //0x2ddc
            ULONG DpcThreadActive:1;                                        //0x2ddc
            ULONG DpcThreadRequested:1;                                     //0x2ddc
            ULONG DpcThreadSpare:14;                                        //0x2ddc
        };
    };
    ULONG LastTimerHand;                                                    //0x2de0
    ULONG LastTick;                                                         //0x2de4
    ULONG ClockInterrupts;                                                  //0x2de8
    ULONG ReadyScanTick;                                                    //0x2dec
    UCHAR BalanceState;                                                     //0x2df0
    UCHAR PrcbPad50[7];                                                     //0x2df1
    ULONG InterruptLastCount;                                               //0x2df8
    ULONG InterruptRate;                                                    //0x2dfc
    struct _KTIMER_TABLE TimerTable;                                        //0x2e00
    struct _KGATE DpcGate;                                                  //0x5000
    VOID* PrcbPad52;                                                        //0x5018
    struct _KDPC CallDpc;                                                   //0x5020
    LONG ClockKeepAlive;                                                    //0x5060
    UCHAR PrcbPad60[2];                                                     //0x5064
    USHORT NmiActive;                                                       //0x5066
    LONG DpcWatchdogPeriod;                                                 //0x5068
    LONG DpcWatchdogCount;                                                  //0x506c
    volatile LONG KeSpinLockOrdering;                                       //0x5070
    ULONG PrcbPad70[1];                                                     //0x5074
    VOID* CachedPtes;                                                       //0x5078
    struct _LIST_ENTRY WaitListHead;                                        //0x5080
    ULONGLONG WaitLock;                                                     //0x5090
    ULONG ReadySummary;                                                     //0x5098
    ULONG QueueIndex;                                                       //0x509c
    ULONG ReadyQueueWeight;                                                 //0x50a0
    ULONG PrcbPad75;                                                        //0x50a4
    struct _KDPC TimerExpirationDpc;                                        //0x50a8
    struct _KPRCB* BuddyPrcb;                                               //0x50e8
    struct _RTL_RB_TREE ScbQueue;                                           //0x50f0
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x5100
    ULONG InterruptCount;                                                   //0x5300
    ULONG KernelTime;                                                       //0x5304
    ULONG UserTime;                                                         //0x5308
    ULONG DpcTime;                                                          //0x530c
    ULONG InterruptTime;                                                    //0x5310
    ULONG AdjustDpcThreshold;                                               //0x5314
    UCHAR DebuggerSavedIRQL;                                                //0x5318
    UCHAR GroupSchedulingOverQuota;                                         //0x5319
    volatile UCHAR DeepSleep;                                               //0x531a
    UCHAR PrcbPad80[1];                                                     //0x531b
    ULONG ScbOffset;                                                        //0x531c
    ULONG DpcTimeCount;                                                     //0x5320
    ULONG DpcTimeLimit;                                                     //0x5324
    ULONG PeriodicCount;                                                    //0x5328
    ULONG PeriodicBias;                                                     //0x532c
    ULONG AvailableTime;                                                    //0x5330
    ULONG KeExceptionDispatchCount;                                         //0x5334
    struct _KNODE* ParentNode;                                              //0x5338
    ULONGLONG StartCycles;                                                  //0x5340
    ULONGLONG GenerationTarget;                                             //0x5348
    ULONGLONG AffinitizedCycles;                                            //0x5350
    ULONGLONG PrcbPad81;                                                    //0x5358
    volatile LONG MmSpinLockOrdering;                                       //0x5360
    ULONG PageColor;                                                        //0x5364
    ULONG NodeColor;                                                        //0x5368
    ULONG NodeShiftedColor;                                                 //0x536c
    ULONG SecondaryColorMask;                                               //0x5370
    ULONG PrcbPad83;                                                        //0x5374
    ULONGLONG CycleTime;                                                    //0x5378
    ULONG CcFastMdlReadNoWait;                                              //0x5380
    ULONG CcFastMdlReadWait;                                                //0x5384
    ULONG CcFastMdlReadNotPossible;                                         //0x5388
    ULONG CcMapDataNoWait;                                                  //0x538c
    ULONG CcMapDataWait;                                                    //0x5390
    ULONG CcPinMappedDataCount;                                             //0x5394
    ULONG CcPinReadNoWait;                                                  //0x5398
    ULONG CcPinReadWait;                                                    //0x539c
    ULONG CcMdlReadNoWait;                                                  //0x53a0
    ULONG CcMdlReadWait;                                                    //0x53a4
    ULONG CcLazyWriteHotSpots;                                              //0x53a8
    ULONG CcLazyWriteIos;                                                   //0x53ac
    ULONG CcLazyWritePages;                                                 //0x53b0
    ULONG CcDataFlushes;                                                    //0x53b4
    ULONG CcDataPages;                                                      //0x53b8
    ULONG CcLostDelayedWrites;                                              //0x53bc
    ULONG CcFastReadResourceMiss;                                           //0x53c0
    ULONG CcCopyReadWaitMiss;                                               //0x53c4
    ULONG CcFastMdlReadResourceMiss;                                        //0x53c8
    ULONG CcMapDataNoWaitMiss;                                              //0x53cc
    ULONG CcMapDataWaitMiss;                                                //0x53d0
    ULONG CcPinReadNoWaitMiss;                                              //0x53d4
    ULONG CcPinReadWaitMiss;                                                //0x53d8
    ULONG CcMdlReadNoWaitMiss;                                              //0x53dc
    ULONG CcMdlReadWaitMiss;                                                //0x53e0
    ULONG CcReadAheadIos;                                                   //0x53e4
    volatile LONG MmCacheTransitionCount;                                   //0x53e8
    volatile LONG MmCacheReadCount;                                         //0x53ec
    volatile LONG MmCacheIoCount;                                           //0x53f0
    ULONG PrcbPad91[3];                                                     //0x53f4
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x5400
    struct _LIST_ENTRY ScbList;                                             //0x55c8
    ULONG PrcbPad92[22];                                                    //0x55d8
    ULONG KeAlignmentFixupCount;                                            //0x5630
    struct _KDPC DpcWatchdogDpc;                                            //0x5638
    struct _KTIMER DpcWatchdogTimer;                                        //0x5678
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x56b8
    ULONG CacheCount;                                                       //0x56f4
    volatile ULONG CachedCommit;                                            //0x56f8
    volatile ULONG CachedResidentAvailable;                                 //0x56fc
    VOID* HyperPte;                                                         //0x5700
    VOID* WheaInfo;                                                         //0x5708
    VOID* EtwSupport;                                                       //0x5710
    union _SLIST_HEADER InterruptObjectPool;                                //0x5720
    union _SLIST_HEADER HypercallPageList;                                  //0x5730
    VOID* HypercallPageVirtual;                                             //0x5740
    VOID* VirtualApicAssist;                                                //0x5748
    ULONGLONG* StatisticsPage;                                              //0x5750
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x5758
    ULONGLONG CacheProcessorMask[5];                                        //0x5800
    ULONGLONG ScanSiblingMask;                                              //0x5828
    ULONG ScanSiblingIndex;                                                 //0x5830
    ULONG LLCLevel;                                                         //0x5834
    ULONGLONG CoreProcessorSet;                                             //0x5838
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x5840
    VOID* ProfileEventIndexAddress;                                         //0x5848
    ULONGLONG PrcbPad94[6];                                                 //0x5850
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x5880
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x5938
    UCHAR VendorString[13];                                                 //0x5948
    UCHAR PrcbPad10[3];                                                     //0x5955
    ULONG FeatureBits;                                                      //0x5958
    union _LARGE_INTEGER UpdateSignature;                                   //0x5960
    struct _CONTEXT* Context;                                               //0x5968
    ULONG ContextFlagsInit;                                                 //0x5970
    struct _XSAVE_AREA* ExtendedState;                                      //0x5978
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x5980
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x5b00
    struct _REQUEST_MAILBOX RequestMailbox[1];                              //0x5b40
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

