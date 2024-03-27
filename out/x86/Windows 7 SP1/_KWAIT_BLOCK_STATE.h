#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KWAIT_BLOCK_STATE
{
    WaitBlockBypassStart = 0,
    WaitBlockBypassComplete = 1,
    WaitBlockActive = 2,
    WaitBlockInactive = 3,
    WaitBlockAllStates = 4
};
