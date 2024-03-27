#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _OWNER_ENTRY
{
    ULONG OwnerThread;                                                      //0x0
    union
    {
        LONG OwnerCount;                                                    //0x4
        ULONG TableSize;                                                    //0x4
    };
};
/* Used in */
// _ERESOURCE

