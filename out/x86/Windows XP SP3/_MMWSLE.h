#pragma once
/* ------------------ */

#include <_MMWSLENTRY.h>

//0x4 bytes (sizeof)
struct _MMWSLE
{
    union
    {
        VOID* VirtualAddress;                                               //0x0
        ULONG Long;                                                         //0x0
        struct _MMWSLENTRY e1;                                              //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _MMWSL
// _MM_SESSION_SPACE

