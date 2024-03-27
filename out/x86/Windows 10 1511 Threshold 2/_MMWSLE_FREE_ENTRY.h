#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMWSLE_FREE_ENTRY
{
    ULONG MustBeZero:1;                                                     //0x0
    ULONG PreviousFree:11;                                                  //0x0
    ULONG NextFree:20;                                                      //0x0
};
/* Used in */
// _MMWSLE

