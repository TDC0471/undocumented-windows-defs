#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_CFG_BITMAP_TYPE
{
    CfgBitMapNative = 0,
    CfgBitMapWow64 = 1,
    CfgBitMapWow64NativeLow = 2,
    CfgBitMapMax = 3
};
