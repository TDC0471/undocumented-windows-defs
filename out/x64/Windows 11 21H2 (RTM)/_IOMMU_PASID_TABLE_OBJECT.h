#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x40 bytes (sizeof)
struct _IOMMU_PASID_TABLE_OBJECT
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG Domain;                                                           //0x10
    struct _LIST_ENTRY DeviceListHead;                                      //0x18
    VOID* Table;                                                            //0x28
    ULONG PasidCount;                                                       //0x30
    VOID* OldTable;                                                         //0x38
};
/* Used in */
// _EXT_IOMMU_FUNCTION_TABLE_EXTENDED

