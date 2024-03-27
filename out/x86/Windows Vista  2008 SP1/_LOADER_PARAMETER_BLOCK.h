#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CONFIGURATION_COMPONENT_DATA.h>
#include <_NLS_DATA_BLOCK.h>
#include <_ARC_DISK_INFORMATION.h>
#include <_SETUP_LOADER_BLOCK.h>
#include <_LOADER_PARAMETER_EXTENSION.h>
#include <_I386_LOADER_BLOCK.h>
#include <_ALPHA_LOADER_BLOCK.h>
#include <_IA64_LOADER_BLOCK.h>
#include <_FIRMWARE_INFORMATION_LOADER_BLOCK.h>

//0x7c bytes (sizeof)
struct _LOADER_PARAMETER_BLOCK
{
    struct _LIST_ENTRY LoadOrderListHead;                                   //0x0
    struct _LIST_ENTRY MemoryDescriptorListHead;                            //0x8
    struct _LIST_ENTRY BootDriverListHead;                                  //0x10
    ULONG KernelStack;                                                      //0x18
    ULONG Prcb;                                                             //0x1c
    ULONG Process;                                                          //0x20
    ULONG Thread;                                                           //0x24
    ULONG RegistryLength;                                                   //0x28
    VOID* RegistryBase;                                                     //0x2c
    struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;                //0x30
    CHAR* ArcBootDeviceName;                                                //0x34
    CHAR* ArcHalDeviceName;                                                 //0x38
    CHAR* NtBootPathName;                                                   //0x3c
    CHAR* NtHalPathName;                                                    //0x40
    CHAR* LoadOptions;                                                      //0x44
    struct _NLS_DATA_BLOCK* NlsData;                                        //0x48
    struct _ARC_DISK_INFORMATION* ArcDiskInformation;                       //0x4c
    VOID* OemFontFile;                                                      //0x50
    struct _SETUP_LOADER_BLOCK* SetupLoaderBlock;                           //0x54
    struct _LOADER_PARAMETER_EXTENSION* Extension;                          //0x58
    union
    {
        struct _I386_LOADER_BLOCK I386;                                     //0x5c
        struct _ALPHA_LOADER_BLOCK Alpha;                                   //0x5c
        struct _IA64_LOADER_BLOCK Ia64;                                     //0x5c
    } u;                                                                    //0x5c
    struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;          //0x68
};
