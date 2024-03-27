#pragma once
/* ------------------ */

#include <_PPM_SELECTION_MENU_ENTRY.h>

//0x10 bytes (sizeof)
struct _PPM_SELECTION_MENU
{
    ULONG Count;                                                            //0x0
    struct _PPM_SELECTION_MENU_ENTRY* Entries;                              //0x8
};
/* Used in */
// _PPM_IDLE_STATES
// _PPM_SELECTION_DEPENDENCY

