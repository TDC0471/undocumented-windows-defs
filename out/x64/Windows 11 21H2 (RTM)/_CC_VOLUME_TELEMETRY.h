#pragma once
/* ------------------ */

#include <_GUID.h>

//0x940 bytes (sizeof)
struct _CC_VOLUME_TELEMETRY
{
    struct _GUID DeviceGuid;                                                //0x0
    ULONGLONG TotalDirtyPages;                                              //0x10
    ULONGLONG MaxDirtyPages;                                                //0x18
    ULONGLONG DirtyPageSamples;                                             //0x20
    ULONGLONG TotalPagesQueuedToDisk;                                       //0x28
    ULONGLONG MaxPagesQueuedToDisk;                                         //0x30
    ULONGLONG PagesQueuedToDiskSamples;                                     //0x38
    ULONGLONG TotalLoggedPagesQueuedToDisk;                                 //0x40
    ULONGLONG MaxLoggedPagesQueuedToDisk;                                   //0x48
    ULONGLONG LoggedPagesQueuedToDiskSamples;                               //0x50
    ULONGLONG ReadTotalBytes;                                               //0x58
    ULONGLONG ReadPagedInTotalBytes;                                        //0x60
    ULONGLONG ReadAheadTotalBytes;                                          //0x68
    ULONGLONG TotalSynchronousReadIoCount;                                  //0x70
    ULONGLONG TotalSynchronousNonBlockingReadIoCount;                       //0x78
    ULONGLONG TotalFailedSynchronousNonBlockingReadIoCount;                 //0x80
    ULONGLONG TotalWrites;                                                  //0x88
    ULONGLONG TotalHardThrottleWrites;                                      //0x90
    ULONGLONG TotalSoftThrottleWrites;                                      //0x98
    ULONGLONG SynchronousReadIoMaxLatency;                                  //0xa0
    ULONGLONG SynchronousReadIoNonBlockingMaxLatency;                       //0xa8
    ULONGLONG SynchronousReadIoCounts[12];                                  //0xb0
    ULONGLONG SynchronousReadTotalLatency[12];                              //0x110
    ULONGLONG SynchronousReadNonBlockingIoCounts[12];                       //0x170
    ULONGLONG SynchronousReadNonBlockingTotalLatency[12];                   //0x1d0
    ULONGLONG TotalSynchronousWriteIoCount;                                 //0x230
    ULONGLONG TotalSynchronousNonBlockingWriteIoCount;                      //0x238
    ULONGLONG TotalFailedSynchronousNonBlockingWriteIoCount;                //0x240
    ULONGLONG SynchronousWriteIoMaxLatency;                                 //0x248
    ULONGLONG SynchronousWriteIoNonBlockingMaxLatency;                      //0x250
    ULONGLONG SynchronousWriteIoCounts[12];                                 //0x258
    ULONGLONG SynchronousWriteTotalLatency[12];                             //0x2b8
    ULONGLONG SynchronousWriteNonBlockingIoCounts[12];                      //0x318
    ULONGLONG SynchronousWriteNonBlockingTotalLatency[12];                  //0x378
    ULONGLONG TotalAsynchronousReadIoCount;                                 //0x3d8
    ULONGLONG AsynchronousReadIoMaxLatency;                                 //0x3e0
    ULONGLONG AsynchronousReadIoCounts[12];                                 //0x3e8
    ULONGLONG AsynchronousReadTotalLatency[12];                             //0x448
    ULONGLONG CumulativeTotalDirtyPages;                                    //0x4a8
    ULONGLONG CumulativeMaxDirtyPages;                                      //0x4b0
    ULONGLONG CumulativeDirtyPageSamples;                                   //0x4b8
    ULONGLONG CumulativeTotalPagesQueuedToDisk;                             //0x4c0
    ULONGLONG CumulativeMaxPagesQueuedToDisk;                               //0x4c8
    ULONGLONG CumulativePagesQueuedToDiskSamples;                           //0x4d0
    ULONGLONG CumulativeTotalLoggedPagesQueuedToDisk;                       //0x4d8
    ULONGLONG CumulativeMaxLoggedPagesQueuedToDisk;                         //0x4e0
    ULONGLONG CumulativeLoggedPagesQueuedToDiskSamples;                     //0x4e8
    ULONGLONG CumulativeReadTotalBytes;                                     //0x4f0
    ULONGLONG CumulativeReadPagedInTotalBytes;                              //0x4f8
    ULONGLONG CumulativeReadAheadTotalBytes;                                //0x500
    ULONGLONG CumulativeTotalSynchronousReadIoCount;                        //0x508
    ULONGLONG CumulativeTotalSynchronousNonBlockingReadIoCount;             //0x510
    ULONGLONG CumulativeTotalFailedSynchronousNonBlockingReadIoCount;       //0x518
    ULONGLONG CumulativeTotalWrites;                                        //0x520
    ULONGLONG CumulativeTotalHardThrottleWrites;                            //0x528
    ULONGLONG CumulativeTotalSoftThrottleWrites;                            //0x530
    ULONGLONG CumulativeSynchronousReadIoMaxLatency;                        //0x538
    ULONGLONG CumulativeSynchronousReadIoNonBlockingMaxLatency;             //0x540
    ULONGLONG CumulativeSynchronousReadIoCounts[12];                        //0x548
    ULONGLONG CumulativeSynchronousReadTotalLatency[12];                    //0x5a8
    ULONGLONG CumulativeSynchronousReadNonBlockingIoCounts[12];             //0x608
    ULONGLONG CumulativeSynchronousReadNonBlockingTotalLatency[12];         //0x668
    ULONGLONG CumulativeTotalSynchronousWriteIoCount;                       //0x6c8
    ULONGLONG CumulativeTotalSynchronousNonBlockingWriteIoCount;            //0x6d0
    ULONGLONG CumulativeTotalFailedSynchronousNonBlockingWriteIoCount;      //0x6d8
    ULONGLONG CumulativeSynchronousWriteIoMaxLatency;                       //0x6e0
    ULONGLONG CumulativeSynchronousWriteIoNonBlockingMaxLatency;            //0x6e8
    ULONGLONG CumulativeSynchronousWriteIoCounts[12];                       //0x6f0
    ULONGLONG CumulativeSynchronousWriteTotalLatency[12];                   //0x750
    ULONGLONG CumulativeSynchronousWriteNonBlockingIoCounts[12];            //0x7b0
    ULONGLONG CumulativeSynchronousWriteNonBlockingTotalLatency[12];        //0x810
    ULONGLONG CumulativeTotalAsynchronousReadIoCount;                       //0x870
    ULONGLONG CumulativeAsynchronousReadIoMaxLatency;                       //0x878
    ULONGLONG CumulativeAsynchronousReadIoCounts[12];                       //0x880
    ULONGLONG CumulativeAsynchronousReadTotalLatency[12];                   //0x8e0
};
/* Used in */
// _VOLUME_CACHE_MAP

