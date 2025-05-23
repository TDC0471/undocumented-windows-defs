#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _VRF_RULE_CLASS_ID
{
    VrfSpecialPoolRuleClass = 0,
    VrfForceIrqlRuleClass = 1,
    VrfAllocationFailuresRuleClass = 2,
    VrfTrackingPoolAllocationsRuleClass = 3,
    VrfIORuleClass = 4,
    VrfDeadlockPreventionRuleClass = 5,
    VrfEnhancedIORuleClass = 6,
    VrfDMARuleClass = 7,
    VrfSecurityRuleClass = 8,
    VrfForcePendingIORequestRuleClass = 9,
    VrfIRPTrackingRuleClass = 10,
    VrfMiscellaneousRuleClass = 11,
    VrfMoreDebuggingRuleClass = 12,
    VrfMDLInvariantStackRuleClass = 13,
    VrfMDLInvariantDriverRuleClass = 14,
    VrfPowerDelayFuzzingRuleClass = 15,
    VrfPortMiniportRuleClass = 16,
    VrfStandardDDIRuleClass = 17,
    VrfAutoFailRuleClass = 18,
    VrfAdditionalDDIRuleClass = 19,
    VrfRuleClassBase = 20,
    VrfNdisWifiRuleClass = 21,
    VrfDriverLoggingRuleClass = 22,
    VrfSyncDelayFuzzingRuleClass = 23,
    VrfVMSwitchingRuleClass = 24,
    VrfCodeIntegrityRuleClass = 25,
    VrfBelow4GBAllocationRuleClass = 26,
    VrfProcessorBranchTraceRuleClass = 27,
    VrfAdvancedMMRuleClass = 28,
    VrfExtendingXDVTimeLimit = 29,
    VrfSystemBIOSRuleClass = 30,
    VrfHardwareRuleClass = 31,
    VrfStateSepRuleClass = 32,
    VrfWDFRuleClass = 33,
    VrfMoreIrqlRuleClass = 34,
    VrfXDVPlatformMode = 35,
    VrfStandalonePlatformMode = 36,
    VrfPlatformModeTest = 37,
    ReservedForDVRF38 = 38,
    ReservedForDVRF39 = 39,
    ReservedForDVRF40 = 40,
    ReservedForDVRF41 = 41,
    ReservedForDVRF42 = 42,
    ReservedForDVRF43 = 43,
    ReservedForDVRF44 = 44,
    ReservedForDVRF45 = 45,
    ReservedForDVRF46 = 46,
    ReservedForDVRF47 = 47,
    ReservedForDVRF48 = 48,
    ReservedForDVRF49 = 49,
    ReservedForDVRF50 = 50,
    ReservedForDVRF51 = 51,
    ReservedForDVRF52 = 52,
    ReservedForDVRF53 = 53,
    ReservedForDVRF54 = 54,
    ReservedForDVRF55 = 55,
    ReservedForDVRF56 = 56,
    ReservedForDVRF57 = 57,
    ReservedForDVRF58 = 58,
    ReservedForDVRF59 = 59,
    ReservedForDVRF60 = 60,
    ReservedForDVRF61 = 61,
    ReservedForDVRF62 = 62,
    ReservedForDVRF63 = 63,
    VrfRuleClassSizeMax = 64
};
