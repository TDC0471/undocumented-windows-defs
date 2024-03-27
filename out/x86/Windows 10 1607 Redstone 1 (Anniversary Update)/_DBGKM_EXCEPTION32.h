#pragma once
/* ------------------ */

#include <_EXCEPTION_RECORD32.h>

//0x54 bytes (sizeof)
struct _DBGKM_EXCEPTION32
{
    struct _EXCEPTION_RECORD32 ExceptionRecord;                             //0x0
    ULONG FirstChance;                                                      //0x50
};
