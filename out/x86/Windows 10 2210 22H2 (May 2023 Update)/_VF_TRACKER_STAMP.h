#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _VF_TRACKER_STAMP
{
    VOID* Thread;                                                           //0x0
    UCHAR Flags:8;                                                          //0x4
    UCHAR OldIrql:8;                                                        //0x5
    UCHAR NewIrql:8;                                                        //0x6
    UCHAR Processor:8;                                                      //0x7
};
