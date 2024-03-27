#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_PAGEFILE_METADATA_LAYOUT
{
    ULONG EntryInBytes;                                                     //0x0
    ULONG OwningPteOffset;                                                  //0x4
};
/* Used in */
// _MI_PAGING_IO_STATE

