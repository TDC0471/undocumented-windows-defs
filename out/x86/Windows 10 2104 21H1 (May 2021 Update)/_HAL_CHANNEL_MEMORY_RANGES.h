#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _HAL_CHANNEL_MEMORY_RANGES
{
    ULONG PageFrameIndex;                                                   //0x0
    USHORT MpnId;                                                           //0x4
    USHORT Node;                                                            //0x6
    USHORT Channel;                                                         //0x8
    UCHAR IsPowerManageable;                                                //0xa
    UCHAR DeepPowerState;                                                   //0xb
};
/* Used in */
// _MI_HARDWARE_STATE

