#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _POP_FX_PERF_FLAGS
{
    LONG Value;                                                             //0x0
    ULONG Progress:3;                                                       //0x0
    ULONG Reserved:24;                                                      //0x0
    ULONG Synchronicity:2;                                                  //0x0
    ULONG RequestPepCompleted:1;                                            //0x0
    ULONG RequestSucceeded:1;                                               //0x0
    ULONG NestedCallback:1;                                                 //0x0
};
/* Used in */
// _POP_FX_PERF_INFO

