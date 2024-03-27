#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _CM_HIVE_CACHE_OPLOCK_FILE_TYPE
{
    OplockOnPrimary = 0,
    OplockOnLog1 = 1,
    OplockOnLog2 = 2,
    OplocksOnFilesMax = 3
};
