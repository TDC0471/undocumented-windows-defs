#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _FS_FILTER_SECTION_SYNC_OUTPUT
{
    ULONG StructureSize;                                                    //0x0
    ULONG SizeReturned;                                                     //0x4
    ULONG Flags;                                                            //0x8
    ULONG DesiredReadAlignment;                                             //0xc
};
/* Used in */
// _FS_FILTER_PARAMETERS

