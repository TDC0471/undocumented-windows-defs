#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MIPFNBLINK
{
    union
    {
        struct
        {
            ULONG Blink:24;                                                 //0x0
            ULONG TbFlushStamp:4;                                           //0x0
            ULONG Unused:1;                                                 //0x0
            ULONG PageBlinkDeleteBit:1;                                     //0x0
            ULONG PageBlinkLockBit:1;                                       //0x0
            ULONG ShareCount:30;                                            //0x0
            ULONG PageShareCountDeleteBit:1;                                //0x0
            ULONG PageShareCountLockBit:1;                                  //0x0
        };
        ULONG EntireField;                                                  //0x0
        volatile LONG Lock;                                                 //0x0
        struct
        {
            ULONG LockNotUsed:30;                                           //0x0
            ULONG DeleteBit:1;                                              //0x0
            ULONG LockBit:1;                                                //0x0
        };
    };
};
/* Used in */
// _MMPFN

