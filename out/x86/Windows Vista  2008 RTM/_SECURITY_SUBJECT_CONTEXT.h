#pragma once
/* ------------------ */

#include <_SECURITY_IMPERSONATION_LEVEL.h>

//0x10 bytes (sizeof)
struct _SECURITY_SUBJECT_CONTEXT
{
    VOID* ClientToken;                                                      //0x0
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0x4
    VOID* PrimaryToken;                                                     //0x8
    VOID* ProcessAuditId;                                                   //0xc
};
/* Used in */
// _ACCESS_STATE
// _CM_NOTIFY_BLOCK

