#pragma once
/* ------------------ */

#include <_CM_KEY_CONTROL_BLOCK.h>

//0x50 bytes (sizeof)
struct _CM_PARSE_DEBUG_INFO
{
    struct _CM_KEY_CONTROL_BLOCK* SymlinkCachedKcb;                         //0x0
    struct _CM_KEY_CONTROL_BLOCK* StartingKcb;                              //0x8
    struct _CM_KEY_CONTROL_BLOCK* KcbCacheResult;                           //0x10
    struct _CM_KEY_CONTROL_BLOCK* WalkResult;                               //0x18
    struct _CM_KEY_CONTROL_BLOCK* DeepestKcbFound;                          //0x20
    UCHAR KcbCacheLevels;                                                   //0x28
    UCHAR WalkLevels;                                                       //0x29
    UCHAR FailureCount;                                                     //0x2a
    struct
    {
        LONG Status;                                                        //0x2c
        ULONG Point;                                                        //0x30
    } FailurePoints[4];                                                     //0x2c
};
/* Used in */
// _HIVE_LOAD_FAILURE

