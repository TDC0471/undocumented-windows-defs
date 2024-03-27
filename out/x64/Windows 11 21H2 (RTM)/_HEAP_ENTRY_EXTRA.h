#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HEAP_ENTRY_EXTRA
{
    union
    {
        struct
        {
            USHORT AllocatorBackTraceIndex;                                 //0x0
            USHORT TagIndex;                                                //0x2
            ULONGLONG Settable;                                             //0x8
        };
        struct
        {
            ULONGLONG ZeroInit;                                             //0x0
            ULONGLONG ZeroInit1;                                            //0x8
        };
    };
};
/* Used in */
// _HEAP_VIRTUAL_ALLOC_ENTRY

