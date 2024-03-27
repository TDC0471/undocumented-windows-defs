#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POP_SPM_STATUS
{
    PopSpmStatusUninitialized = 0,
    PopSpmStatusFailedNoMemory = 1,
    PopSpmStatusFailedNoPoliciesFound = 2,
    PopSpmStatusFailedToOpenExtHandle = 3,
    PopSpmStatusFailedToOpenIntHandle = 4,
    PopSpmStatusWaitingForRegistration = 5,
    PopSpmStatusInitialized = 6,
    PopSpmStatusInvalid = 7
};
