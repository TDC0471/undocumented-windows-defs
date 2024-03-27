#pragma once
/* ------------------ */

#include <_ETW_GUID_ENTRY.h>
#include <_EX_RUNDOWN_REF_CACHE_AWARE.h>
#include <_WMI_LOGGER_CONTEXT.h>
#include <_ETW_HASH_BUCKET.h>

//0xa80 bytes (sizeof)
struct _ETW_SILODRIVERSTATE
{
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;                   //0x0
    struct _EX_RUNDOWN_REF_CACHE_AWARE* EtwpLoggerRundown[64];              //0x168
    struct _WMI_LOGGER_CONTEXT* WmipLoggerContext[64];                      //0x268
    struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];                          //0x368
    USHORT EtwpSecurityLoggers[8];                                          //0xa68
    UCHAR EtwpSecurityProviderEnableMask;                                   //0xa78
    UCHAR EtwpShutdownInProgress;                                           //0xa79
    ULONG EtwpSecurityProviderPID;                                          //0xa7c
};
