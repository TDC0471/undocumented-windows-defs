#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _KCLOCK_TIMER_DEADLINE_ENTRY
{
    ULONGLONG DueTime;                                                      //0x0
    ULONG TolerableDelay;                                                   //0x8
    union
    {
        UCHAR TypeFlags;                                                    //0xc
        struct
        {
            UCHAR Valid:1;                                                  //0xc
            UCHAR NoWake:1;                                                 //0xc
            UCHAR Unused:6;                                                 //0xc
        };
    };
};
/* Used in */
// _KCLOCK_TIMER_STATE

