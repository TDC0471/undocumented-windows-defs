#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _DBGKD_GET_SET_BUS_DATA
{
    ULONG BusDataType;                                                      //0x0
    ULONG BusNumber;                                                        //0x4
    ULONG SlotNumber;                                                       //0x8
    ULONG Offset;                                                           //0xc
    ULONG Length;                                                           //0x10
};
/* Used in */
// _DBGKD_MANIPULATE_STATE64

