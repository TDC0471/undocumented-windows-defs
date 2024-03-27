#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KTOPOLOGY_LEVEL
{
    KTopologyLevelProcessor = 0,
    KTopologyLevelCore = 1,
    KTopologyLevelModule = 2,
    KTopologyLevelDie = 3,
    KTopologyLevelPackage = 4,
    KTopologyLevelCount = 5
};
