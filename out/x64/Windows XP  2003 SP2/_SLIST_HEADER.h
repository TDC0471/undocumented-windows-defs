#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _SLIST_HEADER
{
    ULONGLONG Alignment;                                                    //0x0
    ULONGLONG Region;                                                       //0x8
};
/* Used in */
// _GENERAL_LOOKASIDE
// _HEAP_LOOKASIDE
// _KNODE
// _MI_VERIFIER_DRIVER_ENTRY
// _WMI_LOGGER_CONTEXT

