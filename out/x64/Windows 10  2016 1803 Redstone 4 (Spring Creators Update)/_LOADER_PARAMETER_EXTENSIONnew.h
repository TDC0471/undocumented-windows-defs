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

//0xc40 bytes (sizeof)
struct _LOADER_PARAMETER_EXTENSION
{
    ULONG Size;                                                             //0x0
    struct _PROFILE_PARAMETER_BLOCK Profile;                                //0x4
    VOID* EmInfFileImage;                                                   //0x18
    ULONG EmInfFileSize;                                                    //0x20
    VOID* TriageDumpBlock;                                                  //0x28
    struct _HEADLESS_LOADER_BLOCK* HeadlessLoaderBlock;                     //0x30
    struct _SMBIOS3_TABLE_HEADER* SMBiosEPSHeader;                          //0x38
    VOID* DrvDBImage;                                                       //0x40
    ULONG DrvDBSize;                                                        //0x48
    struct _NETWORK_LOADER_BLOCK* NetworkLoaderBlock;                       //0x50
    struct _LIST_ENTRY FirmwareDescriptorListHead;                          //0x58
    VOID* AcpiTable;                                                        //0x68
    ULONG AcpiTableSize;                                                    //0x70
    ULONG LastBootSucceeded:1;                                              //0x74
    ULONG LastBootShutdown:1;                                               //0x74
    ULONG IoPortAccessSupported:1;                                          //0x74
    ULONG BootDebuggerActive:1;                                             //0x74
    ULONG StrongCodeGuarantees:1;                                           //0x74
    ULONG HardStrongCodeGuarantees:1;                                       //0x74
    ULONG SidSharingDisabled:1;                                             //0x74
    ULONG TpmInitialized:1;                                                 //0x74
    ULONG VsmConfigured:1;                                                  //0x74
    ULONG IumEnabled:1;                                                     //0x74
    ULONG IsSmbboot:1;                                                      //0x74
    ULONG BootLogEnabled:1;                                                 //0x74
    ULONG FeatureSettings:7;                                                //0x74
    ULONG FeatureSimulations:6;                                             //0x74
    ULONG MicrocodeOptedOut:1;                                              //0x74
    ULONG XhciLegacyHandoffSkip:1;                                          //0x74
    ULONG Reserved:5;                                                       //0x74
    struct _LOADER_PERFORMANCE_DATA* LoaderPerformanceData;                 //0x78
    struct _LIST_ENTRY BootApplicationPersistentData;                       //0x80
    VOID* WmdTestResult;                                                    //0x90
    struct _GUID BootIdentifier;                                            //0x98
    ULONG ResumePages;                                                      //0xa8
    VOID* DumpHeader;                                                       //0xb0
    VOID* BgContext;                                                        //0xb8
    VOID* NumaLocalityInfo;                                                 //0xc0
    VOID* NumaGroupAssignment;                                              //0xc8
    struct _LIST_ENTRY AttachedHives;                                       //0xd0
    ULONG MemoryCachingRequirementsCount;                                   //0xe0
    VOID* MemoryCachingRequirements;                                        //0xe8
    struct _BOOT_ENTROPY_LDR_RESULT BootEntropyResult;                      //0xf0
    ULONGLONG ProcessorCounterFrequency;                                    //0x888
    struct _LOADER_PARAMETER_HYPERVISOR_EXTENSION HypervisorExtension;      //0x890
    struct _GUID HardwareConfigurationId;                                   //0x8c8
    struct _LIST_ENTRY HalExtensionModuleList;                              //0x8d8
    union _LARGE_INTEGER SystemTime;                                        //0x8e8
    ULONGLONG TimeStampAtSystemTimeRead;                                    //0x8f0
    union
    {
        ULONGLONG BootFlags;                                                //0x8f8
        struct
        {
            ULONGLONG DbgMenuOsSelection:1;                                 //0x8f8
            ULONGLONG DbgHiberBoot:1;                                       //0x8f8
            ULONGLONG DbgSoftRestart:1;                                     //0x8f8
        };
    };
    union
    {
        ULONGLONG InternalBootFlags;                                        //0x900
        struct
        {
            ULONGLONG DbgUtcBootTime:1;                                     //0x900
            ULONGLONG DbgRtcBootTime:1;                                     //0x900
            ULONGLONG DbgNoLegacyServices:1;                                //0x900
        };
    };
    VOID* WfsFPData;                                                        //0x908
    ULONG WfsFPDataSize;                                                    //0x910
    struct _LOADER_BUGCHECK_PARAMETERS BugcheckParameters;                  //0x918
    VOID* ApiSetSchema;                                                     //0x940
    ULONG ApiSetSchemaSize;                                                 //0x948
    struct _LIST_ENTRY ApiSetSchemaExtensions;                              //0x950
    struct _UNICODE_STRING AcpiBiosVersion;                                 //0x960
    struct _UNICODE_STRING SmbiosVersion;                                   //0x970
    struct _UNICODE_STRING EfiVersion;                                      //0x980
    struct _DEBUG_DEVICE_DESCRIPTOR* KdDebugDevice;                         //0x990
    struct _OFFLINE_CRASHDUMP_CONFIGURATION_TABLE_V2 OfflineCrashdumpConfigurationTable; //0x998
    struct _UNICODE_STRING ManufacturingProfile;                            //0x9b8
    VOID* BbtBuffer;                                                        //0x9c8
    ULONGLONG XsaveAllowedFeatures;                                         //0x9d0
    ULONG XsaveFlags;                                                       //0x9d8
    VOID* BootOptions;                                                      //0x9e0
    ULONG IumEnablement;                                                    //0x9e8
    ULONG IumPolicy;                                                        //0x9ec
    LONG IumStatus;                                                         //0x9f0
    ULONG BootId;                                                           //0x9f4
    struct _LOADER_PARAMETER_CI_EXTENSION* CodeIntegrityData;               //0x9f8
    ULONG CodeIntegrityDataSize;                                            //0xa00
    struct _LOADER_HIVE_RECOVERY_INFO SystemHiveRecoveryInfo;               //0xa04
    ULONG SoftRestartCount;                                                 //0xa18
    LONGLONG SoftRestartTime;                                               //0xa20
    VOID* HypercallCodeVa;                                                  //0xa28
    VOID* HalVirtualAddress;                                                //0xa30
    ULONGLONG HalNumberOfBytes;                                             //0xa38
    ULONG MajorRelease;                                                     //0xa40
    ULONG Reserved1;                                                        //0xa44
    CHAR NtBuildLab[224];                                                   //0xa48
    CHAR NtBuildLabEx[224];                                                 //0xb28
    struct _LOADER_RESET_REASON ResetReason;                                //0xc08
    ULONG MaxPciBusNumber;                                                  //0xc38
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

