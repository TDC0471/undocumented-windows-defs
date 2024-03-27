#pragma once
/* ------------------ */

#include <_RTL_LOOKASIDE.h>

//0x1040 bytes (sizeof)
struct _RTL_DYNAMIC_LOOKASIDE
{
    ULONGLONG EnabledBucketBitmap;                                          //0x0
    ULONG BucketCount;                                                      //0x8
    ULONG ActiveBucketCount;                                                //0xc
    struct _RTL_LOOKASIDE Buckets[64];                                      //0x40
};
/* Used in */
// _EX_HEAP_POOL_NODE

