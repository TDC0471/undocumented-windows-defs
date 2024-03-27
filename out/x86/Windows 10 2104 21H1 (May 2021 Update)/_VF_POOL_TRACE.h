#pragma once
/* ------------------ */

#include <_ETHREAD.h>

//0x40 bytes (sizeof)
struct _VF_POOL_TRACE
{
    VOID* Address;                                                          //0x0
    ULONG Size;                                                             //0x4
    struct _ETHREAD* Thread;                                                //0x8
    VOID* StackTrace[13];                                                   //0xc
};
