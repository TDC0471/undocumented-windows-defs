#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_PPM_VETO_ENTRY.h>

//0x18 bytes (sizeof)
struct _PPM_VETO_ACCOUNTING
{
    volatile LONG VetoPresent;                                              //0x0
    struct _LIST_ENTRY VetoListHead;                                        //0x4
    UCHAR CsAccountingBlocks;                                               //0xc
    UCHAR BlocksDrips;                                                      //0xd
    ULONG PreallocatedVetoCount;                                            //0x10
    struct _PPM_VETO_ENTRY* PreallocatedVetoList;                           //0x14
};
/* Used in */
// _PPM_IDLE_STATE
// _PPM_PLATFORM_STATE
// _PPM_SELECTION_STATISTICS

