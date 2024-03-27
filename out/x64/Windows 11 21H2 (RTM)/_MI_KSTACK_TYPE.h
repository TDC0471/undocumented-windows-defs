#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_KSTACK_TYPE
{
    MiRegularKstack = 0,
    MiShortLivedKstack = 1,
    MiXStateStateKstack = 2,
    MiMaximumKstack = 3
};
