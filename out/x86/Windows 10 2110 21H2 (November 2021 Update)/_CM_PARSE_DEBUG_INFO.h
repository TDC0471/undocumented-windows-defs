#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>

//0x38 bytes (sizeof)
struct _CM_PARSE_DEBUG_INFO
{
    struct _CM_KEY_CONTROL_BLOCK* SymlinkCachedKcb;                         //0x0
    struct _CM_KEY_CONTROL_BLOCK* StartingKcb;                              //0x4
    struct _CM_KEY_CONTROL_BLOCK* KcbCacheResult;                           //0x8
    struct _CM_KEY_CONTROL_BLOCK* WalkResult;                               //0xc
    struct _CM_KEY_CONTROL_BLOCK* DeepestKcbFound;                          //0x10
    UCHAR KcbCacheLevels;                                                   //0x14
    UCHAR WalkLevels;                                                       //0x15
    UCHAR FailureCount;                                                     //0x16
    struct
    {
        LONG Status;                                                        //0x18
        ULONG Point;                                                        //0x1c
    } FailurePoints[4];                                                     //0x18
};
/* Used in */
// _HIVE_LOAD_FAILURE

