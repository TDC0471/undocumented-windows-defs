#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _HEAP_SUBALLOCATOR_CALLBACKS
{
    ULONG Allocate;                                                         //0x0
    ULONG Free;                                                             //0x4
    ULONG Commit;                                                           //0x8
    ULONG Decommit;                                                         //0xc
    ULONG ExtendContext;                                                    //0x10
};
/* Used in */
// _HEAP_LFH_CONTEXT
// _HEAP_VS_CONTEXT

