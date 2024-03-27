#pragma once
/* ------------------ */

#include <_EJOB.h>
#include <_ESERVERSILO_GLOBALS.h>
#include <_ETW_GUID_ENTRY.h>
#include <_EX_RUNDOWN_REF_CACHE_AWARE.h>
#include <_WMI_LOGGER_CONTEXT.h>
#include <_ETW_HASH_BUCKET.h>
#include <_ETW_PRIV_HANDLE_DEMUX_TABLE.h>
#include <_ETW_COUNTERS.h>
#include <_LARGE_INTEGER.h>
#include <_ETW_SILO_TRACING_BLOCK.h>
#include <_EX_WNF_SUBSCRIPTION.h>
#include <_GUID.h>
#include <_ETW_SYSTEM_LOGGER_SETTINGS.h>
#include <_KMUTANT.h>

//0xaa8 bytes (sizeof)
struct _ETW_SILODRIVERSTATE
{
    struct _EJOB* Silo;                                                     //0x0
    struct _ESERVERSILO_GLOBALS* SiloGlobals;                               //0x4
    ULONG MaxLoggers;                                                       //0x8
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;                   //0x10
    struct _EX_RUNDOWN_REF_CACHE_AWARE** EtwpLoggerRundown;                 //0x188
    struct _WMI_LOGGER_CONTEXT** EtwpLoggerContext;                         //0x18c
    struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];                          //0x190
    USHORT EtwpSecurityLoggers[8];                                          //0x890
    UCHAR EtwpSecurityProviderEnableMask;                                   //0x8a0
    LONG EtwpShutdownInProgress;                                            //0x8a4
    ULONG EtwpSecurityProviderPID;                                          //0x8a8
    struct _ETW_PRIV_HANDLE_DEMUX_TABLE PrivHandleDemuxTable;               //0x8ac
    struct _ETW_COUNTERS EtwpCounters;                                      //0x8bc
    union _LARGE_INTEGER LogfileBytesWritten;                               //0x8d0
    struct _ETW_SILO_TRACING_BLOCK* ProcessorBlocks;                        //0x8d8
    struct _EX_WNF_SUBSCRIPTION* ContainerRestoreWnfSubscription;           //0x8dc
    struct _GUID PartitionId;                                               //0x8e0
    struct _GUID ParentId;                                                  //0x8f0
    union _LARGE_INTEGER QpcOffsetFromRoot;                                 //0x900
    CHAR* PartitionName;                                                    //0x908
    USHORT PartitionNameSize;                                               //0x90c
    USHORT UnusedPadding;                                                   //0x90e
    ULONG PartitionType;                                                    //0x910
    struct _ETW_SYSTEM_LOGGER_SETTINGS SystemLoggerSettings;                //0x914
    struct _KMUTANT EtwpStartTraceMutex;                                    //0xa88
};
/* Used in */
// _ESERVERSILO_GLOBALS
// _ETW_GUID_ENTRY
// _ETW_REALTIME_CONSUMER
// _WMI_LOGGER_CONTEXT

