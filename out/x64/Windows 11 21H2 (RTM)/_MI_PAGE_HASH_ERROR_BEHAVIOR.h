#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_PAGE_HASH_ERROR_BEHAVIOR
{
    MiPageHashErrorBugcheck = 0,
    MiPageHashErrorReturnError = 1,
    MiPageHashErrorIgnore = 2
};
/* Used in */
// _MI_ERROR_STATE

