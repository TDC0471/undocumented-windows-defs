#pragma once
/* ------------------ */

#include <_ALPC_PORT.h>
#include <_ALPC_HANDLE_TABLE.h>
#include <_KALPC_MESSAGE.h>

//0x14 bytes (sizeof)
struct _KALPC_RESERVE
{
    struct _ALPC_PORT* OwnerPort;                                           //0x0
    struct _ALPC_HANDLE_TABLE* HandleTable;                                 //0x4
    VOID* Handle;                                                           //0x8
    struct _KALPC_MESSAGE* Message;                                         //0xc
    volatile LONG Active;                                                   //0x10
};
/* Used in */
// _KALPC_MESSAGE

