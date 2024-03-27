#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_MM_PAGE_ACCESS_INFO_HEADER.h>
#include <_KDPC.h>

//0x80 bytes (sizeof)
struct _MI_STANDBY_STATE
{
    volatile ULONG TransitionSharedPages;                                   //0x0
    ULONG TransitionSharedPagesPeak[3];                                     //0x4
    ULONG FirstDecayPage;                                                   //0x10
    union _SLIST_HEADER PfnDecayFreeSList;                                  //0x18
    struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;                    //0x20
    struct _KDPC AllocatePfnRepurposeDpc;                                   //0x24
};
/* Used in */
// _MI_SYSTEM_INFORMATION

