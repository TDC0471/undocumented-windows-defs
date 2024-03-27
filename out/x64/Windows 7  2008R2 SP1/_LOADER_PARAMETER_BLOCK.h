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

//0xf0 bytes (sizeof)
struct _LOADER_PARAMETER_BLOCK
{
    ULONG OsMajorVersion;                                                   //0x0
    ULONG OsMinorVersion;                                                   //0x4
    ULONG Size;                                                             //0x8
    ULONG Reserved;                                                         //0xc
    struct _LIST_ENTRY LoadOrderListHead;                                   //0x10
    struct _LIST_ENTRY MemoryDescriptorListHead;                            //0x20
    struct _LIST_ENTRY BootDriverListHead;                                  //0x30
    ULONGLONG KernelStack;                                                  //0x40
    ULONGLONG Prcb;                                                         //0x48
    ULONGLONG Process;                                                      //0x50
    ULONGLONG Thread;                                                       //0x58
    ULONG RegistryLength;                                                   //0x60
    VOID* RegistryBase;                                                     //0x68
    struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;                //0x70
    CHAR* ArcBootDeviceName;                                                //0x78
    CHAR* ArcHalDeviceName;                                                 //0x80
    CHAR* NtBootPathName;                                                   //0x88
    CHAR* NtHalPathName;                                                    //0x90
    CHAR* LoadOptions;                                                      //0x98
    struct _NLS_DATA_BLOCK* NlsData;                                        //0xa0
    struct _ARC_DISK_INFORMATION* ArcDiskInformation;                       //0xa8
    VOID* OemFontFile;                                                      //0xb0
    struct _LOADER_PARAMETER_EXTENSION* Extension;                          //0xb8
    union
    {
        struct _I386_LOADER_BLOCK I386;                                     //0xc0
        struct _IA64_LOADER_BLOCK Ia64;                                     //0xc0
    } u;                                                                    //0xc0
    struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;          //0xd0
};
