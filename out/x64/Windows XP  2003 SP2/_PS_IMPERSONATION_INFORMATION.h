#pragma once
/* ------------------ */

#include <_SECURITY_IMPERSONATION_LEVEL.h>

//0x10 bytes (sizeof)
struct _PS_IMPERSONATION_INFORMATION
{
    VOID* Token;                                                            //0x0
    UCHAR CopyOnOpen;                                                       //0x8
    UCHAR EffectiveOnly;                                                    //0x9
    enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;                  //0xc
};
/* Used in */
// _ETHREAD

