#pragma once
/* ------------------ */

#include <_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE.h>
#include <_LARGE_INTEGER.h>
#include <_DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE.h>

//0x28 bytes (sizeof)
struct _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION
{
    enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_TYPE ConfigType;         //0x0
    union
    {
        struct
        {
            union _LARGE_INTEGER MinimumAddress;                            //0x8
            union _LARGE_INTEGER MaximumAddress;                            //0x10
        } LogicalAddressLimits;                                             //0x8
        struct
        {
            ULONGLONG Offset;                                               //0x8
            ULONG Length;                                                   //0x10
        } SubSection;                                                       //0x8
        enum _DMA_COMMON_BUFFER_EXTENDED_CONFIGURATION_ACCESS_TYPE HardwareAccessType; //0x8
        ULONGLONG Reserved[4];                                              //0x8
    };
};
/* Used in */
// _DMA_OPERATIONS

