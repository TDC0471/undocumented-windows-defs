#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct CMP_OFFSET_ARRAY
{
    ULONG FileOffset;                                                       //0x0
    VOID* DataBuffer;                                                       //0x4
    ULONG DataLength;                                                       //0x8
};
/* Used in */
// _HHIVE

