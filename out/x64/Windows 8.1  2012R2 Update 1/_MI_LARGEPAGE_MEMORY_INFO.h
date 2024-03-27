#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_COLORED_PAGE_INFO.h>

//0x28 bytes (sizeof)
struct _MI_LARGEPAGE_MEMORY_INFO
{
    struct _LIST_ENTRY ListHead;                                            //0x0
    struct _COLORED_PAGE_INFO* ColoredPageInfoBase;                         //0x10
    ULONG PagesNeedZeroing;                                                 //0x18
    ULONGLONG ActualImageViewSize;                                          //0x20
};
/* Used in */
// _MI_VAD_EVENT_BLOCK

