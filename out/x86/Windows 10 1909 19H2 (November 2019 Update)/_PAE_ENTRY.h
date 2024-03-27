#pragma once
/* ------------------ */

#include <_MMPTE.h>
#include <_PAE_PAGEINFO.h>
#include <_SINGLE_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _PAE_ENTRY
{
    union
    {
        struct _MMPTE PteEntry[4];                                          //0x0
        struct _PAE_PAGEINFO PaeEntry;                                      //0x0
        struct _SINGLE_LIST_ENTRY NextPae;                                  //0x0
    };
};
/* Used in */
// _MI_PROCESS_STATE

