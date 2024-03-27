#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KTHREAD.h>

//0x20 bytes (sizeof)
struct _KMUTANT
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY MutantListEntry;                                     //0x10
    struct _KTHREAD* OwnerThread;                                           //0x18
    UCHAR Abandoned;                                                        //0x1c
    UCHAR ApcDisable;                                                       //0x1d
};
/* Used in */
// _PNP_DEVICE_EVENT_LIST
// _WMI_LOGGER_CONTEXT

