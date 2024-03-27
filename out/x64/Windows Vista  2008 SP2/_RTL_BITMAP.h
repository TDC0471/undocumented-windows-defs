#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _RTL_BITMAP
{
    ULONG SizeOfBitMap;                                                     //0x0
    ULONG* Buffer;                                                          //0x8
};
/* Used in */
// _FREE_DISPLAY
// _HHIVE
// _MI_SPECIAL_POOL
// _MI_SYSTEM_PTE_TYPE
// _MMPAGING_FILE
// _MM_PAGED_POOL_INFO
// _MM_SESSION_SPACE
// _POP_HIBER_CONTEXT

