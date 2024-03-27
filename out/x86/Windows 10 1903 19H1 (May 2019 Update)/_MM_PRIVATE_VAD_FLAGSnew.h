#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MM_PRIVATE_VAD_FLAGS
{
    ULONG Lock:1;                                                           //0x0
    ULONG LockContended:1;                                                  //0x0
    ULONG DeleteInProgress:1;                                               //0x0
    ULONG NoChange:1;                                                       //0x0
    ULONG VadType:3;                                                        //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG PreferredNode:6;                                                  //0x0
    ULONG PageSize:2;                                                       //0x0
    ULONG PrivateMemoryAlwaysSet:1;                                         //0x0
    ULONG WriteWatch:1;                                                     //0x0
    ULONG FixedLargePageSize:1;                                             //0x0
    ULONG ZeroFillPagesOptional:1;                                          //0x0
    ULONG Graphics:1;                                                       //0x0
    ULONG Enclave:1;                                                        //0x0
    ULONG ShadowStack:1;                                                    //0x0
};
/* Used in */
// _MMVAD_SHORT

