#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_HARDWARE
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG Dirty1:1;                                                     //0x0
    ULONGLONG Owner:1;                                                      //0x0
    ULONGLONG WriteThrough:1;                                               //0x0
    ULONGLONG CacheDisable:1;                                               //0x0
    ULONGLONG Accessed:1;                                                   //0x0
    ULONGLONG Dirty:1;                                                      //0x0
    ULONGLONG LargePage:1;                                                  //0x0
    ULONGLONG Global:1;                                                     //0x0
    ULONGLONG CopyOnWrite:1;                                                //0x0
    ULONGLONG Unused:1;                                                     //0x0
    ULONGLONG Write:1;                                                      //0x0
    ULONGLONG PageFrameNumber:25;                                           //0x0
    ULONGLONG reserved1:26;                                                 //0x0
    ULONGLONG NoExecute:1;                                                  //0x0
};
/* Used in */
// _MMPTE

