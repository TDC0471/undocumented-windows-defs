#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _HAL_INIT_PHASE
{
    HalInitPhaseBspProcEarly = 0,
    HalInitPhaseBspProcEarlyMmReady = 1,
    HalInitPhaseBspProcEarlyTimerReady = 2,
    HalInitPhaseBspProcEarlyEnd = 3,
    HalInitPhasePnProcEarly = 4,
    HalInitPhasePnProcEarlyInterruptsReady = 5,
    HalInitPhasePnProcEarlyEnd = 6,
    HalInitPhaseBspSystemEarly = 7,
    HalInitPhaseBspSystemEarlyAcpiReady = 8,
    HalInitPhaseBspSystemEarlyHalExtensionsReady = 9,
    HalInitPhaseBspSystemEarlyInterruptsAlmostReady = 10,
    HalInitPhaseBspSystemEarlyIommusReady = 11,
    HalInitPhaseBspSystemEarlyInterruptsReady = 12,
    HalInitPhaseBspSystemEarlyDmaReady = 12,
    HalInitPhaseBspSystemEarlyProcReady = 13,
    HalInitPhaseBspSystemEarlyHwPerfCntReady = 14,
    HalInitPhaseBspSystemEarlyAllocationDone = 15,
    HalInitPhaseBspSystemEarlyEnd = 16,
    HalInitPhaseBspSystemLate = 17,
    HalInitPhaseBspSystemLateEnd = 18,
    HalInitPhasePnSystemLate = 19,
    HalInitPhasePnSystemLateEnd = 20,
    HalInitPhaseAllProcStartComplete = 21,
    HalInitPhaseAllProcStartCompleteEnd = 22,
    HalInitPhaseExPhase1Ready = 23,
    HalInitPhaseExPhase1ReadyEnd = 24,
    HalInitPhaseAcpiPdoStarted = 25,
    HalInitPhaseAcpiPdoStartedEnd = 26,
    HalInitPhaseReportResources = 27,
    HalInitPhaseReportResourcesEnd = 28,
    HalInitPhaseReportCoreSystemResources = 29,
    HalInitPhaseReportCoreSystemResourcesEnd = 30,
    HalInitPhaseLateSystemActions = 31,
    HalInitPhaseLateSystemActionsTelemetryReady = 32,
    HalInitPhaseLateSystemActionsEnd = 33
};
