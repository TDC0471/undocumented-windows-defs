#pragma once
/* ------------------ */

#include <_ALPC_PORT.h>
#include <_ALPC_HANDLE_TABLE.h>
#include <_KALPC_MESSAGE.h>

//0x28 bytes (sizeof)
struct _KALPC_RESERVE
{
    struct _ALPC_PORT* OwnerPort;                                           //0x0
    struct _ALPC_HANDLE_TABLE* HandleTable;                                 //0x8
    VOID* Handle;                                                           //0x10
    struct _KALPC_MESSAGE* Message;                                         //0x18
    volatile LONG Active;                                                   //0x20
};
/* Used in */
// _KALPC_MESSAGE

