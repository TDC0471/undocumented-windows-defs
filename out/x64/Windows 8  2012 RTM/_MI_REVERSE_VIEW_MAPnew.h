#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_SUBSECTION.h>

//0x28 bytes (sizeof)
struct _MI_REVERSE_VIEW_MAP
{
    struct _LIST_ENTRY ViewLinks;                                           //0x0
    union
    {
        VOID* SystemCacheVa;                                                //0x10
        VOID* SessionViewVa;                                                //0x10
        struct _EPROCESS* VadsProcess;                                      //0x10
        ULONGLONG Type:2;                                                   //0x10
    };
    struct _SUBSECTION* Subsection;                                         //0x18
    ULONGLONG SectionOffset;                                                //0x20
};
