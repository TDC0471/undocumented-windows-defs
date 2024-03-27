#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _EX_PUSH_LOCK
{
    union
    {
        struct
        {
            ULONG Waiting:1;                                                //0x0
            ULONG Exclusive:1;                                              //0x0
            ULONG Shared:30;                                                //0x0
        };
        ULONG Value;                                                        //0x0
        VOID* Ptr;                                                          //0x0
    };
};
/* Used in */
// _EPROCESS
// _ETHREAD
// _EX_PUSH_LOCK_CACHE_AWARE
// _HANDLE_TABLE
// _OBJECT_DIRECTORY
// _SHARED_CACHE_MAP

