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
// _ALPC_COMPLETION_LIST
// _ALPC_HANDLE_TABLE
// _ALPC_PORT
// _ALPC_PROCESS_CONTEXT
// _BLOB
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH_TABLE_ENTRY
// _CONTROL_AREA
// _EJOB
// _EPROCESS
// _ETHREAD
// _EX_PUSH_LOCK_CACHE_AWARE
// _FSRTL_ADVANCED_FCB_HEADER
// _HANDLE_TABLE
// _HANDLE_TABLE_FREE_LIST
// _MAPPED_FILE_SEGMENT
// _MMSUPPORT
// _MMVAD_SHORT
// _OBJECT_DIRECTORY
// _OBJECT_HEADER
// _OBJECT_TYPE
// _POP_RW_LOCK
// _RTL_ATOM_TABLE
// _SEGMENT
// _SEP_LOWBOX_HANDLES_TABLE
// _SEP_LOWBOX_NUMBER_MAPPING
// _SHARED_CACHE_MAP
// _WMI_LOGGER_CONTEXT

