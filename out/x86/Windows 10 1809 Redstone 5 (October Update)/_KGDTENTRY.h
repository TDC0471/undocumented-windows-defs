#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _KGDTENTRY
{
    USHORT LimitLow;                                                        //0x0
    USHORT BaseLow;                                                         //0x2
    union
    {
        struct
        {
            UCHAR BaseMid;                                                  //0x4
            UCHAR Flags1;                                                   //0x5
            UCHAR Flags2;                                                   //0x6
            UCHAR BaseHi;                                                   //0x7
        } Bytes;                                                            //0x4
        struct
        {
            ULONG BaseMid:8;                                                //0x4
            ULONG Type:5;                                                   //0x4
            ULONG Dpl:2;                                                    //0x4
            ULONG Pres:1;                                                   //0x4
            ULONG LimitHi:4;                                                //0x4
            ULONG Sys:1;                                                    //0x4
            ULONG Reserved_0:1;                                             //0x4
            ULONG Default_Big:1;                                            //0x4
            ULONG Granularity:1;                                            //0x4
            ULONG BaseHi:8;                                                 //0x4
        } Bits;                                                             //0x4
    } HighWord;                                                             //0x4
};
/* Used in */
// _KPCR
// _KPROCESS

