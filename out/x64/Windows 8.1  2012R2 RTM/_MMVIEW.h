#pragma once
/* ------------------ */

#include <_MMVIEW_CONTROL_AREA.h>
#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _MMVIEW
{
    ULONGLONG PteOffset;                                                    //0x0
    ULONGLONG Entry;                                                        //0x8
    union _MMVIEW_CONTROL_AREA u1;                                          //0x10
    struct _LIST_ENTRY ViewLinks;                                           //0x18
    VOID* SessionViewVa;                                                    //0x28
    ULONG SessionId;                                                        //0x30
    ULONG SessionIdForGlobalSubsections;                                    //0x34
};
/* Used in */
// _MMSESSION

