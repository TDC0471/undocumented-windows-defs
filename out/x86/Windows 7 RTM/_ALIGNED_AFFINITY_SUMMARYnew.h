#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x40 bytes (sizeof)
struct _ALIGNED_AFFINITY_SUMMARY
{
    struct _KAFFINITY_EX CpuSet;                                            //0x0
    struct _KAFFINITY_EX SMTSet;                                            //0xc
};
