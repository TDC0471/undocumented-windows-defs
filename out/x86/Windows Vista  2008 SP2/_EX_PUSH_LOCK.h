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
// _ALPC_HANDLE_TABLE
// _ALPC_PORT
// _ALPC_PROCESS_CONTEXT
// _BLOB
// _CMHIVE
// _EJOB
// _EPROCESS
// _ETHREAD
// _EX_PUSH_LOCK_CACHE_AWARE
// _HANDLE_TABLE
// _MAPPED_FILE_SEGMENT
// _MMSUPPORT
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT
// _OBJECT_DIRECTORY
// _OBJECT_TYPE
// _SEGMENT
// _WMI_LOGGER_CONTEXT

