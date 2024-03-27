#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_KNODE.h>
#include <_KPRCB.h>
#include <_LARGE_INTEGER.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_KDPC_DATA.h>
#include <_KEVENT.h>
#include <_KDPC.h>
#include <_LIST_ENTRY.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_FX_SAVE_AREA.h>
#include <_PROCESSOR_POWER_STATE.h>

//0xec0 bytes (sizeof)
struct _KPRCB
{
    USHORT MinorVersion;                                                    //0x0
    USHORT MajorVersion;                                                    //0x2
    struct _KTHREAD* CurrentThread;                                         //0x4
    struct _KTHREAD* NextThread;                                            //0x8
    struct _KTHREAD* IdleThread;                                            //0xc
    CHAR Number;                                                            //0x10
    CHAR Reserved;                                                          //0x11
    USHORT BuildType;                                                       //0x12
    ULONG SetMember;                                                        //0x14
    CHAR CpuType;                                                           //0x18
    CHAR CpuID;                                                             //0x19
    USHORT CpuStep;                                                         //0x1a
    struct _KPROCESSOR_STATE ProcessorState;                                //0x1c
    ULONG KernelReserved[16];                                               //0x33c
    ULONG HalReserved[16];                                                  //0x37c
    UCHAR PrcbPad0[92];                                                     //0x3bc
    struct _KSPIN_LOCK_QUEUE LockQueue[33];                                 //0x418
    struct _KTHREAD* NpxThread;                                             //0x520
    ULONG InterruptCount;                                                   //0x524
    ULONG KernelTime;                                                       //0x528
    ULONG UserTime;                                                         //0x52c
    ULONG DpcTime;                                                          //0x530
    ULONG DebugDpcTime;                                                     //0x534
    ULONG InterruptTime;                                                    //0x538
    ULONG AdjustDpcThreshold;                                               //0x53c
    ULONG PageColor;                                                        //0x540
    UCHAR SkipTick;                                                         //0x544
    UCHAR DebuggerSavedIRQL;                                                //0x545
    UCHAR NodeColor;                                                        //0x546
    UCHAR Spare1;                                                           //0x547
    ULONG NodeShiftedColor;                                                 //0x548
    struct _KNODE* ParentNode;                                              //0x54c
    ULONG MultiThreadProcessorSet;                                          //0x550
    struct _KPRCB* MultiThreadSetMaster;                                    //0x554
    ULONG SecondaryColorMask;                                               //0x558
    LONG Sleeping;                                                          //0x55c
    ULONG CcFastReadNoWait;                                                 //0x560
    ULONG CcFastReadWait;                                                   //0x564
    ULONG CcFastReadNotPossible;                                            //0x568
    ULONG CcCopyReadNoWait;                                                 //0x56c
    ULONG CcCopyReadWait;                                                   //0x570
    ULONG CcCopyReadNoWaitMiss;                                             //0x574
    ULONG KeAlignmentFixupCount;                                            //0x578
    ULONG SpareCounter0;                                                    //0x57c
    ULONG KeDcacheFlushCount;                                               //0x580
    ULONG KeExceptionDispatchCount;                                         //0x584
    ULONG KeFirstLevelTbFills;                                              //0x588
    ULONG KeFloatingEmulationCount;                                         //0x58c
    ULONG KeIcacheFlushCount;                                               //0x590
    ULONG KeSecondLevelTbFills;                                             //0x594
    ULONG KeSystemCalls;                                                    //0x598
    volatile LONG IoReadOperationCount;                                     //0x59c
    volatile LONG IoWriteOperationCount;                                    //0x5a0
    volatile LONG IoOtherOperationCount;                                    //0x5a4
    union _LARGE_INTEGER IoReadTransferCount;                               //0x5a8
    union _LARGE_INTEGER IoWriteTransferCount;                              //0x5b0
    union _LARGE_INTEGER IoOtherTransferCount;                              //0x5b8
    ULONG SpareCounter1[8];                                                 //0x5c0
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x5e0
    struct _PP_LOOKASIDE_LIST PPNPagedLookasideList[32];                    //0x660
    struct _PP_LOOKASIDE_LIST PPPagedLookasideList[32];                     //0x760
    volatile ULONG PacketBarrier;                                           //0x860
    volatile ULONG ReverseStall;                                            //0x864
    VOID* IpiFrame;                                                         //0x868
    UCHAR PrcbPad2[52];                                                     //0x86c
    VOID* volatile CurrentPacket[3];                                        //0x8a0
    volatile ULONG TargetSet;                                               //0x8ac
    VOID (* volatileWorkerRoutine)(VOID* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x8b0
    volatile ULONG IpiFrozen;                                               //0x8b4
    UCHAR PrcbPad3[40];                                                     //0x8b8
    volatile ULONG RequestSummary;                                          //0x8e0
    struct _KPRCB* SignalDone;                                              //0x8e4
    UCHAR PrcbPad4[56];                                                     //0x8e8
    struct _KDPC_DATA DpcData[2];                                           //0x920
    VOID* DpcStack;                                                         //0x948
    ULONG MaximumDpcQueueDepth;                                             //0x94c
    ULONG DpcRequestRate;                                                   //0x950
    ULONG MinimumDpcRate;                                                   //0x954
    volatile UCHAR DpcInterruptRequested;                                   //0x958
    volatile UCHAR DpcThreadRequested;                                      //0x959
    volatile UCHAR DpcRoutineActive;                                        //0x95a
    volatile UCHAR DpcThreadActive;                                         //0x95b
    ULONG PrcbLock;                                                         //0x95c
    ULONG DpcLastCount;                                                     //0x960
    volatile ULONG TimerHand;                                               //0x964
    volatile ULONG TimerRequest;                                            //0x968
    VOID* DpcThread;                                                        //0x96c
    struct _KEVENT DpcEvent;                                                //0x970
    UCHAR ThreadDpcEnable;                                                  //0x980
    volatile UCHAR QuantumEnd;                                              //0x981
    UCHAR PrcbPad50;                                                        //0x982
    volatile UCHAR IdleSchedule;                                            //0x983
    LONG DpcSetEventRequest;                                                //0x984
    UCHAR PrcbPad5[18];                                                     //0x988
    LONG TickOffset;                                                        //0x99c
    struct _KDPC CallDpc;                                                   //0x9a0
    ULONG PrcbPad7[8];                                                      //0x9c0
    struct _LIST_ENTRY WaitListHead;                                        //0x9e0
    ULONG ReadySummary;                                                     //0x9e8
    ULONG QueueIndex;                                                       //0x9ec
    struct _LIST_ENTRY DispatcherReadyListHead[32];                         //0x9f0
    struct _SINGLE_LIST_ENTRY DeferredReadyListHead;                        //0xaf0
    ULONG PrcbPad72[11];                                                    //0xaf4
    VOID* ChainedInterruptList;                                             //0xb20
    LONG LookasideIrpFloat;                                                 //0xb24
    volatile LONG MmPageFaultCount;                                         //0xb28
    volatile LONG MmCopyOnWriteCount;                                       //0xb2c
    volatile LONG MmTransitionCount;                                        //0xb30
    volatile LONG MmCacheTransitionCount;                                   //0xb34
    volatile LONG MmDemandZeroCount;                                        //0xb38
    volatile LONG MmPageReadCount;                                          //0xb3c
    volatile LONG MmPageReadIoCount;                                        //0xb40
    volatile LONG MmCacheReadCount;                                         //0xb44
    volatile LONG MmCacheIoCount;                                           //0xb48
    volatile LONG MmDirtyPagesWriteCount;                                   //0xb4c
    volatile LONG MmDirtyWriteIoCount;                                      //0xb50
    volatile LONG MmMappedPagesWriteCount;                                  //0xb54
    volatile LONG MmMappedWriteIoCount;                                     //0xb58
    ULONG SpareFields0[1];                                                  //0xb5c
    UCHAR VendorString[13];                                                 //0xb60
    UCHAR InitialApicId;                                                    //0xb6d
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0xb6e
    ULONG MHz;                                                              //0xb70
    ULONG FeatureBits;                                                      //0xb74
    union _LARGE_INTEGER UpdateSignature;                                   //0xb78
    volatile ULONGLONG IsrTime;                                             //0xb80
    ULONGLONG SpareField1;                                                  //0xb88
    struct _FX_SAVE_AREA NpxSaveArea;                                       //0xb90
    struct _PROCESSOR_POWER_STATE PowerState;                               //0xda0
};
/* Used in */
// _KPCR
// _KPRCB

