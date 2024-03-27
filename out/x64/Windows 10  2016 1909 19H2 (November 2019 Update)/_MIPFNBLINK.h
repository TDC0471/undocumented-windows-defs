#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MIPFNBLINK
{
    union
    {
        struct
        {
            ULONGLONG Blink:36;                                             //0x0
            ULONGLONG NodeBlinkHigh:20;                                     //0x0
            ULONGLONG TbFlushStamp:4;                                       //0x0
            ULONGLONG Unused:2;                                             //0x0
            ULONGLONG PageBlinkDeleteBit:1;                                 //0x0
            ULONGLONG PageBlinkLockBit:1;                                   //0x0
            ULONGLONG ShareCount:62;                                        //0x0
            ULONGLONG PageShareCountDeleteBit:1;                            //0x0
            ULONGLONG PageShareCountLockBit:1;                              //0x0
        };
        ULONGLONG EntireField;                                              //0x0
        volatile LONGLONG Lock;                                             //0x0
        struct
        {
            ULONGLONG LockNotUsed:62;                                       //0x0
            ULONGLONG DeleteBit:1;                                          //0x0
            ULONGLONG LockBit:1;                                            //0x0
        };
    };
};
/* Used in */
// _MMPFN

