#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _RTL_SRWLOCK
{
    union
    {
        struct
        {
            ULONG Locked:1;                                                 //0x0
            ULONG Waiting:1;                                                //0x0
            ULONG Waking:1;                                                 //0x0
            ULONG MultipleShared:1;                                         //0x0
            ULONG Shared:28;                                                //0x0
        };
        ULONG Value;                                                        //0x0
        VOID* Ptr;                                                          //0x0
    };
};
/* Used in */
// _ALPC_COMPLETION_LIST_HEADER

