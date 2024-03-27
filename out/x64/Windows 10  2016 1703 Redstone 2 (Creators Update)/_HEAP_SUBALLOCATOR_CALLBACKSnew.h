#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _HEAP_SUBALLOCATOR_CALLBACKS
{
    ULONGLONG Allocate;                                                     //0x0
    ULONGLONG Free;                                                         //0x8
    ULONGLONG Commit;                                                       //0x10
    ULONGLONG Decommit;                                                     //0x18
    ULONGLONG ExtendContext;                                                //0x20
};
