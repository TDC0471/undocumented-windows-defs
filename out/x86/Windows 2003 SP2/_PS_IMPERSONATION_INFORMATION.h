#pragma once
/* ------------------ */

#include <_SECURITY_IMPERSONATION_LEVEL.h>

//0xc bytes (sizeof)
struct _PS_IMPERSONATION_INFORMATION
{
    VOID* Token;                                                            //0x0
    UCHAR CopyOnOpen;                                                       //0x4
    UCHAR EffectiveOnly;                                                    //0x5
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0x8
};
/* Used in */
// _ETHREAD

