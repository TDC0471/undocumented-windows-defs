#pragma once
/* ------------------ */

#include <_IOMMU_MAP_PHYSICAL_ADDRESS_TYPE.h>
#include <_MDL.h>
#include <_LARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _IOMMU_MAP_PHYSICAL_ADDRESS
{
    enum _IOMMU_MAP_PHYSICAL_ADDRESS_TYPE MapType;                          //0x0
    union
    {
        struct
        {
            struct _MDL* Mdl;                                               //0x8
        } Mdl;                                                              //0x8
        struct
        {
            union _LARGE_INTEGER Base;                                      //0x8
            ULONGLONG Size;                                                 //0x10
        } ContiguousRange;                                                  //0x8
        struct
        {
            ULONGLONG* PageFrame;                                           //0x8
            ULONGLONG NumberOfPages;                                        //0x10
        } PfnArray;                                                         //0x8
    };
};
/* Used in */
// _DMA_IOMMU_INTERFACE_V2

