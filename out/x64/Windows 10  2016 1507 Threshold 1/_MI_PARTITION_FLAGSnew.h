#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MI_PARTITION_FLAGS
{
    ULONG BeingDeleted:1;                                                   //0x0
    ULONG ObjectInitialized:1;                                              //0x0
};
/* Used in */
// _MI_PARTITION_CORE
