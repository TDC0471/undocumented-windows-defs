#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_ASSIGNED_REGION_TYPES
{
    AssignedRegionNonPagedPool = 0,
    AssignedRegionPagedPool = 1,
    AssignedRegionSystemCache = 2,
    AssignedRegionSystemPtes = 3,
    AssignedRegionUltraZero = 4,
    AssignedRegionPfnDatabase = 5,
    AssignedRegionCfg = 6,
    AssignedRegionHyperSpace = 7,
    AssignedRegionPageTables = 8,
    AssignedRegionSpecialPoolPaged = 9,
    AssignedRegionSpecialPoolNonPaged = 10,
    AssignedRegionSession = 11,
    AssignedRegionSystemImages = 12,
    AssignedRegionMaximum = 13
};
