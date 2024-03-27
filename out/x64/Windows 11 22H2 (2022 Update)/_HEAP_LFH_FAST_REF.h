#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HEAP_LFH_FAST_REF
{
    union
    {
        VOID* Target;                                                       //0x0
        ULONGLONG Value;                                                    //0x0
        ULONGLONG RefCount:12;                                              //0x0
    };
};
/* Used in */
// _HEAP_LFH_AFFINITY_SLOT

