#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_TRANSITION
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG Write:1;                                                      //0x0
    ULONGLONG Owner:1;                                                      //0x0
    ULONGLONG WriteThrough:1;                                               //0x0
    ULONGLONG CacheDisable:1;                                               //0x0
    ULONGLONG Protection:5;                                                 //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG Transition:1;                                                 //0x0
    ULONGLONG PageFrameNumber:36;                                           //0x0
    ULONGLONG Unused:16;                                                    //0x0
};
/* Used in */
// _MMPTE

