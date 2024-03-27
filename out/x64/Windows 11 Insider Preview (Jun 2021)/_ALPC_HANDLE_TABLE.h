#pragma once
/* ------------------ */

#include <_ALPC_HANDLE_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x18 bytes (sizeof)
struct _ALPC_HANDLE_TABLE
{
    struct _ALPC_HANDLE_ENTRY* Handles;                                     //0x0
    ULONG TotalHandles;                                                     //0x8
    ULONG Flags;                                                            //0xc
    struct _EX_PUSH_LOCK Lock;                                              //0x10
};
/* Used in */
// _ALPC_COMMUNICATION_INFO
// _KALPC_RESERVE
// _KALPC_SECTION
// _KALPC_SECURITY_DATA

