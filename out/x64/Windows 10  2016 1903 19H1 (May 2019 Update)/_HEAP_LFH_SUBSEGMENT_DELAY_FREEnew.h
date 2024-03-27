#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _HEAP_LFH_SUBSEGMENT_DELAY_FREE
{
    ULONGLONG DelayFree:1;                                                  //0x0
    ULONGLONG Count:63;                                                     //0x0
    VOID* AllBits;                                                          //0x0
};
/* Used in */
// _HEAP_LFH_SUBSEGMENT

