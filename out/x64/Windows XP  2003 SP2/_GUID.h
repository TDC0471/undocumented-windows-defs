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
// _DUMP_INITIALIZATION_CONTEXT
// _IO_STACK_LOCATION
// _PCI_INTERFACE
// _PLUGPLAY_EVENT_BLOCK
// _WMI_BUFFER_HEADER
// _WMI_LOGGER_CONTEXT
// _WNODE_HEADER

