#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _KLOCK_ENTRY_LOCK_STATE
{
    union
    {
        struct
        {
            ULONG CrossThreadReleasable:1;                                  //0x0
            ULONG Busy:1;                                                   //0x0
            ULONG Reserved:29;                                              //0x0
            ULONG InTree:1;                                                 //0x0
        };
        VOID* LockState;                                                    //0x0
    };
    union
    {
        VOID* SessionState;                                                 //0x4
        ULONG SessionId;                                                    //0x4
    };
};
/* Used in */
// _KLOCK_ENTRY

