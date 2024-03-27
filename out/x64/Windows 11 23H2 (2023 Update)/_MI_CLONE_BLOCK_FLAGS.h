#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_CLONE_BLOCK_FLAGS
{
    ULONGLONG ReducedCommitCount:55;                                        //0x0
    ULONGLONG CloneProtection:5;                                            //0x0
    ULONGLONG OwningPartitionResidentCharged:1;                             //0x0
    ULONGLONG OwningPartitionCommitCharged:1;                               //0x0
    ULONGLONG OwningPartitionCommitFloating:1;                              //0x0
    ULONGLONG LockBit:1;                                                    //0x0
};
/* Used in */
// _MMCLONE_BLOCK

