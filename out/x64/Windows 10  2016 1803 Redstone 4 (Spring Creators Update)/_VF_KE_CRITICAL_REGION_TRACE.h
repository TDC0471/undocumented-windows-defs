#pragma once
/* ------------------ */

#include <_ETHREAD.h>

//0x40 bytes (sizeof)
struct _VF_KE_CRITICAL_REGION_TRACE
{
    struct _ETHREAD* Thread;                                                //0x0
    VOID* StackTrace[7];                                                    //0x8
};
