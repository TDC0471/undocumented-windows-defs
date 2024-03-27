#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _KBUGCHECK_ACTIVE_STATE
{
    ULONG BugCheckState:2;                                                  //0x0
    ULONG RecursionCount:2;                                                 //0x0
    ULONG BugCheckOwner:28;                                                 //0x0
    volatile LONG Value;                                                    //0x0
};
