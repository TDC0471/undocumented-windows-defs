#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KNODE.h>
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
#include <_REQUEST_MAILBOX.h>

//0x6900 bytes (sizeof)
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
    struct _KNODE* ParentNode;                                              //0x640
    ULONGLONG GroupSetMember;                                               //0x648
    UCHAR Group;                                                            //0x650
    UCHAR GroupIndex;                                                       //0x651
    UCHAR PrcbPad05[2];                                                     //0x652
    ULONG InitialApicId;                                                    //0x654
    ULONG ScbOffset;                                                        //0x658
    ULONG ApicMask;                                                         //0x65c
    VOID* AcpiReserved;                                                     //0x660
    ULONG CFlushSize;                                                       //0x668
    ULONG PrcbPad10;                                                        //0x66c
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
    USHORT LdtSelector;                                                     //0x2cc0
    USHORT PrcbPad40;                                                       //0x2cc2
    ULONG CcFastReadNoWait;                                                 //0x2cc4
    ULONG CcFastReadWait;                                                   //0x2cc8
    ULONG CcFastReadNotPossible;                                            //0x2ccc
    ULONG CcCopyReadNoWait;                                                 //0x2cd0
    ULONG CcCopyReadWait;                                                   //0x2cd4
    ULONG CcCopyReadNoWaitMiss;                                             //0x2cd8
    volatile LONG IoReadOperationCount;                                     //0x2cdc
    volatile LONG IoWriteOperationCount;                                    //0x2ce0
    volatile LONG IoOtherOperationCount;                                    //0x2ce4
    union _LARGE_INTEGER IoReadTransferCount;                               //0x2ce8
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x2cf0
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x2cf8
    volatile LONG PacketBarrier;                                            //0x2d00
    volatile LONG TargetCount;                                              //0x2d04
    volatile ULONG IpiFrozen;                                               //0x2d08
    VOID* IsrDpcStats;                                                      //0x2d10
    ULONG DeviceInterrupts;                                                 //0x2d18
    LONG LookasideIrpFloat;                                                 //0x2d1c
    ULONG InterruptLastCount;                                               //0x2d20
    ULONG InterruptRate;                                                    //0x2d24
    ULONG PrcbPad41[22];                                                    //0x2d28
    struct _KDPC_DATA DpcData[2];                                           //0x2d80
    VOID* DpcStack;                                                         //0x2dd0
    LONG MaximumDpcQueueDepth;                                              //0x2dd8
    ULONG DpcRequestRate;                                                   //0x2ddc
    ULONG MinimumDpcRate;                                                   //0x2de0
    ULONG DpcLastCount;                                                     //0x2de4
    UCHAR ThreadDpcEnable;                                                  //0x2de8
    volatile UCHAR QuantumEnd;                                              //0x2de9
    volatile UCHAR DpcRoutineActive;                                        //0x2dea
    volatile UCHAR IdleSchedule;                                            //0x2deb
    union
    {
        volatile LONG DpcRequestSummary;                                    //0x2dec
        SHORT DpcRequestSlot[2];                                            //0x2dec
        struct
        {
            SHORT NormalDpcState;                                           //0x2dec
            SHORT ThreadDpcState;                                           //0x2dee
        };
        struct
        {
            ULONG DpcNormalProcessingActive:1;                              //0x2dec
            ULONG DpcNormalProcessingRequested:1;                           //0x2dec
            ULONG DpcNormalThreadSignal:1;                                  //0x2dec
            ULONG DpcNormalTimerExpiration:1;                               //0x2dec
            ULONG DpcNormalDpcPresent:1;                                    //0x2dec
            ULONG DpcNormalLocalInterrupt:1;                                //0x2dec
            ULONG DpcNormalSpare:10;                                        //0x2dec
            ULONG DpcThreadActive:1;                                        //0x2dec
            ULONG DpcThreadRequested:1;                                     //0x2dec
            ULONG DpcThreadSpare:14;                                        //0x2dec
        };
    };
    ULONG LastTimerHand;                                                    //0x2df0
    ULONG LastTick;                                                         //0x2df4
    ULONG ClockInterrupts;                                                  //0x2df8
    ULONG ReadyScanTick;                                                    //0x2dfc
    VOID* InterruptObject[256];                                             //0x2e00
    struct _KTIMER_TABLE TimerTable;                                        //0x3600
    struct _KGATE DpcGate;                                                  //0x5800
    VOID* PrcbPad52;                                                        //0x5818
    struct _KDPC CallDpc;                                                   //0x5820
    LONG ClockKeepAlive;                                                    //0x5860
    UCHAR PrcbPad60[2];                                                     //0x5864
    USHORT NmiActive;                                                       //0x5866
    LONG DpcWatchdogPeriod;                                                 //0x5868
    LONG DpcWatchdogCount;                                                  //0x586c
    volatile LONG KeSpinLockOrdering;                                       //0x5870
    ULONG PrcbPad70[1];                                                     //0x5874
    VOID* CachedPtes;                                                       //0x5878
    struct _LIST_ENTRY WaitListHead;                                        //0x5880
    ULONGLONG WaitLock;                                                     //0x5890
    ULONG ReadySummary;                                                     //0x5898
    LONG AffinitizedSelectionMask;                                          //0x589c
    ULONG QueueIndex;                                                       //0x58a0
    ULONG PrcbPad75[3];                                                     //0x58a4
    struct _KDPC TimerExpirationDpc;                                        //0x58b0
    struct _RTL_RB_TREE ScbQueue;                                           //0x58f0
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x5900
    ULONG InterruptCount;                                                   //0x5b00
    ULONG KernelTime;                                                       //0x5b04
    ULONG UserTime;                                                         //0x5b08
    ULONG DpcTime;                                                          //0x5b0c
    ULONG InterruptTime;                                                    //0x5b10
    ULONG AdjustDpcThreshold;                                               //0x5b14
    UCHAR DebuggerSavedIRQL;                                                //0x5b18
    UCHAR GroupSchedulingOverQuota;                                         //0x5b19
    volatile UCHAR DeepSleep;                                               //0x5b1a
    UCHAR PrcbPad80[5];                                                     //0x5b1b
    ULONG DpcTimeCount;                                                     //0x5b20
    ULONG DpcTimeLimit;                                                     //0x5b24
    ULONG PeriodicCount;                                                    //0x5b28
    ULONG PeriodicBias;                                                     //0x5b2c
    ULONG AvailableTime;                                                    //0x5b30
    ULONG KeExceptionDispatchCount;                                         //0x5b34
    ULONGLONG StartCycles;                                                  //0x5b38
    ULONGLONG TaggedCyclesStart;                                            //0x5b40
    ULONGLONG TaggedCycles[2];                                              //0x5b48
    ULONGLONG GenerationTarget;                                             //0x5b58
    ULONGLONG AffinitizedCycles;                                            //0x5b60
    ULONG PrcbPad81[29];                                                    //0x5b68
    volatile LONG MmSpinLockOrdering;                                       //0x5bdc
    ULONG PageColor;                                                        //0x5be0
    ULONG NodeColor;                                                        //0x5be4
    ULONG NodeShiftedColor;                                                 //0x5be8
    ULONG SecondaryColorMask;                                               //0x5bec
    ULONG PrcbPad83;                                                        //0x5bf0
    ULONGLONG CycleTime;                                                    //0x5bf8
    ULONGLONG Cycles[4][2];                                                 //0x5c00
    ULONG PrcbPad84[16];                                                    //0x5c40
    ULONG CcFastMdlReadNoWait;                                              //0x5c80
    ULONG CcFastMdlReadWait;                                                //0x5c84
    ULONG CcFastMdlReadNotPossible;                                         //0x5c88
    ULONG CcMapDataNoWait;                                                  //0x5c8c
    ULONG CcMapDataWait;                                                    //0x5c90
    ULONG CcPinMappedDataCount;                                             //0x5c94
    ULONG CcPinReadNoWait;                                                  //0x5c98
    ULONG CcPinReadWait;                                                    //0x5c9c
    ULONG CcMdlReadNoWait;                                                  //0x5ca0
    ULONG CcMdlReadWait;                                                    //0x5ca4
    ULONG CcLazyWriteHotSpots;                                              //0x5ca8
    ULONG CcLazyWriteIos;                                                   //0x5cac
    ULONG CcLazyWritePages;                                                 //0x5cb0
    ULONG CcDataFlushes;                                                    //0x5cb4
    ULONG CcDataPages;                                                      //0x5cb8
    ULONG CcLostDelayedWrites;                                              //0x5cbc
    ULONG CcFastReadResourceMiss;                                           //0x5cc0
    ULONG CcCopyReadWaitMiss;                                               //0x5cc4
    ULONG CcFastMdlReadResourceMiss;                                        //0x5cc8
    ULONG CcMapDataNoWaitMiss;                                              //0x5ccc
    ULONG CcMapDataWaitMiss;                                                //0x5cd0
    ULONG CcPinReadNoWaitMiss;                                              //0x5cd4
    ULONG CcPinReadWaitMiss;                                                //0x5cd8
    ULONG CcMdlReadNoWaitMiss;                                              //0x5cdc
    ULONG CcMdlReadWaitMiss;                                                //0x5ce0
    ULONG CcReadAheadIos;                                                   //0x5ce4
    volatile LONG MmCacheTransitionCount;                                   //0x5ce8
    volatile LONG MmCacheReadCount;                                         //0x5cec
    volatile LONG MmCacheIoCount;                                           //0x5cf0
    ULONG PrcbPad91[3];                                                     //0x5cf4
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x5d00
    struct _LIST_ENTRY ScbList;                                             //0x5ed0
    ULONG PrcbPad92[7];                                                     //0x5ee0
    ULONG KeAlignmentFixupCount;                                            //0x5efc
    struct _KDPC DpcWatchdogDpc;                                            //0x5f00
    struct _KTIMER DpcWatchdogTimer;                                        //0x5f40
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x5f80
    ULONG CacheCount;                                                       //0x5fbc
    volatile ULONG CachedCommit;                                            //0x5fc0
    volatile ULONG CachedResidentAvailable;                                 //0x5fc4
    VOID* HyperPte;                                                         //0x5fc8
    VOID* WheaInfo;                                                         //0x5fd0
    VOID* EtwSupport;                                                       //0x5fd8
    union _SLIST_HEADER InterruptObjectPool;                                //0x5fe0
    union _SLIST_HEADER HypercallPageList;                                  //0x5ff0
    VOID* HypercallCachedPages;                                             //0x6000
    VOID* VirtualApicAssist;                                                //0x6008
    ULONGLONG* StatisticsPage;                                              //0x6010
    struct _KAFFINITY_EX PackageProcessorSet;                               //0x6018
    ULONGLONG SharedReadyQueueMask;                                         //0x60c0
    struct _KSHARED_READY_QUEUE* SharedReadyQueue;                          //0x60c8
    ULONG SharedQueueScanOwner;                                             //0x60d0
    ULONG ScanSiblingIndex;                                                 //0x60d4
    ULONGLONG CoreProcessorSet;                                             //0x60d8
    ULONGLONG ScanSiblingMask;                                              //0x60e0
    ULONGLONG LLCMask;                                                      //0x60e8
    ULONGLONG CacheProcessorMask[5];                                        //0x60f0
    struct _PROCESSOR_PROFILE_CONTROL_AREA* ProcessorProfileControlArea;    //0x6118
    VOID* ProfileEventIndexAddress;                                         //0x6120
    ULONGLONG PrcbPad94[11];                                                //0x6128
    struct _SYNCH_COUNTERS SynchCounters;                                   //0x6180
    ULONGLONG PteBitCache;                                                  //0x6238
    ULONG PteBitOffset;                                                     //0x6240
    struct _FILESYSTEM_DISK_COUNTERS FsCounters;                            //0x6248
    UCHAR VendorString[13];                                                 //0x6258
    UCHAR PrcbPad100[3];                                                    //0x6265
    ULONGLONG FeatureBits;                                                  //0x6268
    ULONG PrcbPad110;                                                       //0x6270
    union _LARGE_INTEGER UpdateSignature;                                   //0x6278
    struct _CONTEXT* Context;                                               //0x6280
    ULONG ContextFlagsInit;                                                 //0x6288
    struct _XSAVE_AREA* ExtendedState;                                      //0x6290
    VOID* IsrStack;                                                         //0x6298
    struct _KENTROPY_TIMING_STATE EntropyTimingState;                       //0x62a0
    struct _SINGLE_LIST_ENTRY AbSelfIoBoostsList;                           //0x63f0
    struct _SINGLE_LIST_ENTRY AbPropagateBoostsList;                        //0x63f8
    struct _KDPC AbDpc;                                                     //0x6400
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerCurrent;               //0x6440
    struct _IOP_IRP_STACK_PROFILER IoIrpStackProfilerPrevious;              //0x6494
    struct _KSHARED_READY_QUEUE LocalSharedReadyQueue;                      //0x6500
    struct _KTIMER_EXPIRATION_TRACE TimerExpirationTrace[16];               //0x6760
    ULONG TimerExpirationTraceCount;                                        //0x6860
    VOID* ExSaPageArray;                                                    //0x6868
    struct _REQUEST_MAILBOX* Mailbox;                                       //0x6880
    struct _REQUEST_MAILBOX RequestMailbox[1];                              //0x68c0
};
/* Used in */
// _KPCR
// _KTHREAD
// _PROC_PERF_CONSTRAINT
// _PROC_PERF_DOMAIN

