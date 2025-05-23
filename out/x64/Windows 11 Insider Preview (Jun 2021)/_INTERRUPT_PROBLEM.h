#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _INTERRUPT_PROBLEM
{
    InterruptProblemNone = 0,
    InterruptProblemMadtParsingFailure = 1,
    InterruptProblemNoControllersFound = 2,
    InterruptProblemFailedDiscovery = 3,
    InterruptProblemInitializeLocalUnitFailed = 4,
    InterruptProblemInitializeIoUnitFailed = 5,
    InterruptProblemSetLogicalIdFailed = 6,
    InterruptProblemSetLineStateFailed = 7,
    InterruptProblemGenerateMessageFailed = 8,
    InterruptProblemConvertIdFailed = 9,
    InterruptProblemCmciSetupFailed = 10,
    InterruptProblemQueryMaxProcessorsCalledTooEarly = 11,
    InterruptProblemProcessorReset = 12,
    InterruptProblemStartProcessorFailed = 13,
    InterruptProblemProcessorNotAlive = 14,
    InterruptProblemLowerIrqlViolation = 15,
    InterruptProblemInvalidIrql = 16,
    InterruptProblemNoSuchController = 17,
    InterruptProblemNoSuchLines = 18,
    InterruptProblemBadConnectionData = 19,
    InterruptProblemBadRoutingData = 20,
    InterruptProblemInvalidProcessor = 21,
    InterruptProblemFailedToAttainTarget = 22,
    InterruptProblemUnsupportedWiringConfiguration = 23,
    InterruptProblemSpareAlreadyStarted = 24,
    InterruptProblemClusterNotFullyReplaced = 25,
    InterruptProblemNewClusterAlreadyActive = 26,
    InterruptProblemNewClusterTooLarge = 27,
    InterruptProblemCannotHardwareQuiesce = 28,
    InterruptProblemIpiDestinationUpdateFailed = 29,
    InterruptProblemNoMemory = 30,
    InterruptProblemNoIrtEntries = 31,
    InterruptProblemConnectionDataBaitAndSwitch = 32,
    InterruptProblemInvalidLogicalFlatId = 33,
    InterruptProblemDeinitializeLocalUnitFailed = 34,
    InterruptProblemDeinitializeIoUnitFailed = 35,
    InterruptProblemMismatchedThermalLvtIsr = 36,
    InterruptProblemHvRetargetFailed = 37,
    InterruptProblemDeferredErrorSetupFailed = 38,
    InterruptProblemBadInterruptPartition = 39
};
/* Used in */
// _REGISTERED_INTERRUPT_CONTROLLER

