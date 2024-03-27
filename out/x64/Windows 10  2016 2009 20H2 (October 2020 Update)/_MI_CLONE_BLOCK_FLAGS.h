#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_CLONE_BLOCK_FLAGS
{
    ULONGLONG ActualCloneCommit:59;                                         //0x0
    ULONGLONG CloneProtection:5;                                            //0x0
};
/* Used in */
// _MMCLONE_BLOCK

