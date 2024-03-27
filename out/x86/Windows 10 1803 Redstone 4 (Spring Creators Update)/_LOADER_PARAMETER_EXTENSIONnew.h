#pragma once
/* ------------------ */

#include <_PROFILE_PARAMETER_BLOCK.h>
#include <_HEADLESS_LOADER_BLOCK.h>
#include <_SMBIOS3_TABLE_HEADER.h>
#include <_NETWORK_LOADER_BLOCK.h>
#include <_LIST_ENTRY.h>
#include <_LOADER_PERFORMANCE_DATA.h>
#include <_GUID.h>
#include <_BOOT_ENTROPY_LDR_RESULT.h>
#include <_LOADER_PARAMETER_HYPERVISOR_EXTENSION.h>
#include <_LARGE_INTEGER.h>
#include <_LOADER_BUGCHECK_PARAMETERS.h>
#include <_UNICODE_STRING.h>
#include <_DEBUG_DEVICE_DESCRIPTOR.h>
#include <_OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2.h>
#include <_LOADER_PARAMETER_CI_EXTENSION.h>
#include <_LOADER_HIVE_RECOVERY_INFO.h>
#include <_LOADER_RESET_REASON.h>

//0xb68 bytes (sizeof)
struct _LOADER_PARAMETER_EXTENSION
{
    ULONG Size;                                                             //0x0
    struct _PROFILE_PARAMETER_BLOCK Profile;                                //0x4
    VOID* EmInfFileImage;                                                   //0x14
    ULONG EmInfFileSize;                                                    //0x18
    VOID* TriageDumpBlock;                                                  //0x1c
    struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;                     //0x20
    struct _SMBIOS3_TABLE_HEADER* SMBiosEPSHeader;                          //0x24
    VOID* DrvDBImage;                                                       //0x28
    ULONG DrvDBSize;                                                        //0x2c
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x30
    UCHAR* HalpIRQLToTPR;                                                   //0x34
    UCHAR* HalpVectorToIRQL;                                                //0x38
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x3c
    VOID* AcpiTable;                                                        //0x44
    ULONG AcpiTableSize;                                                    //0x48
    ULONG LastBootSucceeded:1;                                              //0x4c
    ULONG LastBootShutdown:1;                                               //0x4c
    ULONG IoPortAccessSupported:1;                                          //0x4c
    ULONG BootDebuggerActive:1;                                             //0x4c
    ULONG StrongCodeGuarantees:1;                                           //0x4c
    ULONG HardStrongCodeGuarantees:1;                                       //0x4c
    ULONG SidSharingDisabled:1;                                             //0x4c
    ULONG TpmInitialized:1;                                                 //0x4c
    ULONG VsmConfigured:1;                                                  //0x4c
    ULONG IumEnabled:1;                                                     //0x4c
    ULONG IsSmbboot:1;                                                      //0x4c
    ULONG BootLogEnabled:1;                                                 //0x4c
    ULONG FeatureSettings:7;                                                //0x4c
    ULONG FeatureSimulations:6;                                             //0x4c
    ULONG MicrocodeOptedOut:1;                                              //0x4c
    ULONG XhciLegacyHandoffSkip:1;                                          //0x4c
    ULONG Reserved:5;                                                       //0x4c
    struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;                 //0x50
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0x54
    VOID* WmdTestResult;                                                    //0x5c
    struct _GUID BootIdentifier;                                            //0x60
    ULONG ResumePages;                                                      //0x70
    VOID* DumpHeader;                                                       //0x74
    VOID* BgContext;                                                        //0x78
    VOID* NumaLocalityInfo;                                                 //0x7c
    VOID* NumaGroupAssignment;                                              //0x80
    struct _LIST_ENTRY AttachedHives;                                       //0x84
    ULONG MemoryCachingRequirementsCount;                                   //0x8c
    VOID* MemoryCachingRequirements;                                        //0x90
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;                      //0x98
    ULONGLONG ProcessorCounterFrequency;                                    //0x830
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;      //0x838
    struct _GUID HardwareConfigurationId;                                   //0x870
    struct _LIST_ENTRY HalExtensionModuleList;                              //0x880
    union _LARGE_INTEGER SystemTime;                                        //0x888
    ULONGLONG TimeStampAtSystemTimeRead;                                    //0x890
    union
    {
        ULONGLONG BootFlags;                                                //0x898
        struct
        {
            ULONGLONG DbgMenuOsSelection:1;                                 //0x898
            ULONGLONG DbgHiberBoot:1;                                       //0x898
            ULONGLONG DbgSoftRestart:1;                                     //0x898
        };
    };
    union
    {
        ULONGLONG InternalBootFlags;                                        //0x8a0
        struct
        {
            ULONGLONG DbgUtcBootTime:1;                                     //0x8a0
            ULONGLONG DbgRtcBootTime:1;                                     //0x8a0
            ULONGLONG DbgNoLegacyServices:1;                                //0x8a0
        };
    };
    VOID* WfsFPData;                                                        //0x8a8
    ULONG WfsFPDataSize;                                                    //0x8ac
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;                  //0x8b0
    VOID* ApiSetSchema;                                                     //0x8c4
    ULONG ApiSetSchemaSize;                                                 //0x8c8
    struct _LIST_ENTRY ApiSetSchemaExtensions;                              //0x8cc
    struct _UNICODE_STRING AcpiBiosVersion;                                 //0x8d4
    struct _UNICODE_STRING SmbiosVersion;                                   //0x8dc
    struct _UNICODE_STRING EfiVersion;                                      //0x8e4
    struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;                         //0x8ec
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable; //0x8f0
    struct _UNICODE_STRING ManufacturingProfile;                            //0x910
    VOID* BbtBuffer;                                                        //0x918
    ULONGLONG XsaveAllowedFeatures;                                         //0x920
    ULONG XsaveFlags;                                                       //0x928
    VOID* BootOptions;                                                      //0x92c
    ULONG IumEnablement;                                                    //0x930
    ULONG IumPolicy;                                                        //0x934
    LONG IumStatus;                                                         //0x938
    ULONG BootId;                                                           //0x93c
    struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;               //0x940
    ULONG CodeIntegrityDataSize;                                            //0x944
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;               //0x948
    ULONG SoftRestartCount;                                                 //0x95c
    LONGLONG SoftRestartTime;                                               //0x960
    ULONG MajorRelease;                                                     //0x968
    ULONG Reserved1;                                                        //0x96c
    CHAR NtBuildLab[224];                                                   //0x970
    CHAR NtBuildLabEx[224];                                                 //0xa50
    struct _LOADER_RESET_REASON ResetReason;                                //0xb30
    ULONG MaxPciBusNumber;                                                  //0xb60
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

