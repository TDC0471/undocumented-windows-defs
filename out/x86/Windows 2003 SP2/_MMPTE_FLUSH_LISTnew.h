#pragma once
/* ------------------ */


//0x88 bytes (sizeof)
struct _MMPTE_FLUSH_LIST
{
    ULONG Count;                                                            //0x0
    VOID* FlushVa[33];                                                      //0x4
};
