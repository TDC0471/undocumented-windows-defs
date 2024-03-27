#pragma once
/* ------------------ */

#include <_EFI_FIRMWARE_INFORMATION.h>
#include <_PCAT_FIRMWARE_INFORMATION.h>

//0x14 bytes (sizeof)
struct _FIRMWARE_INFORMATION_LOADER_BLOCK
{
    ULONG FirmwareTypeEfi:1;                                                //0x0
    ULONG Reserved:31;                                                      //0x0
    union
    {
        struct _EFI_FIRMWARE_INFORMATION EfiInformation;                    //0x4
        struct _PCAT_FIRMWARE_INFORMATION PcatInformation;                  //0x4
    } u;                                                                    //0x4
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

