#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _HEAP_STOP_ON_TAG
{
    union
    {
        ULONG HeapAndTagIndex;                                              //0x0
        struct
        {
            USHORT TagIndex;                                                //0x0
            USHORT HeapIndex;                                               //0x2
        };
    };
};
/* Used in */
// _HEAP_STOP_ON_VALUES

