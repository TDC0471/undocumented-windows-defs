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
#include <_KNODE.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_CACHE_DESCRIPTOR.h>
#include <_SLIST_HEADER.h>
#include <_KAFFINITY_EX.h>
#include <_CONTEXT.h>
#include <_XSAVE_AREA.h>
#include <_REQUEST_MAILBOX.h>

//0x4d00 bytes (sizeof)
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
    UCHAR PrcbPad00[3];                                                     //0x21
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
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0x880
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0x1480
    volatile LONG PacketBarrier;                                            //0x2080
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x2088
    volatile LONG MmPageFaultCount;                                         //0x2090
    volatile LONG MmCopyOnWriteCount;                                       //0x2094
    volatile LONG MmTransitionCount;                                        //0x2098
    volatile LONG MmDemandZeroCount;                                        //0x209c
    volatile LONG MmPageReadCount;                                          //0x20a0
    volatile LONG MmPageReadIoCount;                                        //0x20a4
    volatile LONG MmDirtyPagesWriteCount;                                   //0x20a8
    volatile LONG MmDirtyWriteIoCount;                                      //0x20ac
    volatile LONG MmMappedPagesWriteCount;                                  //0x20b0
    volatile LONG MmMappedWriteIoCount;                                     //0x20b4
    ULONG KeSystemCalls;                                                    //0x20b8
    ULONG KeContextSwitches;                                                //0x20bc
    ULONG CcFastReadNoWait;                                                 //0x20c0
    ULONG CcFastReadWait;                                                   //0x20c4
    ULONG CcFastReadNotPossible;                                            //0x20c8
    ULONG CcCopyReadNoWait;                                                 //0x20cc
    ULONG CcCopyReadWait;                                                   //0x20d0
    ULONG CcCopyReadNoWaitMiss;                                             //0x20d4
    LONG LookasideIrpFloat;                                                 //0x20d8
    volatile LONG IoReadOperationCount;                                     //0x20dc
    volatile LONG IoWriteOperationCount;                                    //0x20e0
    volatile LONG IoOtherOperationCount;                                    //0x20e4
    union _LARGE_INTEGER IoReadTransferCount;                               //0x20e8
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x20f0
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x20f8
    volatile LONG TargetCount;                                              //0x2100
    volatile ULONG IpiFrozen;                                               //0x2104
    struct _KDPC_DATA DpcData[2];                                           //0x2180
    VOID* DpcStack;                                                         //0x21c0
    LONG MaximumDpcQueueDepth;                                              //0x21c8
    ULONG DpcRequestRate;                                                   //0x21cc
    ULONG MinimumDpcRate;                                                   //0x21d0
    ULONG DpcLastCount;                                                     //0x21d4
    UCHAR ThreadDpcEnable;                                                  //0x21d8
    volatile UCHAR QuantumEnd;                                              //0x21d9
    volatile UCHAR DpcRoutineActive;                                        //0x21da
    volatile UCHAR IdleSchedule;                                            //0x21db
    union
    {
        volatile LONG DpcRequestSummary;                                    //0x21dc
        SHORT DpcRequestSlot[2];                                            //0x21dc
        struct
        {
            SHORT NormalDpcState;                                           //0x21dc
            union
            {
                volatile USHORT DpcThreadActive:1;                          //0x21de
                SHORT ThreadDpcState;                                       //0x21de
            };
        };
    };
    volatile ULONG TimerHand;                                               //0x21e0
    LONG MasterOffset;                                                      //0x21e4
    ULONG LastTick;                                                         //0x21e8
    ULONG UnusedPad;                                                        //0x21ec
    ULONGLONG PrcbPad50[2];                                                 //0x21f0
    struct _KTIMER_TABLE TimerTable;                                        //0x2200
    struct _KGATE DpcGate;                                                  //0x4400
    VOID* PrcbPad52;                                                        //0x4418
    struct _KDPC CallDpc;                                                   //0x4420
    LONG ClockKeepAlive;                                                    //0x4460
    UCHAR ClockCheckSlot;                                                   //0x4464
    UCHAR ClockPollCycle;                                                   //0x4465
    USHORT NmiActive;                                                       //0x4466
    LONG DpcWatchdogPeriod;                                                 //0x4468
    LONG DpcWatchdogCount;                                                  //0x446c
    ULONGLONG TickOffset;                                                   //0x4470
    volatile LONG KeSpinLockOrdering;                                       //0x4478
    ULONG PrcbPad70;                                                        //0x447c
    struct _LIST_ENTRY WaitListHead;                                        //0x4480
    ULONGLONG WaitLock;                                                     //0x4490
    ULONG ReadySummary;                                                     //0x4498
    ULONG QueueIndex;                                                       //0x449c
    struct _KDPC TimerExpirationDpc;                                        //0x44a0
    ULONGLONG PrcbPad72[4];                                                 //0x44e0
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x4500
    ULONG InterruptCount;                                                   //0x4700
    ULONG KernelTime;                                                       //0x4704
    ULONG UserTime;                                                         //0x4708
    ULONG DpcTime;                                                          //0x470c
    ULONG InterruptTime;                                                    //0x4710
    ULONG AdjustDpcThreshold;                                               //0x4714
    UCHAR DebuggerSavedIRQL;                                                //0x4718
    UCHAR PrcbPad80[7];                                                     //0x4719
    ULONG DpcTimeCount;                                                     //0x4720
    ULONG DpcTimeLimit;                                                     //0x4724
    ULONG PeriodicCount;                                                    //0x4728
    ULONG PeriodicBias;                                                     //0x472c
    ULONG AvailableTime;                                                    //0x4730
    ULONG KeExceptionDispatchCount;                                         //0x4734
    struct _KNODE* ParentNode;                                              //0x4738
    ULONGLONG StartCycles;                                                  //0x4740
    ULONGLONG PrcbPad82[3];                                                 //0x4748
    volatile LONG MmSpinLockOrdering;                                       //0x4760
    ULONG PageColor;                                                        //0x4764
    ULONG NodeColor;                                                        //0x4768
    ULONG NodeShiftedColor;                                                 //0x476c
    ULONG SecondaryColorMask;                                               //0x4770
    ULONG PrcbPad83;                                                        //0x4774
    ULONGLONG CycleTime;                                                    //0x4778
    ULONG CcFastMdlReadNoWait;                                              //0x4780
    ULONG CcFastMdlReadWait;                                                //0x4784
    ULONG CcFastMdlReadNotPossible;                                         //0x4788
    ULONG CcMapDataNoWait;                                                  //0x478c
    ULONG CcMapDataWait;                                                    //0x4790
    ULONG CcPinMappedDataCount;                                             //0x4794
    ULONG CcPinReadNoWait;                                                  //0x4798
    ULONG CcPinReadWait;                                                    //0x479c
    ULONG CcMdlReadNoWait;                                                  //0x47a0
    ULONG CcMdlReadWait;                                                    //0x47a4
    ULONG CcLazyWriteHotSpots;                                              //0x47a8
    ULONG CcLazyWriteIos;                                                   //0x47ac
    ULONG CcLazyWritePages;                                                 //0x47b0
    ULONG CcDataFlushes;                                                    //0x47b4
    ULONG CcDataPages;                                                      //0x47b8
    ULONG CcLostDelayedWrites;                                              //0x47bc
    ULONG CcFastReadResourceMiss;                                           //0x47c0
    ULONG CcCopyReadWaitMiss;                                               //0x47c4
    ULONG CcFastMdlReadResourceMiss;                                        //0x47c8
    ULONG CcMapDataNoWaitMiss;                                              //0x47cc
    ULONG CcMapDataWaitMiss;                                                //0x47d0
    ULONG CcPinReadNoWaitMiss;                                              //0x47d4
    ULONG CcPinReadWaitMiss;                                                //0x47d8
    ULONG CcMdlReadNoWaitMiss;                                              //0x47dc
    ULONG CcMdlReadWaitMiss;                                                //0x47e0
    ULONG CcReadAheadIos;                                                   //0x47e4
    volatile LONG MmCacheTransitionCount;                                   //0x47e8
    volatile LONG MmCacheReadCount;                                         //0x47ec
    volatile LONG MmCacheIoCount;                                           //0x47f0
    ULONG PrcbPad91[1];                                                     //0x47f4
    ULONGLONG RuntimeAccumulation;                                          //0x47f8
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x4800
    UCHAR PrcbPad92[16];                                                    //0x4900
    ULONG KeAlignmentFixupCount;                                            //0x4910
    struct _KDPC DpcWatchdogDpc;                                            //0x4918
    struct _KTIMER DpcWatchdogTimer;                                        //0x4958
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x4998
    ULONG CacheCount;                                                       //0x49d4
    volatile ULONG CachedCommit;                                            //0x49d8
    volatile ULONG CachedResidentAvailable;                                 //0x49dc
    VOID* HyperPte;                                                         //0x49e0
    VOID* WheaInfo;                                                         //0x49e8
    VOID* EtwSupport;                                                       //0x49f0
    union _SLIST_HEADER InterruptObjectPool;                                //0x4a00
    union _SLIST_HEADER HypercallPageList;                                  //0x4a10
    VOID* HypercallPageVirtual;                                             //0x4a20
    VOID* VirtualApicAssist;                                                //0x4a28
    ULONGLONG* StatisticsPage;                                              //0x4a30
    VOID* RateControl;                                                      //0x4a38
    ULONGLONG CacheProcessorMask[5];                                        //0x4a40
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x4a68
    ULONGLONG CoreProcessorSet;                                             //0x4a90
    VOID* PebsIndexAddress;                                                 //0x4a98
    ULONGLONG PrcbPad93[12];                                                //0x4aa0
    ULONG SpinLockAcquireCount;                                             //0x4b00
    ULONG SpinLockContentionCount;                                          //0x4b04
    ULONG SpinLockSpinCount;                                                //0x4b08
    ULONG IpiSendRequestBroadcastCount;                                     //0x4b0c
    ULONG IpiSendRequestRoutineCount;                                       //0x4b10
    ULONG IpiSendSoftwareInterruptCount;                                    //0x4b14
    ULONG ExInitializeResourceCount;                                        //0x4b18
    ULONG ExReInitializeResourceCount;                                      //0x4b1c
    ULONG ExDeleteResourceCount;                                            //0x4b20
    ULONG ExecutiveResourceAcquiresCount;                                   //0x4b24
    ULONG ExecutiveResourceContentionsCount;                                //0x4b28
    ULONG ExecutiveResourceReleaseExclusiveCount;                           //0x4b2c
    ULONG ExecutiveResourceReleaseSharedCount;                              //0x4b30
    ULONG ExecutiveResourceConvertsCount;                                   //0x4b34
    ULONG ExAcqResExclusiveAttempts;                                        //0x4b38
    ULONG ExAcqResExclusiveAcquiresExclusive;                               //0x4b3c
    ULONG ExAcqResExclusiveAcquiresExclusiveRecursive;                      //0x4b40
    ULONG ExAcqResExclusiveWaits;                                           //0x4b44
    ULONG ExAcqResExclusiveNotAcquires;                                     //0x4b48
    ULONG ExAcqResSharedAttempts;                                           //0x4b4c
    ULONG ExAcqResSharedAcquiresExclusive;                                  //0x4b50
    ULONG ExAcqResSharedAcquiresShared;                                     //0x4b54
    ULONG ExAcqResSharedAcquiresSharedRecursive;                            //0x4b58
    ULONG ExAcqResSharedWaits;                                              //0x4b5c
    ULONG ExAcqResSharedNotAcquires;                                        //0x4b60
    ULONG ExAcqResSharedStarveExclusiveAttempts;                            //0x4b64
    ULONG ExAcqResSharedStarveExclusiveAcquiresExclusive;                   //0x4b68
    ULONG ExAcqResSharedStarveExclusiveAcquiresShared;                      //0x4b6c
    ULONG ExAcqResSharedStarveExclusiveAcquiresSharedRecursive;             //0x4b70
    ULONG ExAcqResSharedStarveExclusiveWaits;                               //0x4b74
    ULONG ExAcqResSharedStarveExclusiveNotAcquires;                         //0x4b78
    ULONG ExAcqResSharedWaitForExclusiveAttempts;                           //0x4b7c
    ULONG ExAcqResSharedWaitForExclusiveAcquiresExclusive;                  //0x4b80
    ULONG ExAcqResSharedWaitForExclusiveAcquiresShared;                     //0x4b84
    ULONG ExAcqResSharedWaitForExclusiveAcquiresSharedRecursive;            //0x4b88
    ULONG ExAcqResSharedWaitForExclusiveWaits;                              //0x4b8c
    ULONG ExAcqResSharedWaitForExclusiveNotAcquires;                        //0x4b90
    ULONG ExSetResOwnerPointerExclusive;                                    //0x4b94
    ULONG ExSetResOwnerPointerSharedNew;                                    //0x4b98
    ULONG ExSetResOwnerPointerSharedOld;                                    //0x4b9c
    ULONG ExTryToAcqExclusiveAttempts;                                      //0x4ba0
    ULONG ExTryToAcqExclusiveAcquires;                                      //0x4ba4
    ULONG ExBoostExclusiveOwner;                                            //0x4ba8
    ULONG ExBoostSharedOwners;                                              //0x4bac
    ULONG ExEtwSynchTrackingNotificationsCount;                             //0x4bb0
    ULONG ExEtwSynchTrackingNotificationsAccountedCount;                    //0x4bb4
    UCHAR VendorString[13];                                                 //0x4bb8
    UCHAR PrcbPad10[3];                                                     //0x4bc5
    ULONG FeatureBits;                                                      //0x4bc8
    union _LARGE_INTEGER UpdateSignature;                                   //0x4bd0
    struct _CONTEXT* Context;                                               //0x4bd8
    ULONG ContextFlags;                                                     //0x4be0
    struct _XSAVE_AREA* ExtendedState;                                      //0x4be8
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x4c00
    struct _REQUEST_MAILBOX RequestMailbox[1];                              //0x4c80
};
/* Used in */
// _KPCR
// _KTHREAD
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

