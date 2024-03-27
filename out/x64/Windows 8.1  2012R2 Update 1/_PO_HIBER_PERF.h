#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x1a8 bytes (sizeof)
struct _PO_HIBER_PERF
{
    ULONGLONG HiberIoTicks;                                                 //0x0
    ULONGLONG HiberIoCpuTicks;                                              //0x8
    ULONGLONG HiberInitTicks;                                               //0x10
    ULONGLONG HiberHiberFileTicks;                                          //0x18
    ULONGLONG HiberCompressTicks;                                           //0x20
    ULONGLONG HiberSharedBufferTicks;                                       //0x28
    union _LARGE_INTEGER TotalHibernateTime;                                //0x30
    ULONG POSTTime;                                                         //0x38
    ULONG ResumeBootMgrTime;                                                //0x3c
    ULONG BootmgrUserInputTime;                                             //0x40
    ULONGLONG ResumeAppTicks;                                               //0x48
    ULONGLONG ResumeAppStartTimestamp;                                      //0x50
    ULONGLONG ResumeLibraryInitTicks;                                       //0x58
    ULONGLONG ResumeInitTicks;                                              //0x60
    ULONGLONG ResumeRestoreImageStartTimestamp;                             //0x68
    ULONGLONG ResumeHiberFileTicks;                                         //0x70
    ULONGLONG ResumeIoTicks;                                                //0x78
    ULONGLONG ResumeDecompressTicks;                                        //0x80
    ULONGLONG ResumeAllocateTicks;                                          //0x88
    ULONGLONG ResumeUserInOutTicks;                                         //0x90
    ULONGLONG ResumeMapTicks;                                               //0x98
    ULONGLONG ResumeUnmapTicks;                                             //0xa0
    ULONGLONG ResumeKernelSwitchTimestamp;                                  //0xa8
    ULONGLONG WriteLogDataTimestamp;                                        //0xb0
    ULONGLONG KernelReturnFromHandler;                                      //0xb8
    ULONGLONG TimeStampCounterAtSwitchTime;                                 //0xc0
    ULONGLONG HalTscOffset;                                                 //0xc8
    ULONGLONG HvlTscOffset;                                                 //0xd0
    ULONGLONG SleeperThreadEnd;                                             //0xd8
    ULONGLONG KernelReturnSystemPowerStateTimestamp;                        //0xe0
    ULONGLONG IoBoundedness;                                                //0xe8
    ULONGLONG KernelDecompressTicks;                                        //0xf0
    ULONGLONG KernelIoTicks;                                                //0xf8
    ULONGLONG KernelCopyTicks;                                              //0x100
    ULONGLONG ReadCheckCount;                                               //0x108
    ULONGLONG KernelInitTicks;                                              //0x110
    ULONGLONG KernelResumeHiberFileTicks;                                   //0x118
    ULONGLONG KernelIoCpuTicks;                                             //0x120
    ULONGLONG KernelSharedBufferTicks;                                      //0x128
    ULONGLONG KernelAnimationTicks;                                         //0x130
    union _LARGE_INTEGER AnimationStart;                                    //0x138
    union _LARGE_INTEGER AnimationStop;                                     //0x140
    ULONG DeviceResumeTime;                                                 //0x148
    ULONGLONG BootPagesProcessed;                                           //0x150
    ULONGLONG KernelPagesProcessed;                                         //0x158
    ULONGLONG BootBytesWritten;                                             //0x160
    ULONGLONG KernelBytesWritten;                                           //0x168
    ULONGLONG BootPagesWritten;                                             //0x170
    ULONGLONG KernelPagesWritten;                                           //0x178
    ULONGLONG BytesWritten;                                                 //0x180
    ULONG PagesWritten;                                                     //0x188
    ULONG FileRuns;                                                         //0x18c
    ULONG NoMultiStageResumeReason;                                         //0x190
    ULONG MaxHuffRatio;                                                     //0x194
    ULONGLONG AdjustedTotalResumeTime;                                      //0x198
    ULONGLONG ResumeCompleteTimestamp;                                      //0x1a0
};
/* Used in */
// PO_MEMORY_IMAGE

