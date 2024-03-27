#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPTE_TRANSITION
{
    ULONG Valid:1;                                                          //0x0
    ULONG Write:1;                                                          //0x0
    ULONG Owner:1;                                                          //0x0
    ULONG WriteThrough:1;                                                   //0x0
    ULONG CacheDisable:1;                                                   //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG Prototype:1;                                                      //0x0
    ULONG Transition:1;                                                     //0x0
    ULONG PageFrameNumber:20;                                               //0x0
};
/* Used in */
// _MMPTE

