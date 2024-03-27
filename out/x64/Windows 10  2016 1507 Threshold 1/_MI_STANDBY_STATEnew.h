#pragma once
/* ------------------ */

#include <_SLIST_HEADER.h>
#include <_MM_PAGE_ACCESS_INFO_HEADER.h>
#include <_KDPC.h>

//0xc0 bytes (sizeof)
struct _MI_STANDBY_STATE
{
    volatile ULONGLONG TransitionSharedPages;                               //0x0
    ULONGLONG TransitionSharedPagesPeak[3];                                 //0x8
    ULONGLONG FirstDecayPage;                                               //0x20
    union _SLIST_HEADER PfnDecayFreeSList;                                  //0x30
    struct _MM_PAGE_ACCESS_INFO_HEADER* PfnRepurposeLog;                    //0x40
    struct _KDPC AllocatePfnRepurposeDpc;                                   //0x48
};
/* Used in */
// _MI_SYSTEM_INFORMATION

