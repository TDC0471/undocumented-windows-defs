#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMWSLENTRY
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG LockedInWs:1;                                                 //0x0
    ULONGLONG LockedInMemory:1;                                             //0x0
    ULONGLONG Protection:5;                                                 //0x0
    ULONGLONG Hashed:1;                                                     //0x0
    ULONGLONG Direct:1;                                                     //0x0
    ULONGLONG Age:2;                                                        //0x0
    ULONGLONG VirtualPageNumber:52;                                         //0x0
};
/* Used in */
// _MMWSLE

