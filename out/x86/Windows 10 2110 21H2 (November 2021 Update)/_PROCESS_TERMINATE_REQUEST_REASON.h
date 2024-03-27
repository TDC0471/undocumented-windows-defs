#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PROCESS_TERMINATE_REQUEST_REASON
{
    ProcessTerminateRequestReasonNone = 0,
    ProcessTerminateCommitFail = 1,
    ProcessTerminateWriteToExecuteMemory = 2,
    ProcessTerminateAttachedWriteToExecuteMemory = 3,
    ProcessTerminateRequestReasonMax = 4
};
