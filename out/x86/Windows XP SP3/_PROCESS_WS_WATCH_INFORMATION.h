#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _PROCESS_WS_WATCH_INFORMATION
{
    VOID* FaultingPc;                                                       //0x0
    VOID* FaultingVa;                                                       //0x4
};
/* Used in */
// _PAGEFAULT_HISTORY

