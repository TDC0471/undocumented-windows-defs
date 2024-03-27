#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PS_QUOTA_TYPE
{
    PsNonPagedPool = 0,
    PsPagedPool = 1,
    PsPageFile = 2,
    PsQuotaTypes = 3
};
