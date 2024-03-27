#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_KNODE.h>
#include <_KPRCB.h>
#include <_LARGE_INTEGER.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_GENERAL_LOOKASIDE_POOL.h>
#include <_KDPC_DATA.h>
#include <_KEVENT.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_FX_SAVE_AREA.h>
#include <_PROCESSOR_POWER_STATE.h>
#include <_KTIMER.h>
#include <_SLIST_HEADER.h>
#include <_CACHE_DESCRIPTOR.h>

//0x2008 bytes (sizeof)
struct _KPRCB
{
    USHORT MinorVersion;                                                    //0x0
    USHORT MajorVersion;                                                    //0x2
    struct _KTHREAD* CurrentThread;                                         //0x4
    struct _KTHREAD* NextThread;                                            //0x8
    struct _KTHREAD* IdleThread;                                            //0xc
    UCHAR Number;                                                           //0x10
    UCHAR NestingLevel;                                                     //0x11
    USHORT BuildType;                                                       //0x12
    ULONG SetMember;                                                        //0x14
    CHAR CpuType;                                                           //0x18
    CHAR CpuID;                                                             //0x19
    union
    {
        USHORT CpuStep;                                                     //0x1a
        struct
        {
            UCHAR CpuStepping;                                              //0x1a
            UCHAR CpuModel;                                                 //0x1b
        };
    };
    struct _KPROCESSOR_STATE ProcessorState;                                //0x1c
    ULONG KernelReserved[16];                                               //0x33c
    ULONG HalReserved[16];                                                  //0x37c
    ULONG CFlushSize;                                                       //0x3bc
    UCHAR CoresPerPhysicalProcessor;                                        //0x3c0
    UCHAR LogicalProcessorsPerCore;                                         //0x3c1
    UCHAR PrcbPad0[2];                                                      //0x3c2
    ULONG MHz;                                                              //0x3c4
    UCHAR PrcbPad1[80];                                                     //0x3c8
    struct _KSPIN_LOCK_QUEUE LockQueue[49];                                 //0x418
    struct _KTHREAD* NpxThread;                                             //0x5a0
    ULONG InterruptCount;                                                   //0x5a4
    ULONG KernelTime;                                                       //0x5a8
    ULONG UserTime;                                                         //0x5ac
    ULONG DpcTime;                                                          //0x5b0
    ULONG DpcTimeCount;                                                     //0x5b4
    ULONG InterruptTime;                                                    //0x5b8
    ULONG AdjustDpcThreshold;                                               //0x5bc
    ULONG PageColor;                                                        //0x5c0
    UCHAR SkipTick;                                                         //0x5c4
    UCHAR DebuggerSavedIRQL;                                                //0x5c5
    UCHAR NodeColor;                                                        //0x5c6
    UCHAR PollSlot;                                                         //0x5c7
    ULONG NodeShiftedColor;                                                 //0x5c8
    struct _KNODE* ParentNode;                                              //0x5cc
    ULONG MultiThreadProcessorSet;                                          //0x5d0
    struct _KPRCB* MultiThreadSetMaster;                                    //0x5d4
    ULONG SecondaryColorMask;                                               //0x5d8
    ULONG DpcTimeLimit;                                                     //0x5dc
    ULONG CcFastReadNoWait;                                                 //0x5e0
    ULONG CcFastReadWait;                                                   //0x5e4
    ULONG CcFastReadNotPossible;                                            //0x5e8
    ULONG CcCopyReadNoWait;                                                 //0x5ec
    ULONG CcCopyReadWait;                                                   //0x5f0
    ULONG CcCopyReadNoWaitMiss;                                             //0x5f4
    volatile LONG MmSpinLockOrdering;                                       //0x5f8
    volatile LONG IoReadOperationCount;                                     //0x5fc
    volatile LONG IoWriteOperationCount;                                    //0x600
    volatile LONG IoOtherOperationCount;                                    //0x604
    union _LARGE_INTEGER IoReadTransferCount;                               //0x608
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x610
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x618
    ULONG CcFastMdlReadNoWait;                                              //0x620
    ULONG CcFastMdlReadWait;                                                //0x624
    ULONG CcFastMdlReadNotPossible;                                         //0x628
    ULONG CcMapDataNoWait;                                                  //0x62c
    ULONG CcMapDataWait;                                                    //0x630
    ULONG CcPinMappedDataCount;                                             //0x634
    ULONG CcPinReadNoWait;                                                  //0x638
    ULONG CcPinReadWait;                                                    //0x63c
    ULONG CcMdlReadNoWait;                                                  //0x640
    ULONG CcMdlReadWait;                                                    //0x644
    ULONG CcLazyWriteHotSpots;                                              //0x648
    ULONG CcLazyWriteIos;                                                   //0x64c
    ULONG CcLazyWritePages;                                                 //0x650
    ULONG CcDataFlushes;                                                    //0x654
    ULONG CcDataPages;                                                      //0x658
    ULONG CcLostDelayedWrites;                                              //0x65c
    ULONG CcFastReadResourceMiss;                                           //0x660
    ULONG CcCopyReadWaitMiss;                                               //0x664
    ULONG CcFastMdlReadResourceMiss;                                        //0x668
    ULONG CcMapDataNoWaitMiss;                                              //0x66c
    ULONG CcMapDataWaitMiss;                                                //0x670
    ULONG CcPinReadNoWaitMiss;                                              //0x674
    ULONG CcPinReadWaitMiss;                                                //0x678
    ULONG CcMdlReadNoWaitMiss;                                              //0x67c
    ULONG CcMdlReadWaitMiss;                                                //0x680
    ULONG CcReadAheadIos;                                                   //0x684
    ULONG KeAlignmentFixupCount;                                            //0x688
    ULONG KeExceptionDispatchCount;                                         //0x68c
    ULONG KeSystemCalls;                                                    //0x690
    ULONG PrcbPad2[3];                                                      //0x694
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x6a0
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0x720
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0x1020
    volatile ULONG PacketBarrier;                                           //0x1920
    volatile LONG ReverseStall;                                             //0x1924
    VOID* IpiFrame;                                                         //0x1928
    UCHAR PrcbPad3[52];                                                     //0x192c
    VOID* volatile CurrentPacket[3];                                        //0x1960
    volatile ULONG TargetSet;                                               //0x196c
    VOID (* volatileWorkerRoutine)(VOID* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x1970
    volatile ULONG IpiFrozen;                                               //0x1974
    UCHAR PrcbPad4[40];                                                     //0x1978
    volatile ULONG RequestSummary;                                          //0x19a0
    struct _KPRCB* volatile SignalDone;                                     //0x19a4
    UCHAR PrcbPad5[56];                                                     //0x19a8
    struct _KDPC_DATA DpcData[2];                                           //0x19e0
    VOID* DpcStack;                                                         //0x1a08
    LONG MaximumDpcQueueDepth;                                              //0x1a0c
    ULONG DpcRequestRate;                                                   //0x1a10
    ULONG MinimumDpcRate;                                                   //0x1a14
    volatile UCHAR DpcInterruptRequested;                                   //0x1a18
    volatile UCHAR DpcThreadRequested;                                      //0x1a19
    volatile UCHAR DpcRoutineActive;                                        //0x1a1a
    volatile UCHAR DpcThreadActive;                                         //0x1a1b
    ULONG PrcbLock;                                                         //0x1a1c
    ULONG DpcLastCount;                                                     //0x1a20
    volatile ULONG TimerHand;                                               //0x1a24
    volatile ULONG TimerRequest;                                            //0x1a28
    VOID* PrcbPad41;                                                        //0x1a2c
    struct _KEVENT DpcEvent;                                                //0x1a30
    UCHAR ThreadDpcEnable;                                                  //0x1a40
    volatile UCHAR QuantumEnd;                                              //0x1a41
    UCHAR PrcbPad50;                                                        //0x1a42
    volatile UCHAR IdleSchedule;                                            //0x1a43
    LONG DpcSetEventRequest;                                                //0x1a44
    LONG Sleeping;                                                          //0x1a48
    ULONG PeriodicCount;                                                    //0x1a4c
    ULONG PeriodicBias;                                                     //0x1a50
    UCHAR PrcbPad51[6];                                                     //0x1a54
    LONG TickOffset;                                                        //0x1a5c
    struct _KDPC CallDpc;                                                   //0x1a60
    LONG ClockKeepAlive;                                                    //0x1a80
    UCHAR ClockCheckSlot;                                                   //0x1a84
    UCHAR ClockPollCycle;                                                   //0x1a85
    UCHAR PrcbPad6[2];                                                      //0x1a86
    LONG DpcWatchdogPeriod;                                                 //0x1a88
    LONG DpcWatchdogCount;                                                  //0x1a8c
    LONG ThreadWatchdogPeriod;                                              //0x1a90
    LONG ThreadWatchdogCount;                                               //0x1a94
    ULONG PrcbPad70[2];                                                     //0x1a98
    struct _LIST_ENTRY WaitListHead;                                        //0x1aa0
    ULONG WaitLock;                                                         //0x1aa8
    ULONG ReadySummary;                                                     //0x1aac
    ULONG QueueIndex;                                                       //0x1ab0
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x1ab4
    ULONGLONG StartCycles;                                                  //0x1ab8
    ULONGLONG CycleTime;                                                    //0x1ac0
    ULONGLONG PrcbPad71[3];                                                 //0x1ac8
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x1ae0
    VOID* ChainedInterruptList;                                             //0x1be0
    LONG LookasideIrpFloat;                                                 //0x1be4
    volatile LONG MmPageFaultCount;                                         //0x1be8
    volatile LONG MmCopyOnWriteCount;                                       //0x1bec
    volatile LONG MmTransitionCount;                                        //0x1bf0
    volatile LONG MmCacheTransitionCount;                                   //0x1bf4
    volatile LONG MmDemandZeroCount;                                        //0x1bf8
    volatile LONG MmPageReadCount;                                          //0x1bfc
    volatile LONG MmPageReadIoCount;                                        //0x1c00
    volatile LONG MmCacheReadCount;                                         //0x1c04
    volatile LONG MmCacheIoCount;                                           //0x1c08
    volatile LONG MmDirtyPagesWriteCount;                                   //0x1c0c
    volatile LONG MmDirtyWriteIoCount;                                      //0x1c10
    volatile LONG MmMappedPagesWriteCount;                                  //0x1c14
    volatile LONG MmMappedWriteIoCount;                                     //0x1c18
    volatile ULONG CachedCommit;                                            //0x1c1c
    volatile ULONG CachedResidentAvailable;                                 //0x1c20
    VOID* HyperPte;                                                         //0x1c24
    UCHAR CpuVendor;                                                        //0x1c28
    UCHAR PrcbPad8[3];                                                      //0x1c29
    UCHAR VendorString[13];                                                 //0x1c2c
    UCHAR InitialApicId;                                                    //0x1c39
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0x1c3a
    UCHAR PrcbPad9[5];                                                      //0x1c3b
    ULONG FeatureBits;                                                      //0x1c40
    union _LARGE_INTEGER UpdateSignature;                                   //0x1c48
    volatile ULONGLONG IsrTime;                                             //0x1c50
    ULONGLONG SpareField1;                                                  //0x1c58
    struct _FX_SAVE_AREA NpxSaveArea;                                       //0x1c60
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x1e70
    struct _KDPC DpcWatchdogDpc;                                            //0x1f38
    struct _KTIMER DpcWatchdogTimer;                                        //0x1f58
    VOID* WheaInfo;                                                         //0x1f80
    VOID* EtwSupport;                                                       //0x1f84
    union _SLIST_HEADER InterruptObjectPool;                                //0x1f88
    union _SLIST_HEADER HypercallPageList;                                  //0x1f90
    VOID* HypercallPageVirtual;                                             //0x1f98
    VOID* VirtualApicAssist;                                                //0x1f9c
    ULONGLONG* StatisticsPage;                                              //0x1fa0
    VOID* RateControl;                                                      //0x1fa4
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x1fa8
    ULONG CacheCount;                                                       //0x1fe4
    ULONG CacheProcessorMask[5];                                            //0x1fe8
    ULONG PackageProcessorSet;                                              //0x1ffc
    ULONG CoreProcessorSet;                                                 //0x2000
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD
// _PROCESSOR_POWER_STATE

