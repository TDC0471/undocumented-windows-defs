#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PO_MODERN_SLEEP_ACTION
{
    PoModernSleepActionGlobalActivatorsVeto = 0,
    PoModernSleepActionNonBlockingPhases = 1,
    PoModernSleepActionForceIdle = 2,
    PoModernSleepActionMinimalBlockingNotificationClients = 3,
    PoModernSleepActionMax = 4
};
