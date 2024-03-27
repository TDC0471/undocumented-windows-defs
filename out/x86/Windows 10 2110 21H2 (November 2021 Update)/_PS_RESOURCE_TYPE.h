#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PS_RESOURCE_TYPE
{
    PsResourceNonPagedPool = 0,
    PsResourcePagedPool = 1,
    PsResourcePageFile = 2,
    PsResourceWorkingSet = 3,
    PsResourceMax = 4
};
