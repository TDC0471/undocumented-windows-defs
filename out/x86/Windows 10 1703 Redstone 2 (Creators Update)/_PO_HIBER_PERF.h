#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x1f8 bytes (sizeof)
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
    union _LARGE_INTEGER HibernateCompleteTimestamp;                        //0x48
    ULONG POSTTime;                                                         //0x50
    ULONG ResumeBootMgrTime;                                                //0x54
    ULONG BootmgrUserInputTime;                                             //0x58
    ULONGLONG ResumeAppTicks;                                               //0x60
    ULONGLONG ResumeAppStartTimestamp;                                      //0x68
    ULONGLONG ResumeLibraryInitTicks;                                       //0x70
    ULONGLONG ResumeInitTicks;                                              //0x78
    ULONGLONG ResumeRestoreImageStartTimestamp;                             //0x80
    ULONGLONG ResumeHiberFileTicks;                                         //0x88
    ULONGLONG ResumeIoTicks;                                                //0x90
    ULONGLONG ResumeDecompressTicks;                                        //0x98
    ULONGLONG ResumeAllocateTicks;                                          //0xa0
    ULONGLONG ResumeUserInOutTicks;                                         //0xa8
    ULONGLONG ResumeMapTicks;                                               //0xb0
    ULONGLONG ResumeUnmapTicks;                                             //0xb8
    ULONGLONG ResumeChecksumTicks;                                          //0xc0
    ULONGLONG ResumeChecksumIoTicks;                                        //0xc8
    ULONGLONG ResumeKernelSwitchTimestamp;                                  //0xd0
    ULONGLONG CyclesPerMs;                                                  //0xd8
    ULONGLONG WriteLogDataTimestamp;                                        //0xe0
    ULONGLONG KernelReturnFromHandler;                                      //0xe8
    ULONGLONG TimeStampCounterAtSwitchTime;                                 //0xf0
    ULONGLONG HalTscOffset;                                                 //0xf8
    ULONGLONG HvlTscOffset;                                                 //0x100
    ULONGLONG SleeperThreadEnd;                                             //0x108
    ULONGLONG PostCmosUpdateTimestamp;                                      //0x110
    ULONGLONG KernelReturnSystemPowerStateTimestamp;                        //0x118
    ULONGLONG IoBoundedness;                                                //0x120
    ULONGLONG KernelDecompressTicks;                                        //0x128
    ULONGLONG KernelIoTicks;                                                //0x130
    ULONGLONG KernelCopyTicks;                                              //0x138
    ULONGLONG ReadCheckCount;                                               //0x140
    ULONGLONG KernelInitTicks;                                              //0x148
    ULONGLONG KernelResumeHiberFileTicks;                                   //0x150
    ULONGLONG KernelIoCpuTicks;                                             //0x158
    ULONGLONG KernelSharedBufferTicks;                                      //0x160
    ULONGLONG KernelAnimationTicks;                                         //0x168
    ULONGLONG KernelChecksumTicks;                                          //0x170
    ULONGLONG KernelChecksumIoTicks;                                        //0x178
    union _LARGE_INTEGER AnimationStart;                                    //0x180
    union _LARGE_INTEGER AnimationStop;                                     //0x188
    ULONG DeviceResumeTime;                                                 //0x190
    ULONGLONG SecurePagesProcessed;                                         //0x198
    ULONGLONG BootPagesProcessed;                                           //0x1a0
    ULONGLONG KernelPagesProcessed;                                         //0x1a8
    ULONGLONG BootBytesWritten;                                             //0x1b0
    ULONGLONG KernelBytesWritten;                                           //0x1b8
    ULONGLONG BootPagesWritten;                                             //0x1c0
    ULONGLONG KernelPagesWritten;                                           //0x1c8
    ULONGLONG BytesWritten;                                                 //0x1d0
    ULONG PagesWritten;                                                     //0x1d8
    ULONG FileRuns;                                                         //0x1dc
    ULONG NoMultiStageResumeReason;                                         //0x1e0
    ULONG MaxHuffRatio;                                                     //0x1e4
    ULONGLONG AdjustedTotalResumeTime;                                      //0x1e8
    ULONGLONG ResumeCompleteTimestamp;                                      //0x1f0
};
/* Used in */
// PO_MEMORY_IMAGE

