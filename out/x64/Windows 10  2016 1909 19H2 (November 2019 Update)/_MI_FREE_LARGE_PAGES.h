#pragma once
/* ------------------ */

#include <_MI_FREE_LARGE_PAGE_LIST.h>

//0x110 bytes (sizeof)
struct _MI_FREE_LARGE_PAGES
{
    ULONGLONG LargePageFreeCount[2];                                        //0x0
    ULONGLONG LargePagesCount[2][2][4];                                     //0x10
    struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[2][2][4];             //0x90
};
/* Used in */
// _MI_NODE_INFORMATION

