#pragma once
/* ------------------ */

#include <_GUID.h>

//0x9b0 bytes (sizeof)
struct _CC_VOLUME_TELEMETRY
{
    struct _GUID DeviceGuid;                                                //0x0
    ULONGLONG TotalDirtyPages;                                              //0x10
    ULONGLONG MaxDirtyPages;                                                //0x18
    ULONGLONG TotalDirtyPageThreshold;                                      //0x20
    ULONGLONG TopDirtyPageThreshold;                                        //0x28
    ULONGLONG BottomDirtyPageThreshold;                                     //0x30
    ULONGLONG DirtyPageSamples;                                             //0x38
    ULONGLONG TotalPagesQueuedToDisk;                                       //0x40
    ULONGLONG MaxPagesQueuedToDisk;                                         //0x48
    ULONGLONG PagesQueuedToDiskSamples;                                     //0x50
    ULONGLONG TotalLoggedPagesQueuedToDisk;                                 //0x58
    ULONGLONG MaxLoggedPagesQueuedToDisk;                                   //0x60
    ULONGLONG LoggedPagesQueuedToDiskSamples;                               //0x68
    ULONGLONG ReadTotalBytes;                                               //0x70
    ULONGLONG ReadPagedInTotalBytes;                                        //0x78
    ULONGLONG ReadAheadTotalBytes;                                          //0x80
    ULONGLONG TotalSynchronousReadIoCount;                                  //0x88
    ULONGLONG TotalSynchronousNonBlockingReadIoCount;                       //0x90
    ULONGLONG TotalFailedSynchronousNonBlockingReadIoCount;                 //0x98
    ULONGLONG TotalWrites;                                                  //0xa0
    ULONGLONG TotalHardThrottleWrites;                                      //0xa8
    ULONGLONG TotalSoftThrottleWrites;                                      //0xb0
    ULONGLONG TotalLazyWriterCalls;                                         //0xb8
    ULONGLONG TotalLazyWriterLatency;                                       //0xc0
    ULONGLONG TotalLazyWriterPagesFlushed;                                  //0xc8
    ULONGLONG TotalLazyWriterAvgPagesPerSecond;                             //0xd0
    ULONGLONG SynchronousReadIoMaxLatency;                                  //0xd8
    ULONGLONG SynchronousReadIoNonBlockingMaxLatency;                       //0xe0
    ULONGLONG SynchronousReadIoCounts[12];                                  //0xe8
    ULONGLONG SynchronousReadTotalLatency[12];                              //0x148
    ULONGLONG SynchronousReadNonBlockingIoCounts[12];                       //0x1a8
    ULONGLONG SynchronousReadNonBlockingTotalLatency[12];                   //0x208
    ULONGLONG TotalSynchronousWriteIoCount;                                 //0x268
    ULONGLONG TotalSynchronousNonBlockingWriteIoCount;                      //0x270
    ULONGLONG TotalFailedSynchronousNonBlockingWriteIoCount;                //0x278
    ULONGLONG SynchronousWriteIoMaxLatency;                                 //0x280
    ULONGLONG SynchronousWriteIoNonBlockingMaxLatency;                      //0x288
    ULONGLONG SynchronousWriteIoCounts[12];                                 //0x290
    ULONGLONG SynchronousWriteTotalLatency[12];                             //0x2f0
    ULONGLONG SynchronousWriteNonBlockingIoCounts[12];                      //0x350
    ULONGLONG SynchronousWriteNonBlockingTotalLatency[12];                  //0x3b0
    ULONGLONG TotalAsynchronousReadIoCount;                                 //0x410
    ULONGLONG AsynchronousReadIoMaxLatency;                                 //0x418
    ULONGLONG AsynchronousReadIoCounts[12];                                 //0x420
    ULONGLONG AsynchronousReadTotalLatency[12];                             //0x480
    ULONGLONG CumulativeTotalDirtyPages;                                    //0x4e0
    ULONGLONG CumulativeMaxDirtyPages;                                      //0x4e8
    ULONGLONG CumulativeDirtyPageThreshold;                                 //0x4f0
    ULONGLONG CumulativeTopDirtyPageThreshold;                              //0x4f8
    ULONGLONG CumulativeBottomDirtyPageThreshold;                           //0x500
    ULONGLONG CumulativeDirtyPageSamples;                                   //0x508
    ULONGLONG CumulativeTotalPagesQueuedToDisk;                             //0x510
    ULONGLONG CumulativeMaxPagesQueuedToDisk;                               //0x518
    ULONGLONG CumulativePagesQueuedToDiskSamples;                           //0x520
    ULONGLONG CumulativeTotalLoggedPagesQueuedToDisk;                       //0x528
    ULONGLONG CumulativeMaxLoggedPagesQueuedToDisk;                         //0x530
    ULONGLONG CumulativeLoggedPagesQueuedToDiskSamples;                     //0x538
    ULONGLONG CumulativeReadTotalBytes;                                     //0x540
    ULONGLONG CumulativeReadPagedInTotalBytes;                              //0x548
    ULONGLONG CumulativeReadAheadTotalBytes;                                //0x550
    ULONGLONG CumulativeTotalSynchronousReadIoCount;                        //0x558
    ULONGLONG CumulativeTotalSynchronousNonBlockingReadIoCount;             //0x560
    ULONGLONG CumulativeTotalFailedSynchronousNonBlockingReadIoCount;       //0x568
    ULONGLONG CumulativeTotalWrites;                                        //0x570
    ULONGLONG CumulativeTotalHardThrottleWrites;                            //0x578
    ULONGLONG CumulativeTotalSoftThrottleWrites;                            //0x580
    ULONGLONG CumulativeLazyWriterCalls;                                    //0x588
    ULONGLONG CumulativeLazyWriterLatency;                                  //0x590
    ULONGLONG CumulativeLazyWriterPagesFlushed;                             //0x598
    ULONGLONG CumulativeLazyWriterAvgPagesPerSecond;                        //0x5a0
    ULONGLONG CumulativeSynchronousReadIoMaxLatency;                        //0x5a8
    ULONGLONG CumulativeSynchronousReadIoNonBlockingMaxLatency;             //0x5b0
    ULONGLONG CumulativeSynchronousReadIoCounts[12];                        //0x5b8
    ULONGLONG CumulativeSynchronousReadTotalLatency[12];                    //0x618
    ULONGLONG CumulativeSynchronousReadNonBlockingIoCounts[12];             //0x678
    ULONGLONG CumulativeSynchronousReadNonBlockingTotalLatency[12];         //0x6d8
    ULONGLONG CumulativeTotalSynchronousWriteIoCount;                       //0x738
    ULONGLONG CumulativeTotalSynchronousNonBlockingWriteIoCount;            //0x740
    ULONGLONG CumulativeTotalFailedSynchronousNonBlockingWriteIoCount;      //0x748
    ULONGLONG CumulativeSynchronousWriteIoMaxLatency;                       //0x750
    ULONGLONG CumulativeSynchronousWriteIoNonBlockingMaxLatency;            //0x758
    ULONGLONG CumulativeSynchronousWriteIoCounts[12];                       //0x760
    ULONGLONG CumulativeSynchronousWriteTotalLatency[12];                   //0x7c0
    ULONGLONG CumulativeSynchronousWriteNonBlockingIoCounts[12];            //0x820
    ULONGLONG CumulativeSynchronousWriteNonBlockingTotalLatency[12];        //0x880
    ULONGLONG CumulativeTotalAsynchronousReadIoCount;                       //0x8e0
    ULONGLONG CumulativeAsynchronousReadIoMaxLatency;                       //0x8e8
    ULONGLONG CumulativeAsynchronousReadIoCounts[12];                       //0x8f0
    ULONGLONG CumulativeAsynchronousReadTotalLatency[12];                   //0x950
};
/* Used in */
// _VOLUME_CACHE_MAP

