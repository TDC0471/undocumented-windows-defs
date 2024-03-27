#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_GENERAL_LOOKASIDE_POOL.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_REQUEST_MAILBOX.h>
#include <_KDPC_DATA.h>
#include <_KEVENT.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>
#include <_KNODE.h>
#include <_KPRCB.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_CACHE_DESCRIPTOR.h>
#include <_SLIST_HEADER.h>

//0x3b20 bytes (sizeof)
struct _KPRCB
{
    ULONG MxCsr;                                                            //0x0
    USHORT Number;                                                          //0x4
    UCHAR InterruptRequest;                                                 //0x6
    UCHAR IdleHalt;                                                         //0x7
    struct _KTHREAD* CurrentThread;                                         //0x8
    struct _KTHREAD* NextThread;                                            //0x10
    struct _KTHREAD* IdleThread;                                            //0x18
    UCHAR NestingLevel;                                                     //0x20
    UCHAR Group;                                                            //0x21
    UCHAR PrcbPad00[6];                                                     //0x22
    ULONGLONG RspBase;                                                      //0x28
    ULONGLONG PrcbLock;                                                     //0x30
    ULONGLONG SetMember;                                                    //0x38
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
    ULONGLONG PrcbPad01[3];                                                 //0x658
    struct _KSPIN_LOCK_QUEUE LockQueue[49];                                 //0x670
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x980
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0xa80
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0x1680
    volatile ULONGLONG PacketBarrier;                                       //0x2280
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x2288
    volatile LONG MmPageFaultCount;                                         //0x2290
    volatile LONG MmCopyOnWriteCount;                                       //0x2294
    volatile LONG MmTransitionCount;                                        //0x2298
    volatile LONG MmDemandZeroCount;                                        //0x229c
    volatile LONG MmPageReadCount;                                          //0x22a0
    volatile LONG MmPageReadIoCount;                                        //0x22a4
    volatile LONG MmDirtyPagesWriteCount;                                   //0x22a8
    volatile LONG MmDirtyWriteIoCount;                                      //0x22ac
    volatile LONG MmMappedPagesWriteCount;                                  //0x22b0
    volatile LONG MmMappedWriteIoCount;                                     //0x22b4
    ULONG KeSystemCalls;                                                    //0x22b8
    ULONG KeContextSwitches;                                                //0x22bc
    ULONG CcFastReadNoWait;                                                 //0x22c0
    ULONG CcFastReadWait;                                                   //0x22c4
    ULONG CcFastReadNotPossible;                                            //0x22c8
    ULONG CcCopyReadNoWait;                                                 //0x22cc
    ULONG CcCopyReadWait;                                                   //0x22d0
    ULONG CcCopyReadNoWaitMiss;                                             //0x22d4
    LONG LookasideIrpFloat;                                                 //0x22d8
    volatile LONG IoReadOperationCount;                                     //0x22dc
    volatile LONG IoWriteOperationCount;                                    //0x22e0
    volatile LONG IoOtherOperationCount;                                    //0x22e4
    union _LARGE_INTEGER IoReadTransferCount;                               //0x22e8
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x22f0
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x22f8
    volatile ULONGLONG TargetSet;                                           //0x2300
    volatile ULONG IpiFrozen;                                               //0x2308
    UCHAR PrcbPad3[116];                                                    //0x230c
    struct _REQUEST_MAILBOX RequestMailbox[64];                             //0x2380
    volatile ULONGLONG SenderSummary;                                       //0x3380
    UCHAR PrcbPad4[120];                                                    //0x3388
    struct _KDPC_DATA DpcData[2];                                           //0x3400
    VOID* DpcStack;                                                         //0x3440
    VOID* SparePtr0;                                                        //0x3448
    LONG MaximumDpcQueueDepth;                                              //0x3450
    ULONG DpcRequestRate;                                                   //0x3454
    ULONG MinimumDpcRate;                                                   //0x3458
    volatile UCHAR DpcInterruptRequested;                                   //0x345c
    volatile UCHAR DpcThreadRequested;                                      //0x345d
    volatile UCHAR DpcRoutineActive;                                        //0x345e
    volatile UCHAR DpcThreadActive;                                         //0x345f
    union
    {
        volatile ULONGLONG TimerHand;                                       //0x3460
        volatile ULONGLONG TimerRequest;                                    //0x3460
    };
    LONG TickOffset;                                                        //0x3468
    LONG MasterOffset;                                                      //0x346c
    ULONG DpcLastCount;                                                     //0x3470
    UCHAR ThreadDpcEnable;                                                  //0x3474
    volatile UCHAR QuantumEnd;                                              //0x3475
    UCHAR PrcbPad50;                                                        //0x3476
    volatile UCHAR IdleSchedule;                                            //0x3477
    LONG DpcSetEventRequest;                                                //0x3478
    ULONG KeExceptionDispatchCount;                                         //0x347c
    struct _KEVENT DpcEvent;                                                //0x3480
    VOID* PrcbPad51;                                                        //0x3498
    struct _KDPC CallDpc;                                                   //0x34a0
    LONG ClockKeepAlive;                                                    //0x34e0
    UCHAR ClockCheckSlot;                                                   //0x34e4
    UCHAR ClockPollCycle;                                                   //0x34e5
    UCHAR PrcbPad6[2];                                                      //0x34e6
    LONG DpcWatchdogPeriod;                                                 //0x34e8
    LONG DpcWatchdogCount;                                                  //0x34ec
    ULONGLONG PrcbPad70[2];                                                 //0x34f0
    struct _LIST_ENTRY WaitListHead;                                        //0x3500
    ULONGLONG WaitLock;                                                     //0x3510
    ULONG ReadySummary;                                                     //0x3518
    ULONG QueueIndex;                                                       //0x351c
    ULONGLONG PrcbPad71[12];                                                //0x3520
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x3580
    ULONG InterruptCount;                                                   //0x3780
    ULONG KernelTime;                                                       //0x3784
    ULONG UserTime;                                                         //0x3788
    ULONG DpcTime;                                                          //0x378c
    ULONG InterruptTime;                                                    //0x3790
    ULONG AdjustDpcThreshold;                                               //0x3794
    UCHAR SkipTick;                                                         //0x3798
    UCHAR DebuggerSavedIRQL;                                                //0x3799
    UCHAR PollSlot;                                                         //0x379a
    UCHAR PrcbPad80[5];                                                     //0x379b
    ULONG DpcTimeCount;                                                     //0x37a0
    ULONG DpcTimeLimit;                                                     //0x37a4
    ULONG PeriodicCount;                                                    //0x37a8
    ULONG PeriodicBias;                                                     //0x37ac
    ULONGLONG PrcbPad81[2];                                                 //0x37b0
    struct _KNODE* ParentNode;                                              //0x37c0
    ULONGLONG MultiThreadProcessorSet;                                      //0x37c8
    struct _KPRCB* MultiThreadSetMaster;                                    //0x37d0
    ULONGLONG StartCycles;                                                  //0x37d8
    volatile LONG MmSpinLockOrdering;                                       //0x37e0
    ULONG PageColor;                                                        //0x37e4
    ULONG NodeColor;                                                        //0x37e8
    ULONG NodeShiftedColor;                                                 //0x37ec
    ULONG SecondaryColorMask;                                               //0x37f0
    LONG Sleeping;                                                          //0x37f4
    ULONGLONG CycleTime;                                                    //0x37f8
    ULONG CcFastMdlReadNoWait;                                              //0x3800
    ULONG CcFastMdlReadWait;                                                //0x3804
    ULONG CcFastMdlReadNotPossible;                                         //0x3808
    ULONG CcMapDataNoWait;                                                  //0x380c
    ULONG CcMapDataWait;                                                    //0x3810
    ULONG CcPinMappedDataCount;                                             //0x3814
    ULONG CcPinReadNoWait;                                                  //0x3818
    ULONG CcPinReadWait;                                                    //0x381c
    ULONG CcMdlReadNoWait;                                                  //0x3820
    ULONG CcMdlReadWait;                                                    //0x3824
    ULONG CcLazyWriteHotSpots;                                              //0x3828
    ULONG CcLazyWriteIos;                                                   //0x382c
    ULONG CcLazyWritePages;                                                 //0x3830
    ULONG CcDataFlushes;                                                    //0x3834
    ULONG CcDataPages;                                                      //0x3838
    ULONG CcLostDelayedWrites;                                              //0x383c
    ULONG CcFastReadResourceMiss;                                           //0x3840
    ULONG CcCopyReadWaitMiss;                                               //0x3844
    ULONG CcFastMdlReadResourceMiss;                                        //0x3848
    ULONG CcMapDataNoWaitMiss;                                              //0x384c
    ULONG CcMapDataWaitMiss;                                                //0x3850
    ULONG CcPinReadNoWaitMiss;                                              //0x3854
    ULONG CcPinReadWaitMiss;                                                //0x3858
    ULONG CcMdlReadNoWaitMiss;                                              //0x385c
    ULONG CcMdlReadWaitMiss;                                                //0x3860
    ULONG CcReadAheadIos;                                                   //0x3864
    volatile LONG MmCacheTransitionCount;                                   //0x3868
    volatile LONG MmCacheReadCount;                                         //0x386c
    volatile LONG MmCacheIoCount;                                           //0x3870
    ULONG PrcbPad91[3];                                                     //0x3874
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x3880
    ULONG KeAlignmentFixupCount;                                            //0x3998
    UCHAR VendorString[13];                                                 //0x399c
    UCHAR PrcbPad10[3];                                                     //0x39a9
    ULONG FeatureBits;                                                      //0x39ac
    union _LARGE_INTEGER UpdateSignature;                                   //0x39b0
    struct _KDPC DpcWatchdogDpc;                                            //0x39b8
    struct _KTIMER DpcWatchdogTimer;                                        //0x39f8
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x3a38
    ULONG CacheCount;                                                       //0x3a74
    volatile ULONG CachedCommit;                                            //0x3a78
    volatile ULONG CachedResidentAvailable;                                 //0x3a7c
    VOID* HyperPte;                                                         //0x3a80
    VOID* WheaInfo;                                                         //0x3a88
    VOID* EtwSupport;                                                       //0x3a90
    union _SLIST_HEADER InterruptObjectPool;                                //0x3aa0
    union _SLIST_HEADER HypercallPageList;                                  //0x3ab0
    VOID* HypercallPageVirtual;                                             //0x3ac0
    VOID* VirtualApicAssist;                                                //0x3ac8
    ULONGLONG* StatisticsPage;                                              //0x3ad0
    VOID* RateControl;                                                      //0x3ad8
    ULONGLONG CacheProcessorMask[5];                                        //0x3ae0
    ULONGLONG PackageProcessorSet;                                          //0x3b08
    ULONGLONG CoreProcessorSet;                                             //0x3b10
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD
// _PROCESSOR_POWER_STATE

