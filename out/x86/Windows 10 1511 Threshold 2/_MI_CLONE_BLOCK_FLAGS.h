#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MI_CLONE_BLOCK_FLAGS
{
    ULONG ActualCloneCommit:27;                                             //0x0
    ULONG CloneProtection:5;                                                //0x0
};
/* Used in */
// _MMCLONE_BLOCK

