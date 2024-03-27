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
// _AGGREGATED_PAYLOAD_FILTER
// _AUX_ACCESS_DATA
// _CM_KEY_BODY
// _CM_TRANS
// _DEVICE_NODE
// _DUMP_INITIALIZATION_CONTEXT
// _ETHREAD
// _ETWP_NOTIFICATION_HEADER
// _ETW_GUID_ENTRY
// _ETW_WMITRACE_WORK
// _EVENT_HEADER
// _HBASE_BLOCK
// _IOP_IRP_EXTENSION
// _IO_STACK_LOCATION
// _IO_WORKITEM
// _KENLISTMENT
// _KRESOURCEMANAGER
// _KTM
// _KTRANSACTION
// _NONOPAQUE_OPLOCK
// _PLUGPLAY_EVENT_BLOCK
// _POP_FX_COMPONENT
// _POP_FX_DRIVER_CALLBACKS
// _RSDS
// _TEB
// _TEB32
// _TEB64
// _TRACE_LOGFILE_HEADER
// _WHEA_ERROR_PACKET_V2
// _WHEA_ERROR_RECORD_HEADER
// _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR
// _WMI_LOGGER_CONTEXT
// tagSWITCH_CONTEXT_DATA

