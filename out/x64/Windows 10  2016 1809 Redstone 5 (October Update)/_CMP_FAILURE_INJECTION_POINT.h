#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _CMP_FAILURE_INJECTION_POINT
{
    CmpFailurePointPoolAllocation = 0,
    CmpFailurePointViewMapping = 1,
    CmpFailurePointViewPinning = 2,
    CmpFailurePointResourceCharging = 3,
    CmpFailurePointFileWrite = 4,
    CmpFailurePointFileRead = 5,
    CmpFailurePointCacheFlush = 6,
    CmpFailurePointFlush = 7,
    CmpFailurePointFlushAndPurge = 8,
    CmpFailurePointForceLargeBin = 9,
    CmpFailurePointDontFixAlignment = 10,
    CmpFailurePointAllocateCell = 11,
    CmpFailurePointMarkDirty = 12,
    CmpFailurePointForceMultiLevelMap = 13,
    CmpFailurePointAllocateKcb = 14,
    CmpFailurePointCreateKeyBody = 15,
    CmpFailurePointForcePoolAllocateKcb = 16,
    CmpFailurePointForceFreeKcb = 17,
    CmpFailurePointKeyEnumResumeContextVerification = 18,
    CmpFailurePointKeyEnumForceRetry = 19,
    CmpFailurePointForceLazyCOWByPolicy = 20,
    CmpFailureInjectionPointCount = 21
};
