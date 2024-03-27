#pragma once
/* ------------------ */


//0xd8 bytes (sizeof)
struct PROCESS_PERF_COUNTERS
{
    ULONGLONG ProcessorTime;                                                //0x0
    ULONGLONG UserTime;                                                     //0x8
    ULONGLONG PrivilegedTime;                                               //0x10
    ULONGLONG VirtualBytesPeak;                                             //0x18
    ULONGLONG VirtualBytes;                                                 //0x20
    ULONG PageFaults;                                                       //0x28
    ULONG HandleCount;                                                      //0x2c
    ULONGLONG WorkingSetPeak;                                               //0x30
    ULONGLONG WorkingSet;                                                   //0x38
    ULONGLONG PageFileBytesPeak;                                            //0x40
    ULONGLONG PageFileBytes;                                                //0x48
    ULONGLONG PrivateBytes;                                                 //0x50
    ULONG ThreadCount;                                                      //0x58
    ULONG PriorityBase;                                                     //0x5c
    ULONGLONG ElapsedTime;                                                  //0x60
    ULONG ProcessId;                                                        //0x68
    ULONG CreatingProcessId;                                                //0x6c
    ULONGLONG PoolPagedBytes;                                               //0x70
    ULONGLONG PoolNonpagedBytes;                                            //0x78
    ULONGLONG IoReadOperations;                                             //0x80
    ULONGLONG IoWriteOperations;                                            //0x88
    ULONGLONG IoDataOperations;                                             //0x90
    ULONGLONG IoOtherOperations;                                            //0x98
    ULONGLONG IoReadBytes;                                                  //0xa0
    ULONGLONG IoWriteBytes;                                                 //0xa8
    ULONGLONG IoDataBytes;                                                  //0xb0
    ULONGLONG IoOtherBytes;                                                 //0xb8
    ULONGLONG WorkingSetPrivate;                                            //0xc0
    ULONGLONG PerfFreq;                                                     //0xc8
    ULONGLONG PerfTime;                                                     //0xd0
};
