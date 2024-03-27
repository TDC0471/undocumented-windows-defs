#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMVAD_FLAGS
{
    ULONG CommitCharge:19;                                                  //0x0
    ULONG PhysicalMapping:1;                                                //0x0
    ULONG ImageMap:1;                                                       //0x0
    ULONG UserPhysicalPages:1;                                              //0x0
    ULONG NoChange:1;                                                       //0x0
    ULONG WriteWatch:1;                                                     //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG LargePages:1;                                                     //0x0
    ULONG MemCommit:1;                                                      //0x0
    ULONG PrivateMemory:1;                                                  //0x0
};
/* Used in */
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT

