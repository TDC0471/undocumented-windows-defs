#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _EX_PUSH_LOCK
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
// _CMHIVE
// _EPROCESS
// _ETHREAD
// _EX_PUSH_LOCK_CACHE_AWARE
// _HANDLE_TABLE
// _MMSUPPORT
// _OBJECT_DIRECTORY
// _SHARED_CACHE_MAP

