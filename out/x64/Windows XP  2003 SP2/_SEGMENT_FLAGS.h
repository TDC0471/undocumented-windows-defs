#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _SEGMENT_FLAGS
{
    ULONGLONG TotalNumberOfPtes4132:10;                                     //0x0
    ULONGLONG ExtraSharedWowSubsections:1;                                  //0x0
    ULONGLONG LargePages:1;                                                 //0x0
    ULONGLONG Spare:52;                                                     //0x0
};
/* Used in */
// _SEGMENT

