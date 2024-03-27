#pragma once
/* ------------------ */


//0x8c bytes (sizeof)
struct _MMPTE_FLUSH_LIST
{
    ULONG Count;                                                            //0x0
    ULONG MaximumCount;                                                     //0x4
    VOID* FlushVa[33];                                                      //0x8
};
