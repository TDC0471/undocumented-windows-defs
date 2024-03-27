#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _HEAP_FREE_ENTRY_EXTRA
{
    USHORT TagIndex;                                                        //0x0
    USHORT FreeBackTraceIndex;                                              //0x2
};
