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
#include <_RTL_RB_TREE.h>

//0x170 bytes (sizeof)
struct _LOADER_PARAMETER_BLOCK
{
    ULONG OsMajorVersion;                                                   //0x0
    ULONG OsMinorVersion;                                                   //0x4
    ULONG Size;                                                             //0x8
    ULONG OsLoaderSecurityVersion;                                          //0xc
    struct _LIST_ENTRY LoadOrderListHead;                                   //0x10
    struct _LIST_ENTRY MemoryDescriptorListHead;                            //0x20
    struct _LIST_ENTRY BootDriverListHead;                                  //0x30
    struct _LIST_ENTRY EarlyLaunchListHead;                                 //0x40
    struct _LIST_ENTRY CoreDriverListHead;                                  //0x50
    struct _LIST_ENTRY CoreExtensionsDriverListHead;                        //0x60
    struct _LIST_ENTRY TpmCoreDriverListHead;                               //0x70
    ULONGLONG KernelStack;                                                  //0x80
    ULONGLONG Prcb;                                                         //0x88
    ULONGLONG Process;                                                      //0x90
    ULONGLONG Thread;                                                       //0x98
    ULONG KernelStackSize;                                                  //0xa0
    ULONG RegistryLength;                                                   //0xa4
    VOID* RegistryBase;                                                     //0xa8
    struct _CONFIGURATION_COMPONENT_DATA* ConfigurationRoot;                //0xb0
    CHAR* ArcBootDeviceName;                                                //0xb8
    CHAR* ArcHalDeviceName;                                                 //0xc0
    CHAR* NtBootPathName;                                                   //0xc8
    CHAR* NtHalPathName;                                                    //0xd0
    CHAR* LoadOptions;                                                      //0xd8
    struct _NLS_DATA_BLOCK* NlsData;                                        //0xe0
    struct _ARC_DISK_INFORMATION* ArcDiskInformation;                       //0xe8
    struct _LOADER_PARAMETER_EXTENSION* Extension;                          //0xf0
    union
    {
        struct _I386_LOADER_BLOCK I386;                                     //0xf8
        struct _ARM_LOADER_BLOCK Arm;                                       //0xf8
    } u;                                                                    //0xf8
    struct _FIRMWARE_INFORMATION_LOADER_BLOCK FirmwareInformation;          //0x108
    CHAR* OsBootstatPathName;                                               //0x148
    CHAR* ArcOSDataDeviceName;                                              //0x150
    CHAR* ArcWindowsSysPartName;                                            //0x158
    struct _RTL_RB_TREE MemoryDescriptorTree;                               //0x160
};
/* Used in */
// HAL_PRIVATE_DISPATCH

