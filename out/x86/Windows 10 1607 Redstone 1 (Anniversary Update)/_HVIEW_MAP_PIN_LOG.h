#pragma once
/* ------------------ */

#include <_HVIEW_MAP_PIN_LOG_ENTRY.h>

//0x308 bytes (sizeof)
struct _HVIEW_MAP_PIN_LOG
{
    ULONG Next;                                                             //0x0
    ULONG Size;                                                             //0x4
    struct _HVIEW_MAP_PIN_LOG_ENTRY Entries[16];                            //0x8
};
/* Used in */
// _HVIEW_MAP

