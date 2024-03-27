#pragma once
/* ------------------ */

#include <_MI_SECTION_CREATION_EVENT.h>
#include <_KEVENT.h>

//0x20 bytes (sizeof)
struct _MI_SECTION_CREATION_EVENT
{
    struct _MI_SECTION_CREATION_EVENT* Next;                                //0x0
    struct _KEVENT Event;                                                   //0x8
};
/* Used in */
// _CONTROL_AREA
// _MI_SECTION_CREATION_EVENT

