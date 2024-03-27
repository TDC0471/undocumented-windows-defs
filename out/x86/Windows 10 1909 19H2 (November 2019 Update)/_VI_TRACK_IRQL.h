#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _VI_TRACK_IRQL
{
    VOID* Thread;                                                           //0x0
    UCHAR OldIrql;                                                          //0x4
    UCHAR NewIrql;                                                          //0x5
    USHORT Processor;                                                       //0x6
    ULONG TickCount;                                                        //0x8
    VOID* StackTrace[5];                                                    //0xc
};
