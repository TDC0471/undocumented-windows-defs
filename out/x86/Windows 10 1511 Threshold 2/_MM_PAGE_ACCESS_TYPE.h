#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MM_PAGE_ACCESS_TYPE
{
    MmPteAccessType = 0,
    MmCcReadAheadType = 1,
    MmPfnRepurposeType = 2,
    MmMaximumPageAccessType = 3
};
/* Used in */
// _MM_PAGE_ACCESS_INFO_HEADER

