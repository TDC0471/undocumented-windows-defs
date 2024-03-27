#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_KNODE.h>
#include <_LARGE_INTEGER.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_GENERAL_LOOKASIDE_POOL.h>
#include <_KPRCB.h>
#include <_KDPC_DATA.h>
#include <_KGATE.h>
#include <_KTIMER_TABLE.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_SLIST_HEADER.h>
#include <_CACHE_DESCRIPTOR.h>
#include <_KAFFINITY_EX.h>
#include <_CONTEXT.h>
#include <_XSAVE_AREA.h>

//0x3628 bytes (sizeof)
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
    ULONG KernelReserved[16];                                               //0x338
    ULONG HalReserved[16];                                                  //0x378
    ULONG CFlushSize;                                                       //0x3b8
    UCHAR CoresPerPhysicalProcessor;                                        //0x3bc
    UCHAR LogicalProcessorsPerCore;                                         //0x3bd
    UCHAR PrcbPad0[2];                                                      //0x3be
    ULONG MHz;                                                              //0x3c0
    UCHAR CpuVendor;                                                        //0x3c4
    UCHAR GroupIndex;                                                       //0x3c5
    USHORT Group;                                                           //0x3c6
    ULONG GroupSetMember;                                                   //0x3c8
    ULONG Number;                                                           //0x3cc
    UCHAR PrcbPad1[72];                                                     //0x3d0
    struct _KSPIN_LOCK_QUEUE LockQueue[17];                                 //0x418
    struct _KTHREAD* NpxThread;                                             //0x4a0
    ULONG InterruptCount;                                                   //0x4a4
    ULONG KernelTime;                                                       //0x4a8
    ULONG UserTime;                                                         //0x4ac
    ULONG DpcTime;                                                          //0x4b0
    ULONG DpcTimeCount;                                                     //0x4b4
    ULONG InterruptTime;                                                    //0x4b8
    ULONG AdjustDpcThreshold;                                               //0x4bc
    ULONG PageColor;                                                        //0x4c0
    UCHAR DebuggerSavedIRQL;                                                //0x4c4
    UCHAR NodeColor;                                                        //0x4c5
    UCHAR PrcbPad20[2];                                                     //0x4c6
    ULONG NodeShiftedColor;                                                 //0x4c8
    struct _KNODE* ParentNode;                                              //0x4cc
    ULONG SecondaryColorMask;                                               //0x4d0
    ULONG DpcTimeLimit;                                                     //0x4d4
    ULONG PrcbPad21[2];                                                     //0x4d8
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
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0x620
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0xf20
    volatile ULONG PacketBarrier;                                           //0x1820
    volatile LONG ReverseStall;                                             //0x1824
    VOID* IpiFrame;                                                         //0x1828
    UCHAR PrcbPad3[52];                                                     //0x182c
    VOID* volatile CurrentPacket[3];                                        //0x1860
    volatile ULONG TargetSet;                                               //0x186c
    VOID (* volatileWorkerRoutine)(VOID* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x1870
    volatile ULONG IpiFrozen;                                               //0x1874
    UCHAR PrcbPad4[40];                                                     //0x1878
    volatile ULONG RequestSummary;                                          //0x18a0
    struct _KPRCB* volatile SignalDone;                                     //0x18a4
    UCHAR PrcbPad50[56];                                                    //0x18a8
    struct _KDPC_DATA DpcData[2];                                           //0x18e0
    VOID* DpcStack;                                                         //0x1908
    LONG MaximumDpcQueueDepth;                                              //0x190c
    ULONG DpcRequestRate;                                                   //0x1910
    ULONG MinimumDpcRate;                                                   //0x1914
    ULONG DpcLastCount;                                                     //0x1918
    ULONG PrcbLock;                                                         //0x191c
    struct _KGATE DpcGate;                                                  //0x1920
    UCHAR ThreadDpcEnable;                                                  //0x1930
    volatile UCHAR QuantumEnd;                                              //0x1931
    volatile UCHAR DpcRoutineActive;                                        //0x1932
    volatile UCHAR IdleSchedule;                                            //0x1933
    union
    {
        volatile LONG DpcRequestSummary;                                    //0x1934
        SHORT DpcRequestSlot[2];                                            //0x1934
        struct
        {
            SHORT NormalDpcState;                                           //0x1934
            union
            {
                volatile USHORT DpcThreadActive:1;                          //0x1936
                SHORT ThreadDpcState;                                       //0x1936
            };
        };
    };
    volatile ULONG TimerHand;                                               //0x1938
    ULONG LastTick;                                                         //0x193c
    LONG MasterOffset;                                                      //0x1940
    ULONG PrcbPad41[2];                                                     //0x1944
    ULONG PeriodicCount;                                                    //0x194c
    ULONG PeriodicBias;                                                     //0x1950
    ULONGLONG TickOffset;                                                   //0x1958
    struct _KTIMER_TABLE TimerTable;                                        //0x1960
    struct _KDPC CallDpc;                                                   //0x31a0
    LONG ClockKeepAlive;                                                    //0x31c0
    UCHAR ClockCheckSlot;                                                   //0x31c4
    UCHAR ClockPollCycle;                                                   //0x31c5
    UCHAR PrcbPad6[2];                                                      //0x31c6
    LONG DpcWatchdogPeriod;                                                 //0x31c8
    LONG DpcWatchdogCount;                                                  //0x31cc
    LONG ThreadWatchdogPeriod;                                              //0x31d0
    LONG ThreadWatchdogCount;                                               //0x31d4
    volatile LONG KeSpinLockOrdering;                                       //0x31d8
    ULONG PrcbPad70[1];                                                     //0x31dc
    struct _LIST_ENTRY WaitListHead;                                        //0x31e0
    ULONG WaitLock;                                                         //0x31e8
    ULONG ReadySummary;                                                     //0x31ec
    ULONG QueueIndex;                                                       //0x31f0
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x31f4
    ULONGLONG StartCycles;                                                  //0x31f8
    volatile ULONGLONG CycleTime;                                           //0x3200
    volatile ULONG HighCycleTime;                                           //0x3208
    ULONG PrcbPad71;                                                        //0x320c
    ULONGLONG PrcbPad72[2];                                                 //0x3210
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x3220
    VOID* ChainedInterruptList;                                             //0x3320
    LONG LookasideIrpFloat;                                                 //0x3324
    volatile LONG MmPageFaultCount;                                         //0x3328
    volatile LONG MmCopyOnWriteCount;                                       //0x332c
    volatile LONG MmTransitionCount;                                        //0x3330
    volatile LONG MmCacheTransitionCount;                                   //0x3334
    volatile LONG MmDemandZeroCount;                                        //0x3338
    volatile LONG MmPageReadCount;                                          //0x333c
    volatile LONG MmPageReadIoCount;                                        //0x3340
    volatile LONG MmCacheReadCount;                                         //0x3344
    volatile LONG MmCacheIoCount;                                           //0x3348
    volatile LONG MmDirtyPagesWriteCount;                                   //0x334c
    volatile LONG MmDirtyWriteIoCount;                                      //0x3350
    volatile LONG MmMappedPagesWriteCount;                                  //0x3354
    volatile LONG MmMappedWriteIoCount;                                     //0x3358
    volatile ULONG CachedCommit;                                            //0x335c
    volatile ULONG CachedResidentAvailable;                                 //0x3360
    VOID* HyperPte;                                                         //0x3364
    UCHAR PrcbPad8[4];                                                      //0x3368
    UCHAR VendorString[13];                                                 //0x336c
    UCHAR InitialApicId;                                                    //0x3379
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0x337a
    UCHAR PrcbPad9[5];                                                      //0x337b
    ULONG FeatureBits;                                                      //0x3380
    union _LARGE_INTEGER UpdateSignature;                                   //0x3388
    volatile ULONGLONG IsrTime;                                             //0x3390
    ULONGLONG RuntimeAccumulation;                                          //0x3398
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x33a0
    struct _KDPC DpcWatchdogDpc;                                            //0x3468
    struct _KTIMER DpcWatchdogTimer;                                        //0x3488
    VOID* WheaInfo;                                                         //0x34b0
    VOID* EtwSupport;                                                       //0x34b4
    union _SLIST_HEADER InterruptObjectPool;                                //0x34b8
    union _SLIST_HEADER HypercallPageList;                                  //0x34c0
    VOID* HypercallPageVirtual;                                             //0x34c8
    VOID* VirtualApicAssist;                                                //0x34cc
    ULONGLONG* StatisticsPage;                                              //0x34d0
    VOID* RateControl;                                                      //0x34d4
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x34d8
    ULONG CacheCount;                                                       //0x3514
    ULONG CacheProcessorMask[5];                                            //0x3518
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x352c
    ULONG PrcbPad91[1];                                                     //0x3538
    ULONG CoreProcessorSet;                                                 //0x353c
    struct _KDPC TimerExpirationDpc;                                        //0x3540
    ULONG SpinLockAcquireCount;                                             //0x3560
    ULONG SpinLockContentionCount;                                          //0x3564
    ULONG SpinLockSpinCount;                                                //0x3568
    ULONG IpiSendRequestBroadcastCount;                                     //0x356c
    ULONG IpiSendRequestRoutineCount;                                       //0x3570
    ULONG IpiSendSoftwareInterruptCount;                                    //0x3574
    ULONG ExInitializeResourceCount;                                        //0x3578
    ULONG ExReInitializeResourceCount;                                      //0x357c
    ULONG ExDeleteResourceCount;                                            //0x3580
    ULONG ExecutiveResourceAcquiresCount;                                   //0x3584
    ULONG ExecutiveResourceContentionsCount;                                //0x3588
    ULONG ExecutiveResourceReleaseExclusiveCount;                           //0x358c
    ULONG ExecutiveResourceReleaseSharedCount;                              //0x3590
    ULONG ExecutiveResourceConvertsCount;                                   //0x3594
    ULONG ExAcqResExclusiveAttempts;                                        //0x3598
    ULONG ExAcqResExclusiveAcquiresExclusive;                               //0x359c
    ULONG ExAcqResExclusiveAcquiresExclusiveRecursive;                      //0x35a0
    ULONG ExAcqResExclusiveWaits;                                           //0x35a4
    ULONG ExAcqResExclusiveNotAcquires;                                     //0x35a8
    ULONG ExAcqResSharedAttempts;                                           //0x35ac
    ULONG ExAcqResSharedAcquiresExclusive;                                  //0x35b0
    ULONG ExAcqResSharedAcquiresShared;                                     //0x35b4
    ULONG ExAcqResSharedAcquiresSharedRecursive;                            //0x35b8
    ULONG ExAcqResSharedWaits;                                              //0x35bc
    ULONG ExAcqResSharedNotAcquires;                                        //0x35c0
    ULONG ExAcqResSharedStarveExclusiveAttempts;                            //0x35c4
    ULONG ExAcqResSharedStarveExclusiveAcquiresExclusive;                   //0x35c8
    ULONG ExAcqResSharedStarveExclusiveAcquiresShared;                      //0x35cc
    ULONG ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;             //0x35d0
    ULONG ExAcqResSharedStarveExclusiveWaits;                               //0x35d4
    ULONG ExAcqResSharedStarveExclusiveNotAcquires;                         //0x35d8
    ULONG ExAcqResSharedWaitForExclusiveAttempts;                           //0x35dc
    ULONG ExAcqResSharedWaitForExclusiveAcquiresExclusive;                  //0x35e0
    ULONG ExAcqResSharedWaitForExclusiveAcquiresShared;                     //0x35e4
    ULONG ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;            //0x35e8
    ULONG ExAcqResSharedWaitForExclusiveWaits;                              //0x35ec
    ULONG ExAcqResSharedWaitForExclusiveNotAcquires;                        //0x35f0
    ULONG ExSetResOwnerPointerExclusive;                                    //0x35f4
    ULONG ExSetResOwnerPointerSharedNew;                                    //0x35f8
    ULONG ExSetResOwnerPointerSharedOld;                                    //0x35fc
    ULONG ExTryToAcqExclusiveAttempts;                                      //0x3600
    ULONG ExTryToAcqExclusiveAcquires;                                      //0x3604
    ULONG ExBoostExclusiveOwner;                                            //0x3608
    ULONG ExBoostSharedOwners;                                              //0x360c
    ULONG ExEtwSynchTrackingNotificationsCount;                             //0x3610
    ULONG ExEtwSynchTrackingNotificationsAccountedCount;                    //0x3614
    struct _CONTEXT* Context;                                               //0x3618
    ULONG ContextFlags;                                                     //0x361c
    struct _XSAVE_AREA* ExtendedState;                                      //0x3620
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

