#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _OWNER_ENTRY
{
    ULONGLONG OwnerThread;                                                  //0x0
    union
    {
        LONG OwnerCount;                                                    //0x8
        ULONG TableSize;                                                    //0x8
    };
};
/* Used in */
// _ERESOURCE

