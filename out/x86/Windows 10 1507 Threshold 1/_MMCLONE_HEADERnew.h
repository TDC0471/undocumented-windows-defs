#pragma once
/* ------------------ */

#include <_MMCLONE_BLOCK.h>

//0xc bytes (sizeof)
struct _MMCLONE_HEADER
{
    ULONG NumberOfPtes;                                                     //0x0
    volatile ULONG NumberOfProcessReferences;                               //0x4
    struct _MMCLONE_BLOCK* ClonePtes;                                       //0x8
};
/* Used in */
// _MMCLONE_DESCRIPTOR

