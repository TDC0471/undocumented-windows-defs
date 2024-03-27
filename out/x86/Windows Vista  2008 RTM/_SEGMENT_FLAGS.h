#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _SEGMENT_FLAGS
{
    ULONG TotalNumberOfPtes4132:10;                                         //0x0
    ULONG ExtraSharedWowSubsections:1;                                      //0x0
    ULONG LargePages:1;                                                     //0x0
    ULONG WatchProto:1;                                                     //0x0
    ULONG DebugSymbolsLoaded:1;                                             //0x0
    ULONG WriteCombined:1;                                                  //0x0
    ULONG NoCache:1;                                                        //0x0
    ULONG FloppyMedia:1;                                                    //0x0
    ULONG DefaultProtectionMask:5;                                          //0x0
    ULONG ContainsPxeSubsection:1;                                          //0x0
    ULONG Spare:9;                                                          //0x0
};
/* Used in */
// _MAPPED_FILE_SEGMENT
// _SEGMENT

