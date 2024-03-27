#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CONFIGURATION_COMPONENT_DATA.h>
#include <_NLS_DATA_BLOCK.h>
#include <_ARC_DISK_INFORMATION.h>
#include <_LOADER_PARAMETER_EXTENSION.h>
#include <_I386_LOADER_BLOCK.h>
#include <_ARM_LOADER_BLOCK.h>
#include <_FIRMWARE_INFORMATION_LOADER_BLOCK.h>

//0xc8 bytes (sizeof)
struct _LOADER_PARAMETER_BLOCK
{
    ULONG OsMajorVersion;                                                   //0x0
    ULONG OsMinorVersion;                                                   //0x4
    ULONG Size;                                                             //0x8
    ULONG OsLoaderSecurityVersion;                                          //0xc
    struct _LIST_ENTRY LoadOrderListHead;                                   //0x10
    struct _LIST_ENTRY MemoryDescriptorListHead;                            //0x18
    struct _LIST_ENTRY BootDriverListHead;                                  //0x20
    struct _LIST_ENTRY EarlyLaunchListHead;                                 //0x28
    struct _LIST_ENTRY CoreDriverListHead;                                  //0x30
    struct _LIST_ENTRY CoreExtensionsDriverListHead;                        //0x38
    struct _LIST_ENTRY TpmCoreDriverListHead;                               //0x40
    ULONG KernelStack;                                                      //0x48
    ULONG Prcb;                                                             //0x4c
    ULONG Process;                                                          //0x50
    ULONG Thread;                                                           //0x54
    ULONG KernelStackSize;                                                  //0x58
    ULONG RegistryLength;                                                   //0x5c
    VOID* RegistryBase;                                                     //0x60
    struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;                //0x64
    CHAR* ArcBootDeviceName;                                                //0x68
    CHAR* ArcHalDeviceName;                                                 //0x6c
    CHAR* NtBootPathName;                                                   //0x70
    CHAR* NtHalPathName;                                                    //0x74
    CHAR* LoadOptions;                                                      //0x78
    struct _NLS_DATA_BLOCK* NlsData;                                        //0x7c
    struct _ARC_DISK_INFORMATION* ArcDiskInformation;                       //0x80
    struct _LOADER_PARAMETER_EXTENSION* Extension;                          //0x84
    union
    {
        struct _I386_LOADER_BLOCK I386;                                     //0x88
        struct _ARM_LOADER_BLOCK Arm;                                       //0x88
    } u;                                                                    //0x88
    struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;          //0x94
    CHAR* OsBootstatPathName;                                               //0xbc
    CHAR* ArcOSDataDeviceName;                                              //0xc0
    CHAR* ArcWindowsSysPartName;                                            //0xc4
};
/* Used in */
// HAL_PRIVATE_DISPATCH

