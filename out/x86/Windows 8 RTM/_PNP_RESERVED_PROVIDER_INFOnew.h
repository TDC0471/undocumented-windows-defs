#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>

//0x1c bytes (sizeof)
struct _PNP_RESERVED_PROVIDER_INFO
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _LIST_ENTRY DependentList;                                       //0x8
    struct _UNICODE_STRING ReservationId;                                   //0x10
    volatile LONG ReferenceCount;                                           //0x18
};
/* Used in */
// _PNP_PROVIDER_INFO

