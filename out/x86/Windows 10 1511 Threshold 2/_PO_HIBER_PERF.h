#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x1e0 bytes (sizeof)
struct _PO_HIBER_PERF
{
    ULONGLONG HiberIoTicks;                                                 //0x0
    ULONGLONG HiberIoCpuTicks;                                              //0x8
    ULONGLONG HiberInitTicks;                                               //0x10
    ULONGLONG HiberHiberFileTicks;                                          //0x18
    ULONGLONG HiberCompressTicks;                                           //0x20
    ULONGLONG HiberSharedBufferTicks;                                       //0x28
    ULONGLONG HiberChecksumTicks;                                           //0x30
    ULONGLONG HiberChecksumIoTicks;                                         //0x38
    union _LARGE_INTEGER TotalHibernateTime;                                //0x40
    ULONG POSTTime;                                                         //0x48
    ULONG ResumeBootMgrTime;                                                //0x4c
    ULONG BootmgrUserInputTime;                                             //0x50
    ULONGLONG ResumeAppTicks;                                               //0x58
    ULONGLONG ResumeAppStartTimestamp;                                      //0x60
    ULONGLONG ResumeLibraryInitTicks;                                       //0x68
    ULONGLONG ResumeInitTicks;                                              //0x70
    ULONGLONG ResumeRestoreImageStartTimestamp;                             //0x78
    ULONGLONG ResumeHiberFileTicks;                                         //0x80
    ULONGLONG ResumeIoTicks;                                                //0x88
    ULONGLONG ResumeDecompressTicks;                                        //0x90
    ULONGLONG ResumeAllocateTicks;                                          //0x98
    ULONGLONG ResumeUserInOutTicks;                                         //0xa0
    ULONGLONG ResumeMapTicks;                                               //0xa8
    ULONGLONG ResumeUnmapTicks;                                             //0xb0
    ULONGLONG ResumeChecksumTicks;                                          //0xb8
    ULONGLONG ResumeChecksumIoTicks;                                        //0xc0
    ULONGLONG ResumeKernelSwitchTimestamp;                                  //0xc8
    ULONGLONG WriteLogDataTimestamp;                                        //0xd0
    ULONGLONG KernelReturnFromHandler;                                      //0xd8
    ULONGLONG TimeStampCounterAtSwitchTime;                                 //0xe0
    ULONGLONG HalTscOffset;                                                 //0xe8
    ULONGLONG HvlTscOffset;                                                 //0xf0
    ULONGLONG SleeperThreadEnd;                                             //0xf8
    ULONGLONG KernelReturnSystemPowerStateTimestamp;                        //0x100
    ULONGLONG IoBoundedness;                                                //0x108
    ULONGLONG KernelDecompressTicks;                                        //0x110
    ULONGLONG KernelIoTicks;                                                //0x118
    ULONGLONG KernelCopyTicks;                                              //0x120
    ULONGLONG ReadCheckCount;                                               //0x128
    ULONGLONG KernelInitTicks;                                              //0x130
    ULONGLONG KernelResumeHiberFileTicks;                                   //0x138
    ULONGLONG KernelIoCpuTicks;                                             //0x140
    ULONGLONG KernelSharedBufferTicks;                                      //0x148
    ULONGLONG KernelAnimationTicks;                                         //0x150
    ULONGLONG KernelChecksumTicks;                                          //0x158
    ULONGLONG KernelChecksumIoTicks;                                        //0x160
    union _LARGE_INTEGER AnimationStart;                                    //0x168
    union _LARGE_INTEGER AnimationStop;                                     //0x170
    ULONG DeviceResumeTime;                                                 //0x178
    ULONGLONG SecurePagesProcessed;                                         //0x180
    ULONGLONG BootPagesProcessed;                                           //0x188
    ULONGLONG KernelPagesProcessed;                                         //0x190
    ULONGLONG BootBytesWritten;                                             //0x198
    ULONGLONG KernelBytesWritten;                                           //0x1a0
    ULONGLONG BootPagesWritten;                                             //0x1a8
    ULONGLONG KernelPagesWritten;                                           //0x1b0
    ULONGLONG BytesWritten;                                                 //0x1b8
    ULONG PagesWritten;                                                     //0x1c0
    ULONG FileRuns;                                                         //0x1c4
    ULONG NoMultiStageResumeReason;                                         //0x1c8
    ULONG MaxHuffRatio;                                                     //0x1cc
    ULONGLONG AdjustedTotalResumeTime;                                      //0x1d0
    ULONGLONG ResumeCompleteTimestamp;                                      //0x1d8
};
/* Used in */
// PO_MEMORY_IMAGE

