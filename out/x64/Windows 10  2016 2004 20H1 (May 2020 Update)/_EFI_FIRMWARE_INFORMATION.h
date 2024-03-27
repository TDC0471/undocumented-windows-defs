#pragma once
/* ------------------ */

#include <_VIRTUAL_EFI_RUNTIME_SERVICES.h>
#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _EFI_FIRMWARE_INFORMATION
{
    ULONG FirmwareVersion;                                                  //0x0
    struct _VIRTUAL_EFI_RUNTIME_SERVICES* VirtualEfiRuntimeServices;        //0x8
    LONG SetVirtualAddressMapStatus;                                        //0x10
    ULONG MissedMappingsCount;                                              //0x14
    struct _LIST_ENTRY FirmwareResourceList;                                //0x18
    VOID* EfiMemoryMap;                                                     //0x28
    ULONG EfiMemoryMapSize;                                                 //0x30
    ULONG EfiMemoryMapDescriptorSize;                                       //0x34
};
/* Used in */
// _FIRMWARE_INFORMATION_LOADER_BLOCK

