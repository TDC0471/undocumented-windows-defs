#pragma once
/* ------------------ */

#include <_DISPATCHER_HEADER.h>
#include <_LIST_ENTRY.h>
#include <_KTHREAD.h>

//0x38 bytes (sizeof)
struct _KMUTANT
{
    struct _DISPATCHER_HEADER Header;                                       //0x0
    struct _LIST_ENTRY MutantListEntry;                                     //0x18
    struct _KTHREAD* OwnerThread;                                           //0x28
    UCHAR Abandoned;                                                        //0x30
    UCHAR ApcDisable;                                                       //0x31
};
/* Used in */
// _KENLISTMENT
// _KRESOURCEMANAGER
// _KTM
// _KTMOBJECT_NAMESPACE
// _KTRANSACTION
// _PNP_DEVICE_EVENT_LIST
// _WMI_LOGGER_CONTEXT

