#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMVAD_FLAGS2
{
    ULONG FileOffset:24;                                                    //0x0
    ULONG Large:1;                                                          //0x0
    ULONG TrimBehind:1;                                                     //0x0
    ULONG Inherit:1;                                                        //0x0
    ULONG NoValidationNeeded:1;                                             //0x0
    ULONG PrivateDemandZero:1;                                              //0x0
    ULONG Spare:3;                                                          //0x0
};
/* Used in */
// _MMVAD

