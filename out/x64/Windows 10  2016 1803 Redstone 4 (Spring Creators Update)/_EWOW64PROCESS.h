#pragma once
/* ------------------ */

#include <_SYSTEM_DLL_TYPE.h>

//0x10 bytes (sizeof)
struct _EWOW64PROCESS
{
    VOID* Peb;                                                              //0x0
    USHORT Machine;                                                         //0x8
    enum _SYSTEM_DLL_TYPE NtdllType;                                        //0xc
};
/* Used in */
// _EPROCESS

