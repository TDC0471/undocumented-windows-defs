#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PS_STD_HANDLE_STATE
{
    PsNeverDuplicate = 0,
    PsRequestDuplicate = 1,
    PsAlwaysDuplicate = 2,
    PsMaxStdHandleStates = 3
};
