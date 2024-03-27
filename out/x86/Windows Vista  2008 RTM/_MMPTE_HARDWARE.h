#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPTE_HARDWARE
{
    ULONG Valid:1;                                                          //0x0
    ULONG Dirty1:1;                                                         //0x0
    ULONG Owner:1;                                                          //0x0
    ULONG WriteThrough:1;                                                   //0x0
    ULONG CacheDisable:1;                                                   //0x0
    ULONG Accessed:1;                                                       //0x0
    ULONG Dirty:1;                                                          //0x0
    ULONG LargePage:1;                                                      //0x0
    ULONG Global:1;                                                         //0x0
    ULONG CopyOnWrite:1;                                                    //0x0
    ULONG Prototype:1;                                                      //0x0
    ULONG Write:1;                                                          //0x0
    ULONG PageFrameNumber:20;                                               //0x0
};
/* Used in */
// _MMPTE

