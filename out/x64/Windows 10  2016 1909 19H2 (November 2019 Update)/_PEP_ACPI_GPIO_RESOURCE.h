#pragma once
/* ------------------ */

#include <_PEP_ACPI_RESOURCE_TYPE.h>
#include <_PEP_ACPI_RESOURCE_FLAGS.h>
#include <_KINTERRUPT_MODE.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_GPIO_PIN_CONFIG_TYPE.h>
#include <_GPIO_PIN_IORESTRICTION_TYPE.h>
#include <_UNICODE_STRING.h>

//0x48 bytes (sizeof)
struct _PEP_ACPI_GPIO_RESOURCE
{
    enum _PEP_ACPI_RESOURCE_TYPE Type;                                      //0x0
    union _PEP_ACPI_RESOURCE_FLAGS Flags;                                   //0x4
    enum _KINTERRUPT_MODE InterruptType;                                    //0x8
    enum _KINTERRUPT_POLARITY InterruptPolarity;                            //0xc
    enum _GPIO_PIN_CONFIG_TYPE PinConfig;                                   //0x10
    enum _GPIO_PIN_IORESTRICTION_TYPE IoRestrictionType;                    //0x14
    USHORT DriveStrength;                                                   //0x18
    USHORT DebounceTimeout;                                                 //0x1a
    WCHAR* PinTable;                                                        //0x20
    USHORT PinCount;                                                        //0x28
    UCHAR ResourceSourceIndex;                                              //0x2a
    struct _UNICODE_STRING* ResourceSourceName;                             //0x30
    UCHAR* VendorData;                                                      //0x38
    USHORT VendorDataLength;                                                //0x40
};
/* Used in */
// _PEP_ACPI_RESOURCE

