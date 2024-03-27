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

//0x3a20 bytes (sizeof)
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
    struct _KSPIN_LOCK_QUEUE LockQueue[33];                                 //0x670
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x880
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0x980
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0x1580
    volatile ULONGLONG PacketBarrier;                                       //0x2180
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x2188
    volatile LONG MmPageFaultCount;                                         //0x2190
    volatile LONG MmCopyOnWriteCount;                                       //0x2194
    volatile LONG MmTransitionCount;                                        //0x2198
    volatile LONG MmDemandZeroCount;                                        //0x219c
    volatile LONG MmPageReadCount;                                          //0x21a0
    volatile LONG MmPageReadIoCount;                                        //0x21a4
    volatile LONG MmDirtyPagesWriteCount;                                   //0x21a8
    volatile LONG MmDirtyWriteIoCount;                                      //0x21ac
    volatile LONG MmMappedPagesWriteCount;                                  //0x21b0
    volatile LONG MmMappedWriteIoCount;                                     //0x21b4
    ULONG KeSystemCalls;                                                    //0x21b8
    ULONG KeContextSwitches;                                                //0x21bc
    ULONG CcFastReadNoWait;                                                 //0x21c0
    ULONG CcFastReadWait;                                                   //0x21c4
    ULONG CcFastReadNotPossible;                                            //0x21c8
    ULONG CcCopyReadNoWait;                                                 //0x21cc
    ULONG CcCopyReadWait;                                                   //0x21d0
    ULONG CcCopyReadNoWaitMiss;                                             //0x21d4
    LONG LookasideIrpFloat;                                                 //0x21d8
    volatile LONG IoReadOperationCount;                                     //0x21dc
    volatile LONG IoWriteOperationCount;                                    //0x21e0
    volatile LONG IoOtherOperationCount;                                    //0x21e4
    union _LARGE_INTEGER IoReadTransferCount;                               //0x21e8
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x21f0
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x21f8
    volatile ULONGLONG TargetSet;                                           //0x2200
    volatile ULONG IpiFrozen;                                               //0x2208
    UCHAR PrcbPad3[116];                                                    //0x220c
    struct _REQUEST_MAILBOX RequestMailbox[64];                             //0x2280
    volatile ULONGLONG SenderSummary;                                       //0x3280
    UCHAR PrcbPad4[120];                                                    //0x3288
    struct _KDPC_DATA DpcData[2];                                           //0x3300
    VOID* DpcStack;                                                         //0x3340
    VOID* SavedRsp;                                                         //0x3348
    LONG MaximumDpcQueueDepth;                                              //0x3350
    ULONG DpcRequestRate;                                                   //0x3354
    ULONG MinimumDpcRate;                                                   //0x3358
    volatile UCHAR DpcInterruptRequested;                                   //0x335c
    volatile UCHAR DpcThreadRequested;                                      //0x335d
    volatile UCHAR DpcRoutineActive;                                        //0x335e
    volatile UCHAR DpcThreadActive;                                         //0x335f
    union
    {
        volatile ULONGLONG TimerHand;                                       //0x3360
        volatile ULONGLONG TimerRequest;                                    //0x3360
    };
    LONG TickOffset;                                                        //0x3368
    LONG MasterOffset;                                                      //0x336c
    ULONG DpcLastCount;                                                     //0x3370
    UCHAR ThreadDpcEnable;                                                  //0x3374
    volatile UCHAR QuantumEnd;                                              //0x3375
    UCHAR PrcbPad50;                                                        //0x3376
    volatile UCHAR IdleSchedule;                                            //0x3377
    LONG DpcSetEventRequest;                                                //0x3378
    ULONG KeExceptionDispatchCount;                                         //0x337c
    struct _KEVENT DpcEvent;                                                //0x3380
    VOID* PrcbPad51;                                                        //0x3398
    struct _KDPC CallDpc;                                                   //0x33a0
    LONG ClockKeepAlive;                                                    //0x33e0
    UCHAR ClockCheckSlot;                                                   //0x33e4
    UCHAR ClockPollCycle;                                                   //0x33e5
    UCHAR PrcbPad6[2];                                                      //0x33e6
    LONG DpcWatchdogPeriod;                                                 //0x33e8
    LONG DpcWatchdogCount;                                                  //0x33ec
    ULONGLONG PrcbPad70[2];                                                 //0x33f0
    struct _LIST_ENTRY WaitListHead;                                        //0x3400
    ULONGLONG WaitLock;                                                     //0x3410
    ULONG ReadySummary;                                                     //0x3418
    ULONG QueueIndex;                                                       //0x341c
    ULONGLONG PrcbPad71[12];                                                //0x3420
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x3480
    ULONG InterruptCount;                                                   //0x3680
    ULONG KernelTime;                                                       //0x3684
    ULONG UserTime;                                                         //0x3688
    ULONG DpcTime;                                                          //0x368c
    ULONG InterruptTime;                                                    //0x3690
    ULONG AdjustDpcThreshold;                                               //0x3694
    UCHAR SkipTick;                                                         //0x3698
    UCHAR DebuggerSavedIRQL;                                                //0x3699
    UCHAR PollSlot;                                                         //0x369a
    UCHAR PrcbPad80[5];                                                     //0x369b
    ULONG DpcTimeCount;                                                     //0x36a0
    ULONG DpcTimeLimit;                                                     //0x36a4
    ULONG PeriodicCount;                                                    //0x36a8
    ULONG PeriodicBias;                                                     //0x36ac
    ULONGLONG PrcbPad81[2];                                                 //0x36b0
    struct _KNODE* ParentNode;                                              //0x36c0
    ULONGLONG MultiThreadProcessorSet;                                      //0x36c8
    struct _KPRCB* MultiThreadSetMaster;                                    //0x36d0
    ULONGLONG StartCycles;                                                  //0x36d8
    volatile LONG MmSpinLockOrdering;                                       //0x36e0
    ULONG PageColor;                                                        //0x36e4
    ULONG NodeColor;                                                        //0x36e8
    ULONG NodeShiftedColor;                                                 //0x36ec
    ULONG SecondaryColorMask;                                               //0x36f0
    LONG Sleeping;                                                          //0x36f4
    ULONGLONG CycleTime;                                                    //0x36f8
    ULONG CcFastMdlReadNoWait;                                              //0x3700
    ULONG CcFastMdlReadWait;                                                //0x3704
    ULONG CcFastMdlReadNotPossible;                                         //0x3708
    ULONG CcMapDataNoWait;                                                  //0x370c
    ULONG CcMapDataWait;                                                    //0x3710
    ULONG CcPinMappedDataCount;                                             //0x3714
    ULONG CcPinReadNoWait;                                                  //0x3718
    ULONG CcPinReadWait;                                                    //0x371c
    ULONG CcMdlReadNoWait;                                                  //0x3720
    ULONG CcMdlReadWait;                                                    //0x3724
    ULONG CcLazyWriteHotSpots;                                              //0x3728
    ULONG CcLazyWriteIos;                                                   //0x372c
    ULONG CcLazyWritePages;                                                 //0x3730
    ULONG CcDataFlushes;                                                    //0x3734
    ULONG CcDataPages;                                                      //0x3738
    ULONG CcLostDelayedWrites;                                              //0x373c
    ULONG CcFastReadResourceMiss;                                           //0x3740
    ULONG CcCopyReadWaitMiss;                                               //0x3744
    ULONG CcFastMdlReadResourceMiss;                                        //0x3748
    ULONG CcMapDataNoWaitMiss;                                              //0x374c
    ULONG CcMapDataWaitMiss;                                                //0x3750
    ULONG CcPinReadNoWaitMiss;                                              //0x3754
    ULONG CcPinReadWaitMiss;                                                //0x3758
    ULONG CcMdlReadNoWaitMiss;                                              //0x375c
    ULONG CcMdlReadWaitMiss;                                                //0x3760
    ULONG CcReadAheadIos;                                                   //0x3764
    volatile LONG MmCacheTransitionCount;                                   //0x3768
    volatile LONG MmCacheReadCount;                                         //0x376c
    volatile LONG MmCacheIoCount;                                           //0x3770
    ULONG PrcbPad91[3];                                                     //0x3774
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x3780
    ULONG KeAlignmentFixupCount;                                            //0x38b8
    UCHAR VendorString[13];                                                 //0x38bc
    UCHAR PrcbPad10[3];                                                     //0x38c9
    ULONG FeatureBits;                                                      //0x38cc
    union _LARGE_INTEGER UpdateSignature;                                   //0x38d0
    struct _KDPC DpcWatchdogDpc;                                            //0x38d8
    struct _KTIMER DpcWatchdogTimer;                                        //0x3918
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x3958
    ULONG CacheCount;                                                       //0x3994
    volatile ULONG CachedCommit;                                            //0x3998
    volatile ULONG CachedResidentAvailable;                                 //0x399c
    VOID* HyperPte;                                                         //0x39a0
    VOID* WheaInfo;                                                         //0x39a8
    VOID* EtwSupport;                                                       //0x39b0
    union _SLIST_HEADER InterruptObjectPool;                                //0x39c0
    union _LARGE_INTEGER HypercallPagePhysical;                             //0x39d0
    VOID* HypercallPageVirtual;                                             //0x39d8
    VOID* RateControl;                                                      //0x39e0
    ULONGLONG CacheProcessorMask[5];                                        //0x39e8
    ULONGLONG PackageProcessorSet;                                          //0x3a10
    ULONGLONG CoreProcessorSet;                                             //0x3a18
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD
// _PROCESSOR_POWER_STATE

