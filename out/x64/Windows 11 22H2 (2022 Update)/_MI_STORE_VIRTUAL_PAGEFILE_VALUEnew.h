#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_STORE_VIRTUAL_PAGEFILE_VALUE
{
    MiStoreVirtualPagefileValueInvalid = 0,
    MiStoreVirtualPagefileValueStart = 2,
    MiStoreVirtualPagefileSwap = 2,
    MiStoreVirtualPagefileCompress = 3,
    MiStoreVirtualPagefileNoCompress = 4,
    MiStoreVirtualPagefileMax = 5
};
