#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>

//0x8 bytes (sizeof)
struct _SINGLE_LIST_ENTRY
{
    struct _SINGLE_LIST_ENTRY* Next;                                        //0x0
};
/* Used in */
// _ALPC_COMPLETION_PACKET_LOOKASIDE
// _ALPC_COMPLETION_PACKET_LOOKASIDE_ENTRY
// _GENERAL_LOOKASIDE
// _GENERAL_LOOKASIDE_POOL
// _HEAP_SUBSEGMENT
// _HEAP_USERDATA_HEADER
// _KPRCB
// _KPROCESS
// _KTHREAD
// _LPCP_MESSAGE
// _MMPAGING_FILE_FREE_ENTRY
// _MMPFN
// _MM_PAGE_ACCESS_INFO_HEADER
// _PI_BUS_EXTENSION
// _SINGLE_LIST_ENTRY
// _WMI_BUFFER_HEADER

