#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _UNICODE_STRING
{
    USHORT Length;                                                          //0x0
    USHORT MaximumLength;                                                   //0x2
    USHORT* Buffer;                                                         //0x8
};
/* Used in */
// _ACCESS_STATE
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CURDIR
// _DEVICE_NODE
// _DRIVER_EXTENSION
// _DRIVER_OBJECT
// _FILE_OBJECT
// _IO_STACK_LOCATION
// _KRESOURCEMANAGER
// _KTM
// _KTRANSACTION
// _LDR_DATA_TABLE_ENTRY
// _MI_VERIFIER_DRIVER_ENTRY
// _MMPAGING_FILE
// _MM_DRIVER_VERIFIER_DATA
// _OBJECT_ATTRIBUTES
// _OBJECT_HEADER_NAME_INFO
// _OBJECT_NAME_INFORMATION
// _OBJECT_SYMBOLIC_LINK
// _OBJECT_TYPE
// _OBJECT_TYPE_INITIALIZER
// _PEB
// _PNP_DEVICE_EVENT_ENTRY
// _RTL_USER_PROCESS_PARAMETERS
// _SECURITY_TOKEN_PROXY_DATA
// _SEP_LOGON_SESSION_REFERENCES
// _TEB
// _WMI_LOGGER_CONTEXT

