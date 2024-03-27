#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _OWNER_ENTRY
{
    ULONG OwnerThread;                                                      //0x0
    union
    {
        struct
        {
            ULONG IoPriorityBoosted:1;                                      //0x4
            ULONG OwnerReferenced:1;                                        //0x4
            ULONG IoQoSPriorityBoosted:1;                                   //0x4
            ULONG OwnerCount:29;                                            //0x4
        };
        ULONG TableSize;                                                    //0x4
    };
};
/* Used in */
// _ERESOURCE

