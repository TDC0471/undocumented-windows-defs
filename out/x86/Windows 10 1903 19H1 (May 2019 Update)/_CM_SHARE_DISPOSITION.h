#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _CM_SHARE_DISPOSITION
{
    CmResourceShareUndetermined = 0,
    CmResourceShareDeviceExclusive = 1,
    CmResourceShareDriverExclusive = 2,
    CmResourceShareShared = 3
};
