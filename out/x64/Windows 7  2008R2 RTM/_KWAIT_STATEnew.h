#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KWAIT_STATE
{
    WaitInProgress = 0,
    WaitCommitted = 1,
    WaitAborted = 2,
    MaximumWaitState = 3
};
