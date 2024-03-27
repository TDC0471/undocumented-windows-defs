#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MM_GRAPHICS_VAD_FLAGS
{
    ULONG Lock:1;                                                           //0x0
    ULONG LockContended:1;                                                  //0x0
    ULONG DeleteInProgress:1;                                               //0x0
    ULONG NoChange:1;                                                       //0x0
    ULONG VadType:3;                                                        //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG PreferredNode:7;                                                  //0x0
    ULONG PageSize:2;                                                       //0x0
    ULONG PrivateMemoryAlwaysSet:1;                                         //0x0
    ULONG WriteWatch:1;                                                     //0x0
    ULONG FixedLargePageSize:1;                                             //0x0
    ULONG ZeroFillPagesOptional:1;                                          //0x0
    ULONG GraphicsAlwaysSet:1;                                              //0x0
    ULONG GraphicsUseCoherentBus:1;                                         //0x0
    ULONG GraphicsNoCache:1;                                                //0x0
    ULONG GraphicsPageProtection:3;                                         //0x0
};
/* Used in */
// _MMVAD_SHORT

