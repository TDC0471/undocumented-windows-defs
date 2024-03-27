#pragma once
/* ------------------ */

#include <_IOMMU_INTERFACE_STATE_CHANGE_FIELDS.h>

//0x8 bytes (sizeof)
struct _IOMMU_INTERFACE_STATE_CHANGE
{
    union _IOMMU_INTERFACE_STATE_CHANGE_FIELDS PresentFields;               //0x0
    ULONG AvailableDomainTypes;                                             //0x4
};
/* Used in */
// _IOMMU_INTERFACE_CALLBACK_RECORD

