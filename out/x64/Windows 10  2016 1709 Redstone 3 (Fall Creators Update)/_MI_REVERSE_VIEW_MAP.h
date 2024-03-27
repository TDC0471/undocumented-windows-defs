#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_SUBSECTION.h>
#include <_MI_SYSTEM_CACHE_VIEW_ATTRIBUTES.h>

//0x30 bytes (sizeof)
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
    union
    {
        struct _SUBSECTION* Subsection;                                     //0x18
        ULONGLONG SubsectionType:1;                                         //0x18
    };
    union
    {
        struct _MI_SYSTEM_CACHE_VIEW_ATTRIBUTES SystemCacheAttributes;      //0x20
        ULONGLONG SectionOffset;                                            //0x20
    };
};
