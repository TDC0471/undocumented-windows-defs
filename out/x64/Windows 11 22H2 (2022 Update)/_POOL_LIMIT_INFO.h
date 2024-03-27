#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _POOL_LIMIT_INFO
{
    ULONGLONG HardMemoryLimit;                                              //0x0
    ULONGLONG NotificationLimit;                                            //0x8
    ULONGLONG MemoryIssued;                                                 //0x10
};
/* Used in */
// _POOL_LIMIT_TABLE_ENTRY

