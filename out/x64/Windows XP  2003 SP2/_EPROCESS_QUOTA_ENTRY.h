#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _EPROCESS_QUOTA_ENTRY
{
    ULONGLONG Usage;                                                        //0x0
    ULONGLONG Limit;                                                        //0x8
    ULONGLONG Peak;                                                         //0x10
    ULONGLONG Return;                                                       //0x18
};
/* Used in */
// _EPROCESS_QUOTA_BLOCK

