#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _ETW_SESSION_PERF_COUNTERS
{
    LONG BufferMemoryPagedPool;                                             //0x0
    LONG BufferMemoryNonPagedPool;                                          //0x4
    ULONGLONG EventsLoggedCount;                                            //0x8
    LONG EventsLost;                                                        //0x10
    LONG NumConsumers;                                                      //0x14
};
