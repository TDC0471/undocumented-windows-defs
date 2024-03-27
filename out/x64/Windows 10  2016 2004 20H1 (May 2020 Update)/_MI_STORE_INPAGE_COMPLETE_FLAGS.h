#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MI_STORE_INPAGE_COMPLETE_FLAGS
{
    union
    {
        ULONG EntireFlags;                                                  //0x0
        struct
        {
            ULONG StoreFault:1;                                             //0x0
            ULONG LowResourceFailure:1;                                     //0x0
            ULONG Spare:14;                                                 //0x0
            ULONG RemainingPageCount:16;                                    //0x0
        };
    };
};
/* Used in */
// _MI_HARD_FAULT_STATE

