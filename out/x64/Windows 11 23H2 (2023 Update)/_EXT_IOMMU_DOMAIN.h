#pragma once
/* ------------------ */

#include <_EXT_IOMMU_DOMAIN_TYPE.h>
#include <_EXT_IOMMU_TRANSLATION_TYPE.h>
#include <_EXT_IOMMU_DOMAIN_SETTINGS.h>
#include <_LIST_ENTRY.h>
#include <_EXT_ENV_SPINLOCK.h>
#include <_EXT_IOMMU_DOMAIN.h>

//0x70 bytes (sizeof)
struct _EXT_IOMMU_DOMAIN
{
    enum _EXT_IOMMU_DOMAIN_TYPE DomainType;                                 //0x0
    enum _EXT_IOMMU_TRANSLATION_TYPE TranslationType;                       //0x4
    struct
    {
        UCHAR DefaultDomain:1;                                              //0x8
        UCHAR FirmwareDomain:1;                                             //0x8
    } Flags;                                                                //0x8
    USHORT FirmwareDomainId;                                                //0xa
    struct _EXT_IOMMU_DOMAIN_SETTINGS Settings;                             //0x10
    ULONG ContextId;                                                        //0x30
    ULONG DeviceCount;                                                      //0x34
    struct _LIST_ENTRY Devices;                                             //0x38
    struct _EXT_ENV_SPINLOCK Lock;                                          //0x48
    struct _EXT_IOMMU_DOMAIN* S2Domain;                                     //0x68
};
/* Used in */
// _EXT_IOMMU_DEVICE
// _EXT_IOMMU_DOMAIN
// _EXT_IOMMU_FUNCTION_TABLE

