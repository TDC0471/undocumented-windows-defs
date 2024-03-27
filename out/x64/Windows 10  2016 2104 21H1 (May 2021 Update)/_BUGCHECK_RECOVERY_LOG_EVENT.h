#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _BUGCHECK_RECOVERY_LOG_EVENT
{
    RecoveryEventStart = 0,
    RecoveryEventPhase1Status = 1,
    RecoveryEventPhase2Status = 2,
    RecoveryEventMax = 3
};
