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
    PowerRequestInternalInvalid = 5
};
