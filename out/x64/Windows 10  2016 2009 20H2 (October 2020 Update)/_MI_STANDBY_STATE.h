#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_MM_PAGE_ACCESS_INFO_HEADER.h>
#include <_KDPC.h>

//0x90 bytes (sizeof)
struct _MI_STANDBY_STATE
{
    ULONGLONG FirstDecayPage;                                               //0x0
    union _SLIST_HEADER PfnDecayFreeSList;                                  //0x10
    struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;                    //0x20
    struct _KDPC AllocatePfnRepurposeDpc;                                   //0x28
    union _SLIST_HEADER PageHeatListSlist;                                  //0x70
    volatile LONG PageHeatListDisableAllocation;                            //0x80
};
/* Used in */
// _MI_SYSTEM_INFORMATION

