#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _KLOCK_ENTRY_LOCK_STATE
{
    union
    {
        struct
        {
            ULONGLONG CrossThreadReleasable:1;                              //0x0
            ULONGLONG Busy:1;                                               //0x0
            ULONGLONG Reserved:61;                                          //0x0
            ULONGLONG InTree:1;                                             //0x0
        };
        VOID* LockState;                                                    //0x0
    };
    union
    {
        VOID* SessionState;                                                 //0x8
        struct
        {
            ULONG SessionId;                                                //0x8
            ULONG SessionPad;                                               //0xc
        };
    };
};
/* Used in */
// _KLOCK_ENTRY

