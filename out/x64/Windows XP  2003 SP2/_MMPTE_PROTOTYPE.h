#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_PROTOTYPE
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG Unused0:7;                                                    //0x0
    ULONGLONG ReadOnly:1;                                                   //0x0
    ULONGLONG Unused1:1;                                                    //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG Protection:5;                                                 //0x0
    LONGLONG ProtoAddress:48;                                               //0x0
};
/* Used in */
// _MMPTE

