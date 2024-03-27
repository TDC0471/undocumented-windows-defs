#pragma once
/* ------------------ */

#include <_TP_CALLBACK_INSTANCE.h>
#include <_TP_DIRECT.h>
#include <_IO_STATUS_BLOCK.h>

//0x8 bytes (sizeof)
struct _TP_DIRECT
{
    VOID (*Callback)(struct _TP_CALLBACK_INSTANCE* arg1, struct _TP_DIRECT* arg2, VOID* arg3, struct _IO_STATUS_BLOCK* arg4); //0x0
};
/* Used in */
// _TP_DIRECT

