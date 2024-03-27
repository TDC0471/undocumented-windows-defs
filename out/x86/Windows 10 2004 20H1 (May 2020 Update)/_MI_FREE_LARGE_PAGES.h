#pragma once
/* ------------------ */

#include <_MI_FREE_LARGE_PAGE_LIST.h>

//0x38 bytes (sizeof)
struct _MI_FREE_LARGE_PAGES
{
    ULONG LargePageFreeCount[2];                                            //0x0
    ULONG LargePageFreeCountHiLow[2][2];                                    //0x8
    ULONG LargePagesCount[2][2][1];                                         //0x18
    struct _MI_FREE_LARGE_PAGE_LIST* LargePageEntries[2][2][1];             //0x28
};
/* Used in */
// _MI_NODE_INFORMATION

