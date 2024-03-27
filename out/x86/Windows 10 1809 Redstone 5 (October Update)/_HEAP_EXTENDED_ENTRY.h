#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HEAP_EXTENDED_ENTRY
{
    union
    {
        struct
        {
            USHORT FunctionIndex;                                           //0x0
            USHORT ContextValue;                                            //0x2
        };
        ULONG InterceptorValue;                                             //0x0
    };
    USHORT UnusedBytesLength;                                               //0x4
    UCHAR EntryOffset;                                                      //0x6
    UCHAR ExtendedBlockSignature;                                           //0x7
};
/* Used in */
// _HEAP_ENTRY
// _HEAP_FREE_ENTRY

