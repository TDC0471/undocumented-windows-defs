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
// _ALPC_HANDLE_TABLE
// _ALPC_PORT
// _ALPC_PROCESS_CONTEXT
// _BLOB
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH_TABLE_ENTRY
// _EJOB
// _EPROCESS
// _ETHREAD
// _EX_PUSH_LOCK_CACHE_AWARE
// _FSRTL_ADVANCED_FCB_HEADER
// _HANDLE_TABLE
// _MAPPED_FILE_SEGMENT
// _MMSUPPORT
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT
// _OBJECT_DIRECTORY
// _OBJECT_HEADER
// _OBJECT_TYPE
// _SEGMENT
// _SHARED_CACHE_MAP
// _WMI_LOGGER_CONTEXT
