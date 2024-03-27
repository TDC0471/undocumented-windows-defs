#pragma once
/* ------------------ */

#include <_EXCEPTION_RECORD64.h>

//0xa0 bytes (sizeof)
struct _DBGKM_EXCEPTION64
{
    struct _EXCEPTION_RECORD64 ExceptionRecord;                             //0x0
    ULONG FirstChance;                                                      //0x98
};
