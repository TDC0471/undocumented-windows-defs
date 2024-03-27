#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _RTL_HP_HEAP_VA_CALLBACKS_ENCODED
{
    ULONGLONG CallbackContext;                                              //0x0
    ULONGLONG AllocateVirtualMemoryEncoded;                                 //0x8
    ULONGLONG FreeVirtualMemoryEncoded;                                     //0x10
    ULONGLONG QueryVirtualMemoryEncoded;                                    //0x18
};
/* Used in */
// _SEGMENT_HEAP

