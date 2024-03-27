#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PS_WAKE_REASON
{
    PsWakeReasonUser = 0,
    PsWakeReasonExecutionRequired = 1,
    PsWakeReasonKernel = 2,
    PsWakeReasonInstrumentation = 3,
    PsMaxWakeReasons = 4
};
