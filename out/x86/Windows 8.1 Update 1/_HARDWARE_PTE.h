#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HARDWARE_PTE
{
    union
    {
        struct
        {
            ULONGLONG Valid:1;                                              //0x0
            ULONGLONG Write:1;                                              //0x0
            ULONGLONG Owner:1;                                              //0x0
            ULONGLONG WriteThrough:1;                                       //0x0
            ULONGLONG CacheDisable:1;                                       //0x0
            ULONGLONG Accessed:1;                                           //0x0
            ULONGLONG Dirty:1;                                              //0x0
            ULONGLONG LargePage:1;                                          //0x0
            ULONGLONG Global:1;                                             //0x0
            ULONGLONG CopyOnWrite:1;                                        //0x0
            ULONGLONG Prototype:1;                                          //0x0
            ULONGLONG reserved0:1;                                          //0x0
            ULONGLONG PageFrameNumber:26;                                   //0x0
            ULONGLONG reserved1:26;                                         //0x0
        };
        struct
        {
            ULONG LowPart;                                                  //0x0
            ULONG HighPart;                                                 //0x4
        };
    };
};
/* Used in */
// _MMPTE

