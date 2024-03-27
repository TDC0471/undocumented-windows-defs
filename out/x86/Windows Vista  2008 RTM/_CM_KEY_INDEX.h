#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _CM_KEY_INDEX
{
    USHORT Signature;                                                       //0x0
    USHORT Count;                                                           //0x2
    ULONG List[1];                                                          //0x4
};
/* Used in */
// _u

