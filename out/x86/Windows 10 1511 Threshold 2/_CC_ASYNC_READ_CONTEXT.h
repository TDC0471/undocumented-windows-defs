#pragma once
/* ------------------ */

#include <_MDL.h>

//0x14 bytes (sizeof)
struct _CC_ASYNC_READ_CONTEXT
{
    UCHAR (*CompletionRoutine)(VOID* arg1);                                 //0x0
    VOID* Context;                                                          //0x4
    struct _MDL* Mdl;                                                       //0x8
    CHAR RequestorMode;                                                     //0xc
    ULONG NestingLevel;                                                     //0x10
};
/* Used in */
// _WORK_QUEUE_ENTRY

