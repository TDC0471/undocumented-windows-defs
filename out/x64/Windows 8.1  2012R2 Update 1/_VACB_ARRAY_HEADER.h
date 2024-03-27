#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _VACB_ARRAY_HEADER
{
    ULONG VacbArrayIndex;                                                   //0x0
    ULONG MappingCount;                                                     //0x4
    ULONG HighestMappedIndex;                                               //0x8
    ULONG Reserved;                                                         //0xc
};
/* Used in */
// _VACB

