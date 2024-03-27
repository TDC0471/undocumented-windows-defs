#pragma once
/* ------------------ */

#include <_MMCLONE_BLOCK.h>

//0x18 bytes (sizeof)
struct _MMCLONE_HEADER
{
    ULONGLONG NumberOfPtes;                                                 //0x0
    volatile ULONGLONG NumberOfProcessReferences;                           //0x8
    struct _MMCLONE_BLOCK* ClonePtes;                                       //0x10
};
/* Used in */
// _MMCLONE_DESCRIPTOR

