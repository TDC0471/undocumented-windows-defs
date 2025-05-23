#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
union _KGDTENTRY64
{
    struct
    {
        USHORT LimitLow;                                                    //0x0
        USHORT BaseLow;                                                     //0x2
    };
    struct
    {
        UCHAR BaseMiddle;                                                   //0x4
        UCHAR Flags1;                                                       //0x5
        UCHAR Flags2;                                                       //0x6
        UCHAR BaseHigh;                                                     //0x7
    } Bytes;                                                                //0x4
    struct
    {
        struct
    {
        ULONG BaseMiddle:8;                                                 //0x4
        ULONG Type:5;                                                       //0x4
        ULONG Dpl:2;                                                        //0x4
        ULONG Present:1;                                                    //0x4
        ULONG LimitHigh:4;                                                  //0x4
        ULONG System:1;                                                     //0x4
        ULONG LongMode:1;                                                   //0x4
        ULONG DefaultBig:1;                                                 //0x4
        ULONG Granularity:1;                                                //0x4
        ULONG BaseHigh:8;                                                   //0x4
    } Bits;                                                                 //0x4
        ULONG BaseUpper;                                                    //0x8
    };
    struct
    {
        ULONG MustBeZero;                                                   //0xc
    };
    ULONGLONG Alignment;                                                    //0x0
};
/* Used in */
// _KPCR
// _KPROCESS

