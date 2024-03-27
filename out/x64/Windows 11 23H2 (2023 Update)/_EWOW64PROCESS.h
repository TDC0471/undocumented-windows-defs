#pragma once
/* ------------------ */

#include <_SYSTEM_DLL_TYPE.h>

//0x10 bytes (sizeof)
struct _EWOW64PROCESS
{
    VOID* Peb;                                                              //0x0
    enum _SYSTEM_DLL_TYPE NtdllType;                                        //0x8
};
/* Used in */
// _EPROCESS

