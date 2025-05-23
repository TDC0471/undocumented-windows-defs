#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POP_SLEEP_CHECKPOINT
{
    PopSleepCheckpointInvalid = 0,
    PopSleepCheckpointPowerTransitionStart = 1,
    PopSleepCheckpointSuspendAppsBefore = 2,
    PopSleepCheckpointSuspendAppsAfter = 3,
    PopSleepCheckpointSuspendServicesBefore = 4,
    PopSleepCheckpointSuspendServicesAfter = 5,
    PopSleepCheckpointNotifySuperfetchBefore = 6,
    PopSleepCheckpointNotifySuperfetchAfter = 7,
    PopSleepCheckpointNotifyCallbacksBefore = 8,
    PopSleepCheckpointNotifyCallbacksAfter = 9,
    PopSleepCheckpointSleepTransactionCommitted = 10,
    PopSleepCheckpointQueryDriversBefore = 11,
    PopSleepCheckpointQueryDriversAfter = 12,
    PopSleepCheckpointAllocatingHiberContext = 13,
    PopSleepCheckpointSuspendDriversBefore = 14,
    PopSleepCheckpointPreSleepNotification = 16,
    PopSleepCheckpointInterruptsDisabledBegin = 17,
    PopSleepCheckpointInvokeHandlerBefore = 18,
    PopSleepCheckpointSaveHiberContextBegin = 19,
    PopSleepCheckpointInitializeDumpStackFailed = 20,
    PopSleepCheckpointHiberWriteFailed = 21,
    PopSleepCheckpointHiberFileTooSmall = 22,
    PopSleepCheckpointSaveHiberContextFailed = 23,
    PopSleepCheckpointSaveHiberContextEnd = 24,
    PopSleepCheckpointHiberKernelHandoff = 25,
    PopSleepCheckpointInvokeHandlerAfter = 26,
    PopSleepCheckpointReadHiberfileBefore = 27,
    PopSleepCheckpointInitializeDumpStackForReadFailed = 28,
    PopSleepCheckpointHiberReadFailed = 29,
    PopSleepCheckpointChecksumFailure = 30,
    PopSleepCheckpointDecompressionFailed = 31,
    PopSleepCheckpointReadHiberfileAfter = 32,
    PopSleepCheckpointInterruptsDisabledEnd = 33,
    PopSleepCheckpointWakeDriversAfter = 36,
    PopSleepCheckpointResumeAppsBefore = 37,
    PopSleepCheckpointResumeAppsAfter = 38,
    PopSleepCheckpointResumeServicesBefore = 39,
    PopSleepCheckpointResumeServicesAfter = 40,
    PopSleepCheckpointPowerTransitionEnd = 41,
    PopSleepCheckpointMax = 42
};
