#pragma once
/* ------------------ */

#include <_ALPC_HANDLE_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x20 bytes (sizeof)
struct _ALPC_HANDLE_TABLE
{
    struct _ALPC_HANDLE_ENTRY* Handles;                                     //0x0
    struct _EX_PUSH_LOCK Lock;                                              //0x8
    ULONGLONG TotalHandles;                                                 //0x10
    ULONG Flags;                                                            //0x18
};
/* Used in */
// _ALPC_COMMUNICATION_INFO
// _KALPC_RESERVE
// _KALPC_SECTION
// _KALPC_SECURITY_DATA

