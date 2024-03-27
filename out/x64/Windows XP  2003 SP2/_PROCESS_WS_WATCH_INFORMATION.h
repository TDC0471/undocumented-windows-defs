#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PROCESS_WS_WATCH_INFORMATION
{
    VOID* FaultingPc;                                                       //0x0
    VOID* FaultingVa;                                                       //0x8
};
/* Used in */
// _PAGEFAULT_HISTORY

