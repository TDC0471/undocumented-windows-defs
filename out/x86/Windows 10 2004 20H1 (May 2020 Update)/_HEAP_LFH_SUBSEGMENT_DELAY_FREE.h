#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _HEAP_LFH_SUBSEGMENT_DELAY_FREE
{
    ULONG DelayFree:1;                                                      //0x0
    ULONG Count:31;                                                         //0x0
    VOID* AllBits;                                                          //0x0
};
/* Used in */
// _HEAP_LFH_SUBSEGMENT

