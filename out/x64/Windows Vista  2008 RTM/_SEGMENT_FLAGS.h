#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _SEGMENT_FLAGS
{
    ULONGLONG TotalNumberOfPtes4132:10;                                     //0x0
    ULONGLONG ExtraSharedWowSubsections:1;                                  //0x0
    ULONGLONG LargePages:1;                                                 //0x0
    ULONGLONG WatchProto:1;                                                 //0x0
    ULONGLONG DebugSymbolsLoaded:1;                                         //0x0
    ULONGLONG WriteCombined:1;                                              //0x0
    ULONGLONG NoCache:1;                                                    //0x0
    ULONGLONG FloppyMedia:1;                                                //0x0
    ULONGLONG DefaultProtectionMask:5;                                      //0x0
    ULONGLONG ContainsPxeSubsection:1;                                      //0x0
    ULONGLONG Spare:40;                                                     //0x0
    ULONGLONG Binary32:1;                                                   //0x0
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _SEGMENT

