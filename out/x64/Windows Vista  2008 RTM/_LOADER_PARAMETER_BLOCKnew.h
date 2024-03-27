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

//0xe8 bytes (sizeof)
struct _LOADER_PARAMETER_BLOCK
{
    struct _LIST_ENTRY LoadOrderListHead;                                   //0x0
    struct _LIST_ENTRY MemoryDescriptorListHead;                            //0x10
    struct _LIST_ENTRY BootDriverListHead;                                  //0x20
    ULONGLONG KernelStack;                                                  //0x30
    ULONGLONG Prcb;                                                         //0x38
    ULONGLONG Process;                                                      //0x40
    ULONGLONG Thread;                                                       //0x48
    ULONG RegistryLength;                                                   //0x50
    VOID* RegistryBase;                                                     //0x58
    struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;                //0x60
    CHAR* ArcBootDeviceName;                                                //0x68
    CHAR* ArcHalDeviceName;                                                 //0x70
    CHAR* NtBootPathName;                                                   //0x78
    CHAR* NtHalPathName;                                                    //0x80
    CHAR* LoadOptions;                                                      //0x88
    struct _NLS_DATA_BLOCK* NlsData;                                        //0x90
    struct _ARC_DISK_INFORMATION* ArcDiskInformation;                       //0x98
    VOID* OemFontFile;                                                      //0xa0
    struct _SETUP_LOADER_BLOCK* SetupLoaderBlock;                           //0xa8
    struct _LOADER_PARAMETER_EXTENSION* Extension;                          //0xb0
    union
    {
        struct _I386_LOADER_BLOCK I386;                                     //0xb8
        struct _ALPHA_LOADER_BLOCK Alpha;                                   //0xb8
        struct _IA64_LOADER_BLOCK Ia64;                                     //0xb8
    } u;                                                                    //0xb8
    struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;          //0xc8
};
