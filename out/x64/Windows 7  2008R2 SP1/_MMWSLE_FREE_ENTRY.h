#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMWSLE_FREE_ENTRY
{
    ULONGLONG MustBeZero:1;                                                 //0x0
    ULONGLONG PreviousFree:31;                                              //0x0
    ULONGLONG NextFree:32;                                                  //0x0
};
/* Used in */
// _MMWSLE

