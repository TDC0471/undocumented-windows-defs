#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _GUID
{
    ULONG Data1;                                                            //0x0
    USHORT Data2;                                                           //0x4
    USHORT Data3;                                                           //0x6
    UCHAR Data4[8];                                                         //0x8
};
/* Used in */
// _CM_KEY_BODY
// _CM_TRANS
// _DUMP_INITIALIZATION_CONTEXT
// _ETW_GUID_ENTRY
// _HBASE_BLOCK
// _HEADLESS_LOADER_BLOCK
// _IO_STACK_LOCATION
// _KENLISTMENT
// _KRESOURCEMANAGER
// _KTM
// _KTRANSACTION
// _LOADER_PARAMETER_EXTENSION
// _PLUGPLAY_EVENT_BLOCK
// _TEB
// _WHEA_ERROR_RECORD_HEADER
// _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
// _WMI_LOGGER_CONTEXT
// _WNODE_HEADER

