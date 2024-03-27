#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>
#include <_MMPTE.h>

//0x38 bytes (sizeof)
struct _MI_PROCESS_STATE
{
    VOID* SystemDllBase;                                                    //0x0
    ULONG ColorSeed;                                                        //0x8
    LONG RotatingUniprocessorNumber;                                        //0xc
    union _LARGE_INTEGER CriticalSectionTimeout;                            //0x10
    struct _LIST_ENTRY ProcessList;                                         //0x18
    struct _MMPTE* SharedUserDataPte;                                       //0x28
    ULONGLONG VadSecureCookie;                                              //0x30
};
/* Used in */
// _MI_SYSTEM_INFORMATION

