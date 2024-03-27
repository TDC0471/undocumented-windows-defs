#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HEAP_EXTENDED_ENTRY
{
    VOID* Reserved;                                                         //0x0
    union
    {
        struct
        {
            USHORT FunctionIndex;                                           //0x8
            USHORT ContextValue;                                            //0xa
        };
        ULONG InterceptorValue;                                             //0x8
    };
    USHORT UnusedBytesLength;                                               //0xc
    UCHAR EntryOffset;                                                      //0xe
    UCHAR ExtendedBlockSignature;                                           //0xf
};
/* Used in */
// _HEAP_ENTRY
// _HEAP_FREE_ENTRY

