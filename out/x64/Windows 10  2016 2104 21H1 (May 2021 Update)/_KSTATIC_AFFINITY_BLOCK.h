#pragma once
/* ------------------ */

#include <_KAFFINITY_EX.h>

//0x2a0 bytes (sizeof)
struct _KSTATIC_AFFINITY_BLOCK
{
    union
    {
        struct _KAFFINITY_EX KeFlushTbAffinity;                             //0x0
        struct _KAFFINITY_EX KeFlushWbAffinity;                             //0x0
        struct _KAFFINITY_EX KeSyncContextAffinity;                         //0x0
    };
    struct _KAFFINITY_EX KeFlushTbDeepIdleAffinity;                         //0xa8
    struct _KAFFINITY_EX KeIpiSendAffinity;                                 //0x150
    struct _KAFFINITY_EX KeIpiSendIpiSet;                                   //0x1f8
};
/* Used in */
// _KPRCB

