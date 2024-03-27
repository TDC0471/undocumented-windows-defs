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
// _MMPAGING_FILE
// _MMSESSION
// _MM_PAGED_POOL_INFO
// _POP_HIBER_CONTEXT

