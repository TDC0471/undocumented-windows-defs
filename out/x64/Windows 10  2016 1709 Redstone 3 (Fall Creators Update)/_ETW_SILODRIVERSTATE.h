#pragma once
/* ------------------ */

#include <_ESERVERSILO_GLOBALS.h>
#include <_ETW_GUID_ENTRY.h>
#include <_EX_RUNDOWN_REF_CACHE_AWARE.h>
#include <_WMI_LOGGER_CONTEXT.h>
#include <_ETW_HASH_BUCKET.h>
#include <_ETW_PRIV_HANDLE_DEMUX_TABLE.h>
#include <_ETW_COUNTERS.h>
#include <_LARGE_INTEGER.h>
#include <_ETW_SILO_TRACING_BLOCK.h>
#include <_GUID.h>
#include <_ETW_SYSTEM_LOGGER_SETTINGS.h>

//0x1190 bytes (sizeof)
struct _ETW_SILODRIVERSTATE
{
    struct _ESERVERSILO_GLOBALS* SiloGlobals;                               //0x0
    ULONG MaxLoggers;                                                       //0x8
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;                   //0x10
    struct _EX_RUNDOWN_REF_CACHE_AWARE** EtwpLoggerRundown;                 //0x1a0
    struct _WMI_LOGGER_CONTEXT** EtwpLoggerContext;                         //0x1a8
    struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];                          //0x1b0
    USHORT EtwpSecurityLoggers[8];                                          //0xfb0
    UCHAR EtwpSecurityProviderEnableMask;                                   //0xfc0
    LONG EtwpShutdownInProgress;                                            //0xfc4
    ULONG EtwpSecurityProviderPID;                                          //0xfc8
    struct _ETW_PRIV_HANDLE_DEMUX_TABLE PrivHandleDemuxTable;               //0xfd0
    struct _ETW_COUNTERS EtwpCounters;                                      //0xff0
    union _LARGE_INTEGER LogfileBytesWritten;                               //0x1000
    struct _ETW_SILO_TRACING_BLOCK* ProcessorBlocks;                        //0x1008
    struct _GUID PartitionId;                                               //0x1010
    struct _GUID ParentId;                                                  //0x1020
    union _LARGE_INTEGER QpcOffsetFromRoot;                                 //0x1030
    ULONG PartitionType;                                                    //0x1038
    struct _ETW_SYSTEM_LOGGER_SETTINGS SystemLoggerSettings;                //0x103c
};
/* Used in */
// _ESERVERSILO_GLOBALS
// _ETW_GUID_ENTRY
// _ETW_REALTIME_CONSUMER
// _WMI_LOGGER_CONTEXT

