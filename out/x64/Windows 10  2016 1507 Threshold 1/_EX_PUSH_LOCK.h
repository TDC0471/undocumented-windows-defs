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
// _EX_PUSH_LOCK_AUTO_EXPAND
// _FSRTL_ADVANCED_FCB_HEADER
// _HANDLE_TABLE
// _HANDLE_TABLE_FREE_LIST
// _HVIEW_MAP
// _MAPPED_FILE_SEGMENT
// _MI_NODE_INFORMATION
// _MI_PARTITION_CORE
// _MI_PARTITION_MODWRITES
// _MI_PARTITION_STATE
// _MI_SECTION_STATE
// _MI_SESSION_STATE
// _MI_SYSTEM_IMAGE_STATE
// _MI_SYSTEM_PTE_TYPE
// _MMSESSION
// _MMVAD_SHORT
// _MM_PAGED_POOL_INFO
// _MM_SESSION_SPACE
// _OBJECT_DIRECTORY
// _OBJECT_HEADER
// _OBJECT_TYPE
// _OBP_SILODRIVERSTATE
// _OB_HANDLE_REVOCATION_BLOCK
// _POP_RW_LOCK
// _RTL_ATOM_TABLE
// _SEGMENT
// _SEP_LOGON_SESSION_REFERENCES
// _SEP_LOWBOX_HANDLES_TABLE
// _SEP_LOWBOX_NUMBER_MAPPING
// _SHARED_CACHE_MAP
// _WMI_LOGGER_CONTEXT

