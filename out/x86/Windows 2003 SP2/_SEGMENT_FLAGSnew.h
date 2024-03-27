#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _SEGMENT_FLAGS
{
    ULONG TotalNumberOfPtes4132:10;                                         //0x0
    ULONG ExtraSharedWowSubsections:1;                                      //0x0
    ULONG LargePages:1;                                                     //0x0
    ULONG Spare:20;                                                         //0x0
};
/* Used in */
// _SEGMENT

