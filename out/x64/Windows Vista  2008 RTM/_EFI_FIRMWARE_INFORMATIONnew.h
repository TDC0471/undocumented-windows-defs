#pragma once
/* ------------------ */

#include <_VIRTUAL_EFI_RUNTIME_SERVICES.h>

//0x18 bytes (sizeof)
struct _EFI_FIRMWARE_INFORMATION
{
    ULONG FirmwareVersion;                                                  //0x0
    struct _VIRTUAL_EFI_RUNTIME_SERVICES* VirtualEfiRuntimeServices;        //0x8
    LONG SetVirtualAddressMapStatus;                                        //0x10
    ULONG MissedMappingsCount;                                              //0x14
};
/* Used in */
// _FIRMWARE_INFORMATION_LOADER_BLOCK
