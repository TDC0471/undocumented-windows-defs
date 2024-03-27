#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _EXT_ENV_SPINLOCK
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONGLONG Lock;                                                         //0x10
    UCHAR OldIrql;                                                          //0x18
};
/* Used in */
// _EXT_IOMMU_DOMAIN

