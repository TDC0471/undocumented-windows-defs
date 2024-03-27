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

//0xac0 bytes (sizeof)
struct _ETW_SILODRIVERSTATE
{
    struct _ESERVERSILO_GLOBALS* SiloGlobals;                               //0x0
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;                   //0x8
    struct _EX_RUNDOWN_REF_CACHE_AWARE* EtwpLoggerRundown[64];              //0x170
    struct _WMI_LOGGER_CONTEXT* WmipLoggerContext[64];                      //0x270
    struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];                          //0x370
    USHORT EtwpSecurityLoggers[8];                                          //0xa70
    UCHAR EtwpSecurityProviderEnableMask;                                   //0xa80
    LONG EtwpShutdownInProgress;                                            //0xa84
    ULONG EtwpSecurityProviderPID;                                          //0xa88
    struct _ETW_PRIV_HANDLE_DEMUX_TABLE PrivHandleDemuxTable;               //0xa8c
    struct _ETW_COUNTERS EtwpCounters;                                      //0xa9c
    union _LARGE_INTEGER LogfileBytesWritten;                               //0xab0
    struct _ETW_SILO_TRACING_BLOCK* ProcessorBlocks;                        //0xab8
};
/* Used in */
// _ESERVERSILO_GLOBALS
// _ETW_GUID_ENTRY
// _ETW_REALTIME_CONSUMER
// _WMI_LOGGER_CONTEXT

