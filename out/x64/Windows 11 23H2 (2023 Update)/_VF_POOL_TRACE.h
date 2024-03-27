#pragma once
/* ------------------ */

#include <_ETHREAD.h>

//0x1a8 bytes (sizeof)
struct _VF_POOL_TRACE
{
    VOID* Address;                                                          //0x0
    ULONGLONG Size;                                                         //0x8
    struct _ETHREAD* Thread;                                                //0x10
    VOID* StackTrace[50];                                                   //0x18
};
