#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_MI_CLONE_BLOCK_FLAGS.h>

//0x10 bytes (sizeof)
struct _MMCLONE_BLOCK
{
    struct _MMPTE ProtoPte;                                                 //0x0
    union
    {
        volatile ULONG CloneCommitCount;                                    //0x8
        struct _MI_CLONE_BLOCK_FLAGS u1;                                    //0x8
    };
    volatile ULONG CloneRefCount;                                           //0xc
};
/* Used in */
// _MMCLONE_DESCRIPTOR
// _MMCLONE_HEADER

