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

//0x11f8 bytes (sizeof)
struct _ETW_SILODRIVERSTATE
{
    struct _EJOB* Silo;                                                     //0x0
    struct _ESERVERSILO_GLOBALS* SiloGlobals;                               //0x8
    ULONG MaxLoggers;                                                       //0x10
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;                   //0x18
    struct _EX_RUNDOWN_REF_CACHE_AWARE** EtwpLoggerRundown;                 //0x1a8
    struct _WMI_LOGGER_CONTEXT** EtwpLoggerContext;                         //0x1b0
    struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];                          //0x1b8
    USHORT EtwpSecurityLoggers[8];                                          //0xfb8
    UCHAR EtwpSecurityProviderEnableMask;                                   //0xfc8
    LONG EtwpShutdownInProgress;                                            //0xfcc
    ULONG EtwpSecurityProviderPID;                                          //0xfd0
    struct _ETW_PRIV_HANDLE_DEMUX_TABLE PrivHandleDemuxTable;               //0xfd8
    struct _ETW_COUNTERS EtwpCounters;                                      //0xff8
    union _LARGE_INTEGER LogfileBytesWritten;                               //0x1008
    struct _ETW_SILO_TRACING_BLOCK* ProcessorBlocks;                        //0x1010
    struct _EX_WNF_SUBSCRIPTION* ContainerRestoreWnfSubscription;           //0x1018
    struct _GUID PartitionId;                                               //0x1020
    struct _GUID ParentId;                                                  //0x1030
    union _LARGE_INTEGER QpcOffsetFromRoot;                                 //0x1040
    ULONG PartitionType;                                                    //0x1048
    struct _ETW_SYSTEM_LOGGER_SETTINGS SystemLoggerSettings;                //0x104c
    struct _KMUTANT EtwpStartTraceMutex;                                    //0x11c0
};
/* Used in */
// _ESERVERSILO_GLOBALS
// _ETW_GUID_ENTRY
// _ETW_REALTIME_CONSUMER
// _WMI_LOGGER_CONTEXT

