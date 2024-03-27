#pragma once
/* ------------------ */


//0x10804000 bytes (sizeof)
struct _MI_HYPER_SPACE
{
    UCHAR VadBitmap[268435456];                                             //0x0
    UCHAR PageDirectoryCommitmentBitmap[16384];                             //0x10000000
    UCHAR PageTableCommitmentBitmap[8388608];                               //0x10004000
};
/* Used in */
// _MI_SYSTEM_VA_STATE

