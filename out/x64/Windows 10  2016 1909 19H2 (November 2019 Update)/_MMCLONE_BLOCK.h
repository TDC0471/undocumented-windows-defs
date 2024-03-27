#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_MI_CLONE_BLOCK_FLAGS.h>

//0x20 bytes (sizeof)
struct _MMCLONE_BLOCK
{
    struct _MMPTE ProtoPte;                                                 //0x0
    ULONGLONG CrossPartitionReferences;                                     //0x8
    union
    {
        volatile ULONGLONG CloneCommitCount;                                //0x10
        struct _MI_CLONE_BLOCK_FLAGS u1;                                    //0x10
    };
    volatile ULONGLONG CloneRefCount;                                       //0x18
};
/* Used in */
// _MMCLONE_DESCRIPTOR
// _MMCLONE_HEADER

