#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KWAIT_BLOCK_STATE
{
    WaitBlockBypassStart = 0,
    WaitBlockBypassComplete = 1,
    WaitBlockSuspendBypassStart = 2,
    WaitBlockSuspendBypassComplete = 3,
    WaitBlockActive = 4,
    WaitBlockInactive = 5,
    WaitBlockSuspended = 6,
    WaitBlockAllStates = 7
};
