#pragma once
/* ------------------ */

#include <_MDL.h>

//0x18 bytes (sizeof)
struct _ALPC_MESSAGE_ZONE
{
    struct _MDL* Mdl;                                                       //0x0
    VOID* UserVa;                                                           //0x4
    VOID* UserLimit;                                                        //0x8
    VOID* SystemVa;                                                         //0xc
    VOID* SystemLimit;                                                      //0x10
    ULONG Size;                                                             //0x14
};
/* Used in */
// _ALPC_PORT

