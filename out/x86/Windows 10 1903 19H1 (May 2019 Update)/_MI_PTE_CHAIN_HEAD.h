#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x18 bytes (sizeof)
struct _MI_PTE_CHAIN_HEAD
{
    struct _MMPTE Flink;                                                    //0x0
    struct _MMPTE Blink;                                                    //0x8
    struct _MMPTE* PteBase;                                                 //0x10
};
/* Used in */
// _MI_PARTITION_SEGMENTS

