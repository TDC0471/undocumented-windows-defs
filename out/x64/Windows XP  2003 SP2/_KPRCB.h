#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_PP_LOOKASIDE_LIST.h>
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
#include <_CACHE_DESCRIPTOR.h>

//0x2480 bytes (sizeof)
struct _KPRCB
{
    ULONG MxCsr;                                                            //0x0
    UCHAR Number;                                                           //0x4
    UCHAR NestingLevel;                                                     //0x5
    UCHAR InterruptRequest;                                                 //0x6
    UCHAR IdleHalt;                                                         //0x7
    struct _KTHREAD* CurrentThread;                                         //0x8
    struct _KTHREAD* NextThread;                                            //0x10
    struct _KTHREAD* IdleThread;                                            //0x18
    ULONGLONG UserRsp;                                                      //0x20
    ULONGLONG RspBase;                                                      //0x28
    ULONGLONG PrcbLock;                                                     //0x30
    ULONGLONG SetMember;                                                    //0x38
    struct _KPROCESSOR_STATE ProcessorState;                                //0x40
    CHAR CpuType;                                                           //0x5f0
    CHAR CpuID;                                                             //0x5f1
    USHORT CpuStep;                                                         //0x5f2
    ULONG MHz;                                                              //0x5f4
    ULONGLONG HalReserved[8];                                               //0x5f8
    USHORT MinorVersion;                                                    //0x638
    USHORT MajorVersion;                                                    //0x63a
    UCHAR BuildType;                                                        //0x63c
    UCHAR CpuVendor;                                                        //0x63d
    UCHAR InitialApicId;                                                    //0x63e
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0x63f
    ULONG ApicMask;                                                         //0x640
    UCHAR CFlushSize;                                                       //0x644
    UCHAR PrcbPad0x[3];                                                     //0x645
    VOID* AcpiReserved;                                                     //0x648
    ULONGLONG PrcbPad00[4];                                                 //0x650
    struct _KSPIN_LOCK_QUEUE LockQueue[33];                                 //0x670
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x880
    struct _PP_LOOKASIDE_LIST PPNPagedLookasideList[32];                    //0x980
    struct _PP_LOOKASIDE_LIST PPPagedLookasideList[32];                     //0xb80
    volatile ULONGLONG PacketBarrier;                                       //0xd80
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0xd88
    volatile LONG MmPageFaultCount;                                         //0xd90
    volatile LONG MmCopyOnWriteCount;                                       //0xd94
    volatile LONG MmTransitionCount;                                        //0xd98
    volatile LONG MmCacheTransitionCount;                                   //0xd9c
    volatile LONG MmDemandZeroCount;                                        //0xda0
    volatile LONG MmPageReadCount;                                          //0xda4
    volatile LONG MmPageReadIoCount;                                        //0xda8
    volatile LONG MmCacheReadCount;                                         //0xdac
    volatile LONG MmCacheIoCount;                                           //0xdb0
    volatile LONG MmDirtyPagesWriteCount;                                   //0xdb4
    volatile LONG MmDirtyWriteIoCount;                                      //0xdb8
    volatile LONG MmMappedPagesWriteCount;                                  //0xdbc
    volatile LONG MmMappedWriteIoCount;                                     //0xdc0
    LONG LookasideIrpFloat;                                                 //0xdc4
    ULONG KeSystemCalls;                                                    //0xdc8
    volatile LONG IoReadOperationCount;                                     //0xdcc
    volatile LONG IoWriteOperationCount;                                    //0xdd0
    volatile LONG IoOtherOperationCount;                                    //0xdd4
    union _LARGE_INTEGER IoReadTransferCount;                               //0xdd8
    union _LARGE_INTEGER IoWriteTransferCount;                              //0xde0
    union _LARGE_INTEGER IoOtherTransferCount;                              //0xde8
    ULONG KeContextSwitches;                                                //0xdf0
    UCHAR PrcbPad2[12];                                                     //0xdf4
    volatile ULONGLONG TargetSet;                                           //0xe00
    volatile ULONG IpiFrozen;                                               //0xe08
    UCHAR PrcbPad3[116];                                                    //0xe0c
    struct _REQUEST_MAILBOX RequestMailbox[64];                             //0xe80
    volatile ULONGLONG SenderSummary;                                       //0x1e80
    UCHAR PrcbPad4[120];                                                    //0x1e88
    struct _KDPC_DATA DpcData[2];                                           //0x1f00
    VOID* DpcStack;                                                         //0x1f40
    VOID* SavedRsp;                                                         //0x1f48
    LONG MaximumDpcQueueDepth;                                              //0x1f50
    ULONG DpcRequestRate;                                                   //0x1f54
    ULONG MinimumDpcRate;                                                   //0x1f58
    volatile UCHAR DpcInterruptRequested;                                   //0x1f5c
    volatile UCHAR DpcThreadRequested;                                      //0x1f5d
    volatile UCHAR DpcRoutineActive;                                        //0x1f5e
    volatile UCHAR DpcThreadActive;                                         //0x1f5f
    union
    {
        volatile ULONGLONG TimerHand;                                       //0x1f60
        volatile ULONGLONG TimerRequest;                                    //0x1f60
    };
    LONG TickOffset;                                                        //0x1f68
    LONG MasterOffset;                                                      //0x1f6c
    ULONG DpcLastCount;                                                     //0x1f70
    UCHAR ThreadDpcEnable;                                                  //0x1f74
    volatile UCHAR QuantumEnd;                                              //0x1f75
    UCHAR PrcbPad50;                                                        //0x1f76
    volatile UCHAR IdleSchedule;                                            //0x1f77
    LONG DpcSetEventRequest;                                                //0x1f78
    LONG PrcbPad40;                                                         //0x1f7c
    VOID* DpcThread;                                                        //0x1f80
    struct _KEVENT DpcEvent;                                                //0x1f88
    struct _KDPC CallDpc;                                                   //0x1fa0
    ULONGLONG PrcbPad7[4];                                                  //0x1fe0
    struct _LIST_ENTRY WaitListHead;                                        //0x2000
    ULONG ReadySummary;                                                     //0x2010
    ULONG QueueIndex;                                                       //0x2014
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x2018
    ULONG InterruptCount;                                                   //0x2218
    ULONG KernelTime;                                                       //0x221c
    ULONG UserTime;                                                         //0x2220
    ULONG DpcTime;                                                          //0x2224
    ULONG InterruptTime;                                                    //0x2228
    ULONG AdjustDpcThreshold;                                               //0x222c
    UCHAR SkipTick;                                                         //0x2230
    UCHAR DebuggerSavedIRQL;                                                //0x2231
    UCHAR PollSlot;                                                         //0x2232
    UCHAR PrcbPad8[13];                                                     //0x2233
    struct _KNODE* ParentNode;                                              //0x2240
    ULONGLONG MultiThreadProcessorSet;                                      //0x2248
    struct _KPRCB* MultiThreadSetMaster;                                    //0x2250
    LONG Sleeping;                                                          //0x2258
    ULONG PrcbPad90[1];                                                     //0x225c
    ULONG DebugDpcTime;                                                     //0x2260
    ULONG PageColor;                                                        //0x2264
    ULONG NodeColor;                                                        //0x2268
    ULONG NodeShiftedColor;                                                 //0x226c
    ULONG SecondaryColorMask;                                               //0x2270
    UCHAR PrcbPad9[12];                                                     //0x2274
    ULONG CcFastReadNoWait;                                                 //0x2280
    ULONG CcFastReadWait;                                                   //0x2284
    ULONG CcFastReadNotPossible;                                            //0x2288
    ULONG CcCopyReadNoWait;                                                 //0x228c
    ULONG CcCopyReadWait;                                                   //0x2290
    ULONG CcCopyReadNoWaitMiss;                                             //0x2294
    ULONG KeAlignmentFixupCount;                                            //0x2298
    ULONG KeDcacheFlushCount;                                               //0x229c
    ULONG KeExceptionDispatchCount;                                         //0x22a0
    ULONG KeFirstLevelTbFills;                                              //0x22a4
    ULONG KeFloatingEmulationCount;                                         //0x22a8
    ULONG KeIcacheFlushCount;                                               //0x22ac
    ULONG KeSecondLevelTbFills;                                             //0x22b0
    UCHAR VendorString[13];                                                 //0x22b4
    UCHAR PrcbPad10[2];                                                     //0x22c1
    ULONG FeatureBits;                                                      //0x22c4
    union _LARGE_INTEGER UpdateSignature;                                   //0x22c8
    struct _PROCESSOR_POWER_STATE PowerState;                               //0x22d0
    struct _CACHE_DESCRIPTOR Cache[5];                                      //0x2440
    ULONG CacheCount;                                                       //0x247c
};
/* Used in */
// _KPCR
// _KPRCB

