#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MACHINE_CHECK_NESTING_LEVEL
{
    McheckNormal = 0,
    McheckNmi = 1,
    McheckNestingLevels = 2
};
