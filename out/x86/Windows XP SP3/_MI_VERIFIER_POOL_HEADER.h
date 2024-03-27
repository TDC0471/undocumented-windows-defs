#pragma once
/* ------------------ */

#include <_MI_VERIFIER_DRIVER_ENTRY.h>

//0x8 bytes (sizeof)
struct _MI_VERIFIER_POOL_HEADER
{
    ULONG ListIndex;                                                        //0x0
    struct _MI_VERIFIER_DRIVER_ENTRY* Verifier;                             //0x4
};
