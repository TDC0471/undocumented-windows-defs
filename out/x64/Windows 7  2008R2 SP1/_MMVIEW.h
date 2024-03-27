#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_LIST_ENTRY.h>

//0x30 bytes (sizeof)
struct _MMVIEW
{
    ULONGLONG Entry;                                                        //0x0
    union
    {
        ULONGLONG Writable:1;                                               //0x8
        struct _CONTROL_AREA* ControlArea;                                  //0x8
    };
    struct _LIST_ENTRY ViewLinks;                                           //0x10
    VOID* SessionViewVa;                                                    //0x20
    ULONG SessionId;                                                        //0x28
};
/* Used in */
// _MMSESSION

