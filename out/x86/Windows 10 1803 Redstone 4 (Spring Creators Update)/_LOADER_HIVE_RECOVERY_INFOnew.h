#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _LOADER_HIVE_RECOVERY_INFO
{
    ULONG Recovered:1;                                                      //0x0
    ULONG LegacyRecovery:1;                                                 //0x0
    ULONG SoftRebootConflict:1;                                             //0x0
    ULONG MostRecentLog:3;                                                  //0x0
    ULONG Spare:27;                                                         //0x4
    ULONG LogNextSequence;                                                  //0x8
    ULONG LogMinimumSequence;                                               //0xc
    ULONG LogCurrentOffset;                                                 //0x10
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

