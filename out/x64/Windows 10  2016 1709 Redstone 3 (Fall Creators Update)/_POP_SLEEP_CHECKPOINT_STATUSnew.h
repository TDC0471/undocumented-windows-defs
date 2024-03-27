#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POP_SLEEP_CHECKPOINT_STATUS
{
    PopSleepCheckpointStatusDisabled = 0,
    PopSleepCheckpointStatusEnabledDueToDirtyShutdown = 1,
    PopSleepCheckpointStatusEnabledManually = 4,
    PopSleepCheckpointStatusEnabledMax = 7,
    PopSleepCheckpointStatusFailedNotEfiSystem = 8,
    PopSleepCheckpointStatusFailedInsufficientSpace = 9,
    PopSleepCheckpointStatusFailedOtherError = 15,
    PopSleepCheckpointStatusMax = 15
};
