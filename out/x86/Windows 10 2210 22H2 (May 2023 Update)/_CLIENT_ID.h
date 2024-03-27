#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _CLIENT_ID
{
    VOID* UniqueProcess;                                                    //0x0
    VOID* UniqueThread;                                                     //0x4
};
/* Used in */
// _ETHREAD
// _HANDLE_TRACE_DB_ENTRY
// _LPCP_PORT_OBJECT
// _PORT_MESSAGE
// _TEB

