#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES
{
    ULONGLONG NumberOfPtes:6;                                               //0x0
    ULONGLONG PartitionId:10;                                               //0x0
    ULONGLONG SectionOffset:48;                                             //0x0
};
/* Used in */
// _MI_REVERSE_VIEW_MAP

