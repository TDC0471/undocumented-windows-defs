#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMWSLENTRY
{
    ULONG Valid:1;                                                          //0x0
    ULONG LockedInWs:1;                                                     //0x0
    ULONG LockedInMemory:1;                                                 //0x0
    ULONG Protection:5;                                                     //0x0
    ULONG Hashed:1;                                                         //0x0
    ULONG Direct:1;                                                         //0x0
    ULONG Age:2;                                                            //0x0
    ULONG VirtualPageNumber:20;                                             //0x0
};
/* Used in */
// _MMWSLE

