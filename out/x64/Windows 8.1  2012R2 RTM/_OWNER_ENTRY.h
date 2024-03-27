#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _OWNER_ENTRY
{
    ULONGLONG OwnerThread;                                                  //0x0
    union
    {
        struct
        {
            ULONG IoPriorityBoosted:1;                                      //0x8
            ULONG OwnerReferenced:1;                                        //0x8
            ULONG OwnerCount:30;                                            //0x8
        };
        ULONG TableSize;                                                    //0x8
    };
};
/* Used in */
// _ERESOURCE

