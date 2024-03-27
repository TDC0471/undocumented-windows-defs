#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _DEVICE_MANAGE_DATA_SET_ATTRIBUTES
{
    ULONG Size;                                                             //0x0
    ULONG Action;                                                           //0x4
    ULONG Flags;                                                            //0x8
    ULONG ParameterBlockOffset;                                             //0xc
    ULONG ParameterBlockLength;                                             //0x10
    ULONG DataSetRangesOffset;                                              //0x14
    ULONG DataSetRangesLength;                                              //0x18
};
