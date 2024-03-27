#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _HEAP_VS_CHUNK_HEADER_SIZE
{
    ULONG MemoryCost:1;                                                     //0x0
    ULONG UnsafeSize:15;                                                    //0x0
    ULONG UnsafePrevSize:15;                                                //0x0
    ULONG Allocated:1;                                                      //0x0
    USHORT KeyUShort;                                                       //0x0
    ULONG KeyULong;                                                         //0x0
    ULONG HeaderBits;                                                       //0x0
};
/* Used in */
// _HEAP_VS_CHUNK_HEADER

