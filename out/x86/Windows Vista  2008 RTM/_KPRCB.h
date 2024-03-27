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

//0x1f98 bytes (sizeof)
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
    UCHAR PrcbPad0[88];                                                     //0x3c0
    struct _KSPIN_LOCK_QUEUE LockQueue[33];                                 //0x418
    struct _KTHREAD* NpxThread;                                             //0x520
    ULONG InterruptCount;                                                   //0x524
    ULONG KernelTime;                                                       //0x528
    ULONG UserTime;                                                         //0x52c
    ULONG DpcTime;                                                          //0x530
    ULONG DpcTimeCount;                                                     //0x534
    ULONG InterruptTime;                                                    //0x538
    ULONG AdjustDpcThreshold;                                               //0x53c
    ULONG PageColor;                                                        //0x540
    UCHAR SkipTick;                                                         //0x544
    UCHAR DebuggerSavedIRQL;                                                //0x545
    UCHAR NodeColor;                                                        //0x546
    UCHAR PollSlot;                                                         //0x547
    ULONG NodeShiftedColor;                                                 //0x548
    struct _KNODE* ParentNode;                                              //0x54c
    ULONG MultiThreadProcessorSet;                                          //0x550
    struct _KPRCB* MultiThreadSetMaster;                                    //0x554
    ULONG SecondaryColorMask;                                               //0x558
    ULONG DpcTimeLimit;                                                     //0x55c
    ULONG CcFastReadNoWait;                                                 //0x560
    ULONG CcFastReadWait;                                                   //0x564
    ULONG CcFastReadNotPossible;                                            //0x568
    ULONG CcCopyReadNoWait;                                                 //0x56c
    ULONG CcCopyReadWait;                                                   //0x570
    ULONG CcCopyReadNoWaitMiss;                                             //0x574
    volatile LONG MmSpinLockOrdering;                                       //0x578
    volatile LONG IoReadOperationCount;                                     //0x57c
    volatile LONG IoWriteOperationCount;                                    //0x580
    volatile LONG IoOtherOperationCount;                                    //0x584
    union _LARGE_INTEGER IoReadTransferCount;                               //0x588
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x590
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x598
    ULONG CcFastMdlReadNoWait;                                              //0x5a0
    ULONG CcFastMdlReadWait;                                                //0x5a4
    ULONG CcFastMdlReadNotPossible;                                         //0x5a8
    ULONG CcMapDataNoWait;                                                  //0x5ac
    ULONG CcMapDataWait;                                                    //0x5b0
    ULONG CcPinMappedDataCount;                                             //0x5b4
    ULONG CcPinReadNoWait;                                                  //0x5b8
    ULONG CcPinReadWait;                                                    //0x5bc
    ULONG CcMdlReadNoWait;                                                  //0x5c0
    ULONG CcMdlReadWait;                                                    //0x5c4
    ULONG CcLazyWriteHotSpots;                                              //0x5c8
    ULONG CcLazyWriteIos;                                                   //0x5cc
    ULONG CcLazyWritePages;                                                 //0x5d0
    ULONG CcDataFlushes;                                                    //0x5d4
    ULONG CcDataPages;                                                      //0x5d8
    ULONG CcLostDelayedWrites;                                              //0x5dc
    ULONG CcFastReadResourceMiss;                                           //0x5e0
    ULONG CcCopyReadWaitMiss;                                               //0x5e4
    ULONG CcFastMdlReadResourceMiss;                                        //0x5e8
    ULONG CcMapDataNoWaitMiss;                                              //0x5ec
    ULONG CcMapDataWaitMiss;                                                //0x5f0
    ULONG CcPinReadNoWaitMiss;                                              //0x5f4
    ULONG CcPinReadWaitMiss;                                                //0x5f8
    ULONG CcMdlReadNoWaitMiss;                                              //0x5fc
    ULONG CcMdlReadWaitMiss;                                                //0x600
    ULONG CcReadAheadIos;                                                   //0x604
    ULONG KeAlignmentFixupCount;                                            //0x608
    ULONG KeExceptionDispatchCount;                                         //0x60c
    ULONG KeSystemCalls;                                                    //0x610
    ULONG PrcbPad1[3];                                                      //0x614
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x620
    struct _GENERAL_LOOKASIDE_POOL PPNPagedLookasideList[32];               //0x6a0
    struct _GENERAL_LOOKASIDE_POOL PPPagedLookasideList[32];                //0xfa0
    volatile ULONG PacketBarrier;                                           //0x18a0
    volatile LONG ReverseStall;                                             //0x18a4
    VOID* IpiFrame;                                                         //0x18a8
    UCHAR PrcbPad2[52];                                                     //0x18ac
    VOID* volatile CurrentPacket[3];                                        //0x18e0
    volatile ULONG TargetSet;                                               //0x18ec
    VOID (* volatileWorkerRoutine)(VOID* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x18f0
    volatile ULONG IpiFrozen;                                               //0x18f4
    UCHAR PrcbPad3[40];                                                     //0x18f8
    volatile ULONG RequestSummary;                                          //0x1920
    struct _KPRCB* volatile SignalDone;                                     //0x1924
    UCHAR PrcbPad4[56];                                                     //0x1928
    struct _KDPC_DATA DpcData[2];                                           //0x1960
    VOID* DpcStack;                                                         //0x1988
    LONG MaximumDpcQueueDepth;                                              //0x198c
    ULONG DpcRequestRate;                                                   //0x1990
    ULONG MinimumDpcRate;                                                   //0x1994
    volatile UCHAR DpcInterruptRequested;                                   //0x1998
    volatile UCHAR DpcThreadRequested;                                      //0x1999
    volatile UCHAR DpcRoutineActive;                                        //0x199a
    volatile UCHAR DpcThreadActive;                                         //0x199b
    ULONG PrcbLock;                                                         //0x199c
    ULONG DpcLastCount;                                                     //0x19a0
    volatile ULONG TimerHand;                                               //0x19a4
    volatile ULONG TimerRequest;                                            //0x19a8
    VOID* PrcbPad41;                                                        //0x19ac
    struct _KEVENT DpcEvent;                                                //0x19b0
    UCHAR ThreadDpcEnable;                                                  //0x19c0
    volatile UCHAR QuantumEnd;                                              //0x19c1
    UCHAR PrcbPad50;                                                        //0x19c2
    volatile UCHAR IdleSchedule;                                            //0x19c3
    LONG DpcSetEventRequest;                                                //0x19c4
    LONG Sleeping;                                                          //0x19c8
    ULONG PeriodicCount;                                                    //0x19cc
    ULONG PeriodicBias;                                                     //0x19d0
    UCHAR PrcbPad5[6];                                                      //0x19d4
    LONG TickOffset;                                                        //0x19dc
    struct _KDPC CallDpc;                                                   //0x19e0
    LONG ClockKeepAlive;                                                    //0x1a00
    UCHAR ClockCheckSlot;                                                   //0x1a04
    UCHAR ClockPollCycle;                                                   //0x1a05
    UCHAR PrcbPad6[2];                                                      //0x1a06
    LONG DpcWatchdogPeriod;                                                 //0x1a08
    LONG DpcWatchdogCount;                                                  //0x1a0c
    LONG ThreadWatchdogPeriod;                                              //0x1a10
    LONG ThreadWatchdogCount;                                               //0x1a14
    ULONG PrcbPad70[2];                                                     //0x1a18
    struct _LIST_ENTRY WaitListHead;                                        //0x1a20
    ULONG WaitLock;                                                         //0x1a28
    ULONG ReadySummary;                                                     //0x1a2c
    ULONG QueueIndex;                                                       //0x1a30
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x1a34
    ULONGLONG StartCycles;                                                  //0x1a38
    ULONGLONG CycleTime;                                                    //0x1a40
    ULONGLONG PrcbPad71[3];                                                 //0x1a48
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x1a60
    VOID* ChainedInterruptList;                                             //0x1b60
    LONG LookasideIrpFloat;                                                 //0x1b64
    volatile LONG MmPageFaultCount;                                         //0x1b68
    volatile LONG MmCopyOnWriteCount;                                       //0x1b6c
    volatile LONG MmTransitionCount;                                        //0x1b70
    volatile LONG MmCacheTransitionCount;                                   //0x1b74
    volatile LONG MmDemandZeroCount;                                        //0x1b78
    volatile LONG MmPageReadCount;                                          //0x1b7c
    volatile LONG MmPageReadIoCount;                                        //0x1b80
    volatile LONG MmCacheReadCount;                                         //0x1b84
    volatile LONG MmCacheIoCount;                                           //0x1b88
    volatile LONG MmDirtyPagesWriteCount;                                   //0x1b8c
    volatile LONG MmDirtyWriteIoCount;                                      //0x1b90
    volatile LONG MmMappedPagesWriteCount;                                  //0x1b94
    volatile LONG MmMappedWriteIoCount;                                     //0x1b98
    volatile ULONG CachedCommit;                                            //0x1b9c
    volatile ULONG CachedResidentAvailable;                                 //0x1ba0
    VOID* HyperPte;                                                         //0x1ba4
    UCHAR CpuVendor;                                                        //0x1ba8
    UCHAR PrcbPad9[3];                                                      //0x1ba9
    UCHAR VendorString[13];                                                 //0x1bac
    UCHAR InitialApicId;                                                    //0x1bb9
    UCHAR CoresPerPhysicalProcessor;                                        //0x1bba
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0x1bbb
    ULONG MHz;                                                              //0x1bbc
    ULONG FeatureBits;                                                      //0x1bc0
    union _LARGE_INTEGER UpdateSignature;                                   //0x1bc8
    volatile ULONGLONG IsrTime;                                             //0x1bd0
    ULONGLONG SpareField1;                                                  //0x1bd8
    struct _FX_SAVE_AREA NpxSaveArea;                                       //0x1be0
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x1df0
    struct _KDPC DpcWatchdogDpc;                                            //0x1ed0
    struct _KTIMER DpcWatchdogTimer;                                        //0x1ef0
    VOID* WheaInfo;                                                         //0x1f18
    VOID* EtwSupport;                                                       //0x1f1c
    union _SLIST_HEADER InterruptObjectPool;                                //0x1f20
    union _LARGE_INTEGER HypercallPagePhysical;                             //0x1f28
    VOID* HypercallPageVirtual;                                             //0x1f30
    VOID* RateControl;                                                      //0x1f34
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x1f38
    ULONG CacheCount;                                                       //0x1f74
    ULONG CacheProcessorMask[5];                                            //0x1f78
    UCHAR LogicalProcessorsPerCore;                                         //0x1f8c
    UCHAR PrcbPad8[3];                                                      //0x1f8d
    ULONG PackageProcessorSet;                                              //0x1f90
    ULONG CoreProcessorSet;                                                 //0x1f94
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD
// _PROCESSOR_POWER_STATE

