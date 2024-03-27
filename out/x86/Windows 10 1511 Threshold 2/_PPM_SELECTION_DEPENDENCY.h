#pragma once
/* ------------------ */

#include <_PPM_SELECTION_MENU.h>

//0xc bytes (sizeof)
struct _PPM_SELECTION_DEPENDENCY
{
    ULONG Processor;                                                        //0x0
    struct _PPM_SELECTION_MENU Menu;                                        //0x4
};
/* Used in */
// _PPM_PLATFORM_STATE
// _PPM_SELECTION_MENU_ENTRY

