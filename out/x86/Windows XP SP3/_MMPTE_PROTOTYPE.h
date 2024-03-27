#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMPTE_PROTOTYPE
{
    ULONG Valid:1;                                                          //0x0
    ULONG ProtoAddressLow:7;                                                //0x0
    ULONG ReadOnly:1;                                                       //0x0
    ULONG WhichPool:1;                                                      //0x0
    ULONG Prototype:1;                                                      //0x0
    ULONG ProtoAddressHigh:21;                                              //0x0
};
/* Used in */
// _MMPTE

