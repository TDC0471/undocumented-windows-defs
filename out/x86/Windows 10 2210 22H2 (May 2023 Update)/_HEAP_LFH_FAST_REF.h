#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _HEAP_LFH_FAST_REF
{
    union
    {
        VOID* Target;                                                       //0x0
        ULONG Value;                                                        //0x0
        ULONG RefCount:12;                                                  //0x0
    };
};
/* Used in */
// _HEAP_LFH_AFFINITY_SLOT

