#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CONFIGURATION_COMPONENT_DATA.h>
#include <_NLS_DATA_BLOCK.h>
#include <_ARC_DISK_INFORMATION.h>
#include <_LOADER_PARAMETER_EXTENSION.h>
#include <_I386_LOADER_BLOCK.h>
#include <_IA64_LOADER_BLOCK.h>
#include <_FIRMWARE_INFORMATION_LOADER_BLOCK.h>

//0x88 bytes (sizeof)
struct _LOADER_PARAMETER_BLOCK
{
    ULONG OsMajorVersion;                                                   //0x0
    ULONG OsMinorVersion;                                                   //0x4
    ULONG Size;                                                             //0x8
    ULONG Reserved;                                                         //0xc
    struct _LIST_ENTRY LoadOrderListHead;                                   //0x10
    struct _LIST_ENTRY MemoryDescriptorListHead;                            //0x18
    struct _LIST_ENTRY BootDriverListHead;                                  //0x20
    ULONG KernelStack;                                                      //0x28
    ULONG Prcb;                                                             //0x2c
    ULONG Process;                                                          //0x30
    ULONG Thread;                                                           //0x34
    ULONG RegistryLength;                                                   //0x38
    VOID* RegistryBase;                                                     //0x3c
    struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;                //0x40
    CHAR* ArcBootDeviceName;                                                //0x44
    CHAR* ArcHalDeviceName;                                                 //0x48
    CHAR* NtBootPathName;                                                   //0x4c
    CHAR* NtHalPathName;                                                    //0x50
    CHAR* LoadOptions;                                                      //0x54
    struct _NLS_DATA_BLOCK* NlsData;                                        //0x58
    struct _ARC_DISK_INFORMATION* ArcDiskInformation;                       //0x5c
    VOID* OemFontFile;                                                      //0x60
    struct _LOADER_PARAMETER_EXTENSION* Extension;                          //0x64
    union
    {
        struct _I386_LOADER_BLOCK I386;                                     //0x68
        struct _IA64_LOADER_BLOCK Ia64;                                     //0x68
    } u;                                                                    //0x68
    struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;          //0x74
};
