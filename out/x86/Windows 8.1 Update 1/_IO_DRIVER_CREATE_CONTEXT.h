#pragma once
/* ------------------ */

#include <_ECP_LIST.h>
#include <_TXN_PARAMETER_BLOCK.h>

//0x10 bytes (sizeof)
struct _IO_DRIVER_CREATE_CONTEXT
{
    SHORT Size;                                                             //0x0
    struct _ECP_LIST* ExtraCreateParameter;                                 //0x4
    VOID* DeviceObjectHint;                                                 //0x8
    struct _TXN_PARAMETER_BLOCK* TxnParameters;                             //0xc
};
/* Used in */
// _OPEN_PACKET

