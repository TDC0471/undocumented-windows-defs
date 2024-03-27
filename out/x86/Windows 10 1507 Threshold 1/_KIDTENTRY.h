#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _KIDTENTRY
{
    USHORT Offset;                                                          //0x0
    USHORT Selector;                                                        //0x2
    USHORT Access;                                                          //0x4
    USHORT ExtendedOffset;                                                  //0x6
};
/* Used in */
// _KPCR
// _KPROCESS

