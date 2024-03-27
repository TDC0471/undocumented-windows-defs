#pragma once
/* ------------------ */

#include <_ETW_GUID_ENTRY.h>
#include <_EX_RUNDOWN_REF_CACHE_AWARE.h>
#include <_WMI_LOGGER_CONTEXT.h>
#include <_ETW_HASH_BUCKET.h>

//0x13a8 bytes (sizeof)
struct _ETW_SILODRIVERSTATE
{
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;                   //0x0
    struct _EX_RUNDOWN_REF_CACHE_AWARE* EtwpLoggerRundown[64];              //0x190
    struct _WMI_LOGGER_CONTEXT* WmipLoggerContext[64];                      //0x390
    struct _ETW_HASH_BUCKET EtwpGuidHashTable[64];                          //0x590
    USHORT EtwpSecurityLoggers[8];                                          //0x1390
    UCHAR EtwpSecurityProviderEnableMask;                                   //0x13a0
    UCHAR EtwpShutdownInProgress;                                           //0x13a1
    ULONG EtwpSecurityProviderPID;                                          //0x13a4
};
