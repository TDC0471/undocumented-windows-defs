#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _ETW_PERF_COUNTERS
{
    LONG TotalActiveSessions;                                               //0x0
    LONG TotalBufferMemoryNonPagedPool;                                     //0x4
    LONG TotalBufferMemoryPagedPool;                                        //0x8
    LONG TotalGuidsEnabled;                                                 //0xc
    LONG TotalGuidsNotEnabled;                                              //0x10
    LONG TotalGuidsPreEnabled;                                              //0x14
};
