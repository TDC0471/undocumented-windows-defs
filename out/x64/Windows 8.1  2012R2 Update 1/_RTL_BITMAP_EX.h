#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _RTL_BITMAP_EX
{
    ULONGLONG SizeOfBitMap;                                                 //0x0
    ULONGLONG* Buffer;                                                      //0x8
};
/* Used in */
// _MI_SYSTEM_PTE_TYPE
// _MI_VAD_EVENT_BLOCK
// _MM_PAGED_POOL_INFO

