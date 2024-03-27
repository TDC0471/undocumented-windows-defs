#pragma once
/* ------------------ */

#include <_ETW_GUID_ENTRY.h>

//0x1b0 bytes (sizeof)
struct _ETW_SILODRIVERSTATE
{
    ULONG EtwpSecurityProviderPID;                                          //0x0
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;                   //0x8
    ULONG AuditLoggerId;                                                    //0x188
    ULONGLONG EtwPsProvRegHandle;                                           //0x190
    USHORT EtwpSecurityLoggers[8];                                          //0x198
    UCHAR EtwpSecurityProviderEnableMask;                                   //0x1a8
    UCHAR EtwpShutdownInProgress;                                           //0x1a9
};
