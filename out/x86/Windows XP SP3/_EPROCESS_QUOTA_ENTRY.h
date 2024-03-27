#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _EPROCESS_QUOTA_ENTRY
{
    ULONG Usage;                                                            //0x0
    ULONG Limit;                                                            //0x4
    ULONG Peak;                                                             //0x8
    ULONG Return;                                                           //0xc
};
/* Used in */
// _EPROCESS_QUOTA_BLOCK

