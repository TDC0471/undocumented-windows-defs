#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _HAL_CHANNEL_MEMORY_RANGES
{
    ULONGLONG PageFrameIndex;                                               //0x0
    USHORT MpnId;                                                           //0x8
    USHORT Node;                                                            //0xa
    USHORT Channel;                                                         //0xc
    UCHAR IsPowerManageable;                                                //0xe
    UCHAR DeepPowerState;                                                   //0xf
};
/* Used in */
// _MI_HARDWARE_STATE

