#pragma once
/* ------------------ */

#include <_MMVIEW_CONTROL_AREA.h>
#include <_LIST_ENTRY.h>

//0x28 bytes (sizeof)
struct _MMVIEW
{
    ULONGLONG PteOffset;                                                    //0x0
    ULONG Entry;                                                            //0x8
    union _MMVIEW_CONTROL_AREA u1;                                          //0xc
    struct _LIST_ENTRY ViewLinks;                                           //0x10
    VOID* SessionViewVa;                                                    //0x18
    ULONG SessionId;                                                        //0x1c
    ULONG SessionIdForGlobalSubsections;                                    //0x20
};
/* Used in */
// _MMSESSION

