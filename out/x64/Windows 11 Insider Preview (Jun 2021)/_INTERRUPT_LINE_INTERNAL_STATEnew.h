#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _INTERRUPT_LINE_INTERNAL_STATE
{
    UCHAR Fixed;                                                            //0x0
    UCHAR Irql;                                                             //0x1
    UCHAR Swapping;                                                         //0x2
    ULONG OldClusterId;                                                     //0x4
    ULONG OldClusterMask;                                                   //0x8
    UCHAR LineStateDetermined;                                              //0xc
};
/* Used in */
// _INTERRUPT_LINES

