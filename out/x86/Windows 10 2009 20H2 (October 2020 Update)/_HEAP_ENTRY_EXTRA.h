#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HEAP_ENTRY_EXTRA
{
    union
    {
        struct
        {
            USHORT AllocatorBackTraceIndex;                                 //0x0
            USHORT TagIndex;                                                //0x2
            ULONG Settable;                                                 //0x4
        };
        ULONGLONG ZeroInit;                                                 //0x0
    };
};
/* Used in */
// _HEAP_VIRTUAL_ALLOC_ENTRY

