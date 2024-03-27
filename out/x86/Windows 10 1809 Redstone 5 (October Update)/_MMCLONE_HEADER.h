#pragma once
/* ------------------ */

#include <_MMCLONE_BLOCK.h>
#include <_MI_PARTITION.h>

//0x10 bytes (sizeof)
struct _MMCLONE_HEADER
{
    ULONG NumberOfPtes;                                                     //0x0
    volatile ULONG NumberOfProcessReferences;                               //0x4
    struct _MMCLONE_BLOCK* ClonePtes;                                       //0x8
    struct _MI_PARTITION* Partition;                                        //0xc
};
/* Used in */
// _MMCLONE_DESCRIPTOR

