#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_DECAY_TIMER_LINKAGE
{
    ULONGLONG Spare0:1;                                                     //0x0
    ULONGLONG PreviousDecayPfn:31;                                          //0x0
    ULONGLONG Spare1:1;                                                     //0x0
    ULONGLONG NextDecayPfn:31;                                              //0x0
};
/* Used in */
// _MI_DECAY_TIMER_LINK

