#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WHEA_EVENT_LOG_ENTRY_ID
{
    WheaEventLogEntryIdCmcPollingTimeout = -2147483647,
    WheaEventLogEntryIdWheaInit = -2147483646,
    WheaEventLogEntryIdCmcSwitchToPolling = -2147483645,
    WheaEventLogEntryIdDroppedCorrectedError = -2147483644,
    WheaEventLogEntryIdStartedReportHwError = -2147483643,
    WheaEventLogEntryIdPFAMemoryOfflined = -2147483642,
    WheaEventLogEntryIdPFAMemoryRemoveMonitor = -2147483641,
    WheaEventLogEntryIdPFAMemoryPolicy = -2147483640,
    WheaEventLogEntryIdPshedInjectError = -2147483639,
    WheaEventLogEntryIdOscCapabilities = -2147483638,
    WheaEventLogEntryIdPshedPluginRegister = -2147483637,
    WheaEventLogEntryIdAddRemoveErrorSource = -2147483636,
    WheaEventLogEntryIdWorkQueueItem = -2147483635,
    WheaEventLogEntryIdAttemptErrorRecovery = -2147483634,
    WheaEventLogEntryIdMcaFoundErrorInBank = -2147483633,
    WheaEventLogEntryIdMcaStuckErrorCheck = -2147483632,
    WheaEventLogEntryIdMcaErrorCleared = -2147483631,
    WheaEventLogEntryIdClearedPoison = -2147483630,
    WheaEventLogEntryIdProcessEINJ = -2147483629,
    WheaEventLogEntryIdProcessHEST = -2147483628,
    WheaEventLogEntryIdCreateGenericRecord = -2147483627,
    WheaEventLogEntryIdErrorRecord = -2147483626,
    WheaEventLogEntryIdErrorRecordLimit = -2147483625,
    WheaEventLogEntryIdSELEventFailed = -2147483624,
    WheaEventLogEntryIdErrSrcArrayInvalid = -2147483623,
    WheaEventLogEntryIdErrSrcInvalid = -2147483616,
    WheaEventLogEntryIdGenericErrMemMap = -2147483615,
    WheaEventLogEntryIdPshedCallbackCollision = -2147483614,
    WheaEventLogEntryIdSELBugCheckProgress = -2147483613
};
/* Used in */
// _WHEA_EVENT_LOG_ENTRY_HEADER

