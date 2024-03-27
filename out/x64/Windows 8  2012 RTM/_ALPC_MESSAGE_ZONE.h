#pragma once
/* ------------------ */

#include <_MDL.h>

//0x30 bytes (sizeof)
struct _ALPC_MESSAGE_ZONE
{
    struct _MDL* Mdl;                                                       //0x0
    VOID* UserVa;                                                           //0x8
    VOID* UserLimit;                                                        //0x10
    VOID* SystemVa;                                                         //0x18
    VOID* SystemLimit;                                                      //0x20
    ULONGLONG Size;                                                         //0x28
};
/* Used in */
// _ALPC_PORT

