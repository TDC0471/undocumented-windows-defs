#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _EX_PUSH_LOCK
{
    union
    {
        struct
        {
            ULONGLONG Locked:1;                                             //0x0
            ULONGLONG Waiting:1;                                            //0x0
            ULONGLONG Waking:1;                                             //0x0
            ULONGLONG MultipleShared:1;                                     //0x0
            ULONGLONG Shared:60;                                            //0x0
        };
        ULONGLONG Value;                                                    //0x0
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

