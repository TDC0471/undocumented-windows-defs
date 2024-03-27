#pragma once
/* ------------------ */


//0xa8 bytes (sizeof)
struct _MMPTE_FLUSH_LIST
{
    ULONG Count;                                                            //0x0
    ULONG MaximumCount;                                                     //0x4
    VOID* FlushVa[20];                                                      //0x8
};
