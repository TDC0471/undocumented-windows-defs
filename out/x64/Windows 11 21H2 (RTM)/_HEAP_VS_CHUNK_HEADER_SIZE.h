#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _HEAP_VS_CHUNK_HEADER_SIZE
{
    ULONG MemoryCost:16;                                                    //0x0
    struct
    {
        ULONG UnsafeSize:16;                                                //0x0
    ULONG UnsafePrevSize:16;                                                //0x4
        ULONG Allocated:8;                                                  //0x4
    };
    USHORT KeyUShort;                                                       //0x0
    ULONG KeyULong;                                                         //0x0
    ULONGLONG HeaderBits;                                                   //0x0
};
/* Used in */
// _HEAP_VS_CHUNK_HEADER

