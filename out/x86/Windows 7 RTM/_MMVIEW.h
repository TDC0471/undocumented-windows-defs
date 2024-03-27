#pragma once
/* ------------------ */

#include <_CONTROL_AREA.h>
#include <_LIST_ENTRY.h>

//0x18 bytes (sizeof)
struct _MMVIEW
{
    ULONG Entry;                                                            //0x0
    union
    {
        ULONG Writable:1;                                                   //0x4
        struct _CONTROL_AREA* ControlArea;                                  //0x4
    };
    struct _LIST_ENTRY ViewLinks;                                           //0x8
    VOID* SessionViewVa;                                                    //0x10
    ULONG SessionId;                                                        //0x14
};
/* Used in */
// _MMSESSION

