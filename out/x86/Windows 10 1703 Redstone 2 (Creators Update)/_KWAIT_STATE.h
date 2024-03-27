#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KWAIT_STATE
{
    WaitInProgress = 0,
    WaitCommitted = 1,
    WaitAborted = 2,
    WaitSuspendInProgress = 3,
    WaitSuspended = 4,
    WaitResumeInProgress = 5,
    WaitResumeAborted = 6,
    WaitFirstSuspendState = 3,
    WaitLastSuspendState = 6,
    MaximumWaitState = 7
};
