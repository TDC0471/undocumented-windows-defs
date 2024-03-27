#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MI_DECAY_TIMER_LINKAGE
{
    ULONG Spare0:1;                                                         //0x0
    ULONG PreviousDecayPfn:15;                                              //0x0
    ULONG Spare1:1;                                                         //0x0
    ULONG NextDecayPfn:15;                                                  //0x0
};
/* Used in */
// _MI_DECAY_TIMER_LINK

