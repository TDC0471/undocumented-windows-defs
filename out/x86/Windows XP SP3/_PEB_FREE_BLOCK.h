#pragma once
/* ------------------ */

#include <_PEB_FREE_BLOCK.h>

//0x8 bytes (sizeof)
struct _PEB_FREE_BLOCK
{
    struct _PEB_FREE_BLOCK* Next;                                           //0x0
    ULONG Size;                                                             //0x4
};
/* Used in */
// _PEB
// _PEB_FREE_BLOCK
