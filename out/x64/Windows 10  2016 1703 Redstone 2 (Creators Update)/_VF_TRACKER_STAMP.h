#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _VF_TRACKER_STAMP
{
    VOID* Thread;                                                           //0x0
    UCHAR Flags:8;                                                          //0x8
    UCHAR OldIrql:8;                                                        //0x9
    UCHAR NewIrql:8;                                                        //0xa
    UCHAR Processor:8;                                                      //0xb
};
