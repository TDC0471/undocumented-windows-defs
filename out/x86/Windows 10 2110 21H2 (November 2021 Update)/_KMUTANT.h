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
    union
    {
        UCHAR MutantFlags;                                                  //0x1c
        struct
        {
            UCHAR Abandoned:1;                                              //0x1c
            UCHAR Spare1:7;                                                 //0x1c
            UCHAR Abandoned2:1;                                             //0x1c
            UCHAR AbEnabled:1;                                              //0x1c
            UCHAR Spare2:6;                                                 //0x1c
        };
    };
    UCHAR ApcDisable;                                                       //0x1d
};
/* Used in */
// _ETW_SILODRIVERSTATE
// _KENLISTMENT
// _KRESOURCEMANAGER
// _KTM
// _KTMOBJECT_NAMESPACE
// _KTRANSACTION
// _PNP_DEVICE_EVENT_LIST
// _WMI_LOGGER_CONTEXT

