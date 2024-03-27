#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HARDWARE_PTE
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG Write:1;                                                      //0x0
    ULONGLONG Owner:1;                                                      //0x0
    ULONGLONG WriteThrough:1;                                               //0x0
    ULONGLONG CacheDisable:1;                                               //0x0
    ULONGLONG Accessed:1;                                                   //0x0
    ULONGLONG Dirty:1;                                                      //0x0
    ULONGLONG LargePage:1;                                                  //0x0
    ULONGLONG Global:1;                                                     //0x0
    ULONGLONG CopyOnWrite:1;                                                //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG reserved0:1;                                                  //0x0
    ULONGLONG PageFrameNumber:36;                                           //0x0
    ULONGLONG reserved1:4;                                                  //0x0
    ULONGLONG SoftwareWsIndex:11;                                           //0x0
    ULONGLONG NoExecute:1;                                                  //0x0
};
