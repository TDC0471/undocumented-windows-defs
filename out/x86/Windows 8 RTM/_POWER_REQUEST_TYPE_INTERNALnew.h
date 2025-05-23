#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POWER_REQUEST_TYPE_INTERNAL
{
    PowerRequestDisplayRequiredInternal = 0,
    PowerRequestSystemRequiredInternal = 1,
    PowerRequestAwayModeRequiredInternal = 2,
    PowerRequestExecutionRequiredInternal = 3,
    PowerRequestPerfBoostRequiredInternal = 4,
    PowerRequestAudioAnyInternal = 5,
    PowerRequestAudioOffloadInternal = 6,
    PowerRequestVideoBatchingInternal = 7,
    PowerRequestFullScreenVideoInternal = 8,
    PowerRequestInternalInvalid = 9
};
