#pragma once
/* ------------------ */

#include <_ETW_GUID_ENTRY.h>

//0x190 bytes (sizeof)
struct _ETW_SILODRIVERSTATE
{
    ULONG EtwpSecurityProviderPID;                                          //0x0
    struct _ETW_GUID_ENTRY EtwpSecurityProviderGuidEntry;                   //0x8
    ULONG AuditLoggerId;                                                    //0x168
    ULONGLONG EtwPsProvRegHandle;                                           //0x170
    USHORT EtwpSecurityLoggers[8];                                          //0x178
    UCHAR EtwpSecurityProviderEnableMask;                                   //0x188
    UCHAR EtwpShutdownInProgress;                                           //0x189
};
