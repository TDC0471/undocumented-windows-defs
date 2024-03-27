#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_PPM_VETO_ENTRY.h>

//0x28 bytes (sizeof)
struct _PPM_VETO_ACCOUNTING
{
    volatile LONG VetoPresent;                                              //0x0
    struct _LIST_ENTRY VetoListHead;                                        //0x8
    ULONG PreallocatedVetoCount;                                            //0x18
    struct _PPM_VETO_ENTRY* PreallocatedVetoList;                           //0x20
};
/* Used in */
// _PPM_IDLE_STATE
// _PPM_PLATFORM_STATE

