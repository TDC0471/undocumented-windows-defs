#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _VI_TRACK_IRQL
{
    VOID* Thread;                                                           //0x0
    UCHAR OldIrql;                                                          //0x8
    UCHAR NewIrql;                                                          //0x9
    USHORT Processor;                                                       //0xa
    ULONG TickCount;                                                        //0xc
    VOID* StackTrace[5];                                                    //0x10
};
