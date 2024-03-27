#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_SUBSECTION.h>

//0x18 bytes (sizeof)
struct _MI_REVERSE_VIEW_MAP
{
    struct _LIST_ENTRY ViewLinks;                                           //0x0
    union
    {
        VOID* SystemCacheVa;                                                //0x8
        VOID* SessionViewVa;                                                //0x8
        struct _EPROCESS* VadsProcess;                                      //0x8
        ULONG Type:2;                                                       //0x8
    };
    struct _SUBSECTION* Subsection;                                         //0xc
    ULONGLONG SectionOffset;                                                //0x10
};
