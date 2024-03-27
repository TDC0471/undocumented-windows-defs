#pragma once
/* ------------------ */

#include <_ETW_PROVIDER_STATE.h>
#include <_ETW_REG_ENTRY.h>

//0x10 bytes (sizeof)
struct _ETW_PROVIDER_TABLE_ENTRY
{
    LONG RefCount;                                                          //0x0
    enum _ETW_PROVIDER_STATE State;                                         //0x4
    struct _ETW_REG_ENTRY* RegEntry;                                        //0x8
    VOID* Caller;                                                           //0xc
};
