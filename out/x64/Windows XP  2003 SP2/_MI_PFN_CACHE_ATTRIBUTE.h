#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_PFN_CACHE_ATTRIBUTE
{
    MiNonCached = 0,
    MiCached = 1,
    MiWriteCombined = 2,
    MiNotMapped = 3
};
