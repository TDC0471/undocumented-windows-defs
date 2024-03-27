#pragma once
/* ------------------ */

#include <_MMPTE.h>

//0x10 bytes (sizeof)
struct _MI_PAGE_HASH
{
    ULONG HashValue;                                                        //0x0
    struct _MMPTE* OwningPte;                                               //0x8
};
/* Used in */
// _MMPAGING_FILE

