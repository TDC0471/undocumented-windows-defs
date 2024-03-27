#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KNODE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_LARGE_INTEGER.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_GENERAL_LOOKASIDE_POOL.h>
#include <_KPRCB.h>
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

//0x4508 bytes (sizeof)
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
    UCHAR PrcbPad20[6];                                                     //0x4c2
    ULONG NodeShiftedColor;                                                 //0x4c8
    ULONG SecondaryColorMask;                                               //0x4cc
    ULONG DpcTimeLimit;                                                     //0x4d0
    ULONG PrcbPad21[3];                                                     //0x4d4
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
    volatile ULONG PacketBarrier;                                           //0x2120
    volatile LONG ReverseStall;                                             //0x2124
    VOID* IpiFrame;                                                         //0x2128
    UCHAR PrcbPad3[52];                                                     //0x212c
    VOID* volatile CurrentPacket[3];                                        //0x2160
    volatile ULONG TargetSet;                                               //0x216c
    VOID (* volatileWorkerRoutine)(VOID* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x2170
    volatile ULONG IpiFrozen;                                               //0x2174
    UCHAR PrcbPad4[40];                                                     //0x2178
    volatile ULONG RequestSummary;                                          //0x21a0
    struct _KPRCB* volatile SignalDone;                                     //0x21a4
    UCHAR PrcbPad50[40];                                                    //0x21a8
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
    UCHAR ThreadDpcEnable;                                                  //0x2238
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
    UCHAR PrcbPad41[3];                                                     //0x2259
    struct _KTIMER_TABLE TimerTable;                                        //0x2260
    struct _KDPC CallDpc;                                                   //0x3aa0
    LONG ClockKeepAlive;                                                    //0x3ac0
    UCHAR PrcbPad6[4];                                                      //0x3ac4
    LONG DpcWatchdogPeriod;                                                 //0x3ac8
    LONG DpcWatchdogCount;                                                  //0x3acc
    volatile LONG KeSpinLockOrdering;                                       //0x3ad0
    ULONG PrcbPad70[1];                                                     //0x3ad4
    ULONG QueueIndex;                                                       //0x3ad8
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0x3adc
    ULONG ReadySummary;                                                     //0x3ae0
    LONG AffinitizedSelectionMask;                                          //0x3ae4
    ULONG WaitLock;                                                         //0x3ae8
    struct _LIST_ENTRY WaitListHead;                                        //0x3aec
    ULONG ScbOffset;                                                        //0x3af4
    ULONGLONG StartCycles;                                                  //0x3af8
    ULONGLONG GenerationTarget;                                             //0x3b00
    volatile ULONGLONG CycleTime;                                           //0x3b08
    ULONGLONG AffinitizedCycles;                                            //0x3b10
    volatile ULONG HighCycleTime;                                           //0x3b18
    ULONG PrcbPad71;                                                        //0x3b1c
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x3b20
    VOID* ChainedInterruptList;                                             //0x3c20
    LONG LookasideIrpFloat;                                                 //0x3c24
    struct _RTL_RB_TREE ScbQueue;                                           //0x3c28
    struct _LIST_ENTRY ScbList;                                             //0x3c30
    volatile LONG MmPageFaultCount;                                         //0x3c38
    volatile LONG MmCopyOnWriteCount;                                       //0x3c3c
    volatile LONG MmTransitionCount;                                        //0x3c40
    volatile LONG MmCacheTransitionCount;                                   //0x3c44
    volatile LONG MmDemandZeroCount;                                        //0x3c48
    volatile LONG MmPageReadCount;                                          //0x3c4c
    volatile LONG MmPageReadIoCount;                                        //0x3c50
    volatile LONG MmCacheReadCount;                                         //0x3c54
    volatile LONG MmCacheIoCount;                                           //0x3c58
    volatile LONG MmDirtyPagesWriteCount;                                   //0x3c5c
    volatile LONG MmDirtyWriteIoCount;                                      //0x3c60
    volatile LONG MmMappedPagesWriteCount;                                  //0x3c64
    volatile LONG MmMappedWriteIoCount;                                     //0x3c68
    volatile ULONG CachedCommit;                                            //0x3c6c
    volatile ULONG CachedResidentAvailable;                                 //0x3c70
    VOID* HyperPte;                                                         //0x3c74
    UCHAR PrcbPad8[4];                                                      //0x3c78
    UCHAR VendorString[13];                                                 //0x3c7c
    UCHAR InitialApicId;                                                    //0x3c89
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0x3c8a
    UCHAR PrcbPad9[5];                                                      //0x3c8b
    ULONG FeatureBits;                                                      //0x3c90
    union _LARGE_INTEGER UpdateSignature;                                   //0x3c98
    volatile ULONGLONG IsrTime;                                             //0x3ca0
    ULONG PrcbPad90[2];                                                     //0x3ca8
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x3cb0
    ULONG PrcbPad91[13];                                                    //0x3e40
    struct _KDPC DpcWatchdogDpc;                                            //0x3e74
    struct _KTIMER DpcWatchdogTimer;                                        //0x3e98
    union _SLIST_HEADER HypercallPageList;                                  //0x3ec0
    VOID* HypercallPageVirtual;                                             //0x3ec8
    VOID* VirtualApicAssist;                                                //0x3ecc
    ULONGLONG* StatisticsPage;                                              //0x3ed0
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x3ed4
    ULONG CacheCount;                                                       //0x3f10
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x3f14
    ULONG SharedReadyQueueMask;                                             //0x3f20
    struct _KSHARED_READY_QUEUE* SharedReadyQueue;                          //0x3f24
    ULONG CoreProcessorSet;                                                 //0x3f28
    ULONG ScanSiblingMask;                                                  //0x3f2c
    ULONG LLCMask;                                                          //0x3f30
    ULONG CacheProcessorMask[5];                                            //0x3f34
    ULONG ScanSiblingIndex;                                                 //0x3f48
    VOID* WheaInfo;                                                         //0x3f4c
    VOID* EtwSupport;                                                       //0x3f50
    union _SLIST_HEADER InterruptObjectPool;                                //0x3f58
    ULONG SharedReadyQueueOffset;                                           //0x3f60
    ULONG PrcbPad92[2];                                                     //0x3f64
    ULONG PteBitCache;                                                      //0x3f6c
    ULONG PteBitOffset;                                                     //0x3f70
    ULONG PrcbPad93;                                                        //0x3f74
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x3f78
    VOID* ProfileEventIndexAddress;                                         //0x3f7c
    struct _KDPC TimerExpirationDpc;                                        //0x3f80
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x3fa0
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x4058
    struct _CONTEXT* Context;                                               //0x4068
    ULONG ContextFlagsInit;                                                 //0x406c
    struct _XSAVE_AREA* ExtendedState;                                      //0x4070
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x4074
    VOID* IsrStack;                                                         //0x419c
    struct _KINTERRUPT* VectorToInterruptObject[208];                       //0x41a0
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;                           //0x44e0
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;                        //0x44e4
    struct _KDPC AbDpc;                                                     //0x44e8
};
/* Used in */
// _KPCR
// _KPRCB
// _KTHREAD
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

