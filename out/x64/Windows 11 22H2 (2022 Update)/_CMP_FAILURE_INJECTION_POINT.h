#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _CMP_FAILURE_INJECTION_POINT
{
    CmpFailurePointPoolAllocation = 0,
    CmpFailurePointFileWrite = 1,
    CmpFailurePointFileRead = 2,
    CmpFailurePointFlush = 3,
    CmpFailurePointFlushAndPurge = 4,
    CmpFailurePointForceLargeBin = 5,
    CmpFailurePointDontFixAlignment = 6,
    CmpFailurePointAllocateCell = 7,
    CmpFailurePointMarkDirty = 8,
    CmpFailurePointForceMultiLevelMap = 9,
    CmpFailurePointAllocateContiguousLogEntry = 10,
    CmpFailurePointAllocateKcb = 11,
    CmpFailurePointCreateKeyBody = 12,
    CmpFailurePointForceFreeKcb = 13,
    CmpFailurePointKcbLockUpgrade = 14,
    CmpFailurePointKcbLockUpgradeDelay = 15,
    CmpFailurePointKeyEnumResumeContextVerification = 16,
    CmpFailurePointKeyEnumForceRetry = 17,
    CmpFailurePointForceReorganization = 18,
    CmpFailurePointForceLazyCOWByPolicy = 19,
    CmpFailurePointForceBugcheckRecoveryEnabled = 20,
    CmpFailurePointCreateHiveCacheEntry = 21,
    CmpFailurePointClaimHiveCacheEntry = 22,
    CmpFailurePointSubscribePnpNotifications = 23,
    CmpFailurePointCreateOplockMonitoringThread = 24,
    CmpFailurePointOpenHiveFile = 25,
    CmpFailurePointRequestOplockOnPrimary = 26,
    CmpFailurePointRequestOplockOnLog1 = 27,
    CmpFailurePointRequestOplockOnLog2 = 28,
    CmpFailurePointCreateHive = 29,
    CmpFailureInjectionPointCount = 30
};
