#pragma once
/* ------------------ */

#include <_KTHREAD.h>
#include <_KPROCESSOR_STATE.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_KNODE.h>
#include <_KPRCB.h>
#include <_PP_LOOKASIDE_LIST.h>
#include <_LIST_ENTRY.h>
#include <_KDPC.h>
#include <_LARGE_INTEGER.h>
#include <_FX_SAVE_AREA.h>
#include <_PROCESSOR_POWER_STATE.h>

//0xc50 bytes (sizeof)
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
    struct _KSPIN_LOCK_QUEUE LockQueue[16];                                 //0x418
    UCHAR PrcbPad1[8];                                                      //0x498
    struct _KTHREAD* NpxThread;                                             //0x4a0
    ULONG InterruptCount;                                                   //0x4a4
    ULONG KernelTime;                                                       //0x4a8
    ULONG UserTime;                                                         //0x4ac
    ULONG DpcTime;                                                          //0x4b0
    ULONG DebugDpcTime;                                                     //0x4b4
    ULONG InterruptTime;                                                    //0x4b8
    ULONG AdjustDpcThreshold;                                               //0x4bc
    ULONG PageColor;                                                        //0x4c0
    ULONG SkipTick;                                                         //0x4c4
    UCHAR MultiThreadSetBusy;                                               //0x4c8
    UCHAR Spare2[3];                                                        //0x4c9
    struct _KNODE* ParentNode;                                              //0x4cc
    ULONG MultiThreadProcessorSet;                                          //0x4d0
    struct _KPRCB* MultiThreadSetMaster;                                    //0x4d4
    ULONG ThreadStartCount[2];                                              //0x4d8
    ULONG CcFastReadNoWait;                                                 //0x4e0
    ULONG CcFastReadWait;                                                   //0x4e4
    ULONG CcFastReadNotPossible;                                            //0x4e8
    ULONG CcCopyReadNoWait;                                                 //0x4ec
    ULONG CcCopyReadWait;                                                   //0x4f0
    ULONG CcCopyReadNoWaitMiss;                                             //0x4f4
    ULONG KeAlignmentFixupCount;                                            //0x4f8
    ULONG KeContextSwitches;                                                //0x4fc
    ULONG KeDcacheFlushCount;                                               //0x500
    ULONG KeExceptionDispatchCount;                                         //0x504
    ULONG KeFirstLevelTbFills;                                              //0x508
    ULONG KeFloatingEmulationCount;                                         //0x50c
    ULONG KeIcacheFlushCount;                                               //0x510
    ULONG KeSecondLevelTbFills;                                             //0x514
    ULONG KeSystemCalls;                                                    //0x518
    ULONG SpareCounter0[1];                                                 //0x51c
    struct _PP_LOOKASIDE_LIST PPLookasideList[16];                          //0x520
    struct _PP_LOOKASIDE_LIST PPNPagedLookasideList[32];                    //0x5a0
    struct _PP_LOOKASIDE_LIST PPPagedLookasideList[32];                     //0x6a0
    volatile ULONG PacketBarrier;                                           //0x7a0
    volatile ULONG ReverseStall;                                            //0x7a4
    VOID* IpiFrame;                                                         //0x7a8
    UCHAR PrcbPad2[52];                                                     //0x7ac
    VOID* volatile CurrentPacket[3];                                        //0x7e0
    volatile ULONG TargetSet;                                               //0x7ec
    VOID (* volatileWorkerRoutine)(VOID* arg1, VOID* arg2, VOID* arg3, VOID* arg4); //0x7f0
    volatile ULONG IpiFrozen;                                               //0x7f4
    UCHAR PrcbPad3[40];                                                     //0x7f8
    volatile ULONG RequestSummary;                                          //0x820
    struct _KPRCB* SignalDone;                                              //0x824
    UCHAR PrcbPad4[56];                                                     //0x828
    struct _LIST_ENTRY DpcListHead;                                         //0x860
    VOID* DpcStack;                                                         //0x868
    ULONG DpcCount;                                                         //0x86c
    volatile ULONG DpcQueueDepth;                                           //0x870
    volatile ULONG DpcRoutineActive;                                        //0x874
    volatile ULONG DpcInterruptRequested;                                   //0x878
    ULONG DpcLastCount;                                                     //0x87c
    ULONG DpcRequestRate;                                                   //0x880
    ULONG MaximumDpcQueueDepth;                                             //0x884
    ULONG MinimumDpcRate;                                                   //0x888
    ULONG QuantumEnd;                                                       //0x88c
    UCHAR PrcbPad5[16];                                                     //0x890
    ULONG DpcLock;                                                          //0x8a0
    UCHAR PrcbPad6[28];                                                     //0x8a4
    struct _KDPC CallDpc;                                                   //0x8c0
    VOID* ChainedInterruptList;                                             //0x8e0
    LONG LookasideIrpFloat;                                                 //0x8e4
    ULONG SpareFields0[6];                                                  //0x8e8
    UCHAR VendorString[13];                                                 //0x900
    UCHAR InitialApicId;                                                    //0x90d
    UCHAR LogicalProcessorsPerPhysicalProcessor;                            //0x90e
    ULONG MHz;                                                              //0x910
    ULONG FeatureBits;                                                      //0x914
    union _LARGE_INTEGER UpdateSignature;                                   //0x918
    struct _FX_SAVE_AREA NpxSaveArea;                                       //0x920
    struct _PROCESSOR_POWER_STATE PowerState;                               //0xb30
};
/* Used in */
// _KPCR
// _KPRCB

