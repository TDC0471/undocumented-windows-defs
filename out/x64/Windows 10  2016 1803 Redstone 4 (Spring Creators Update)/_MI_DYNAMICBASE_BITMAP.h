#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_DYNAMICBASE_BITMAP
{
    DynamicBaseBitMap32 = 0,
    DynamicBaseBitMap64Low = 1,
    DynamicBaseBitMap64High = 2,
    DynamicBaseBitMapWow64Dll = 3,
    LastDynamicBaseBitMap = 4
};