#pragma once
/* ------------------ */

#include <_MDL.h>

//0x20 bytes (sizeof)
struct _CC_ASYNC_READ_CONTEXT
{
    UCHAR (*CompletionRoutine)(VOID* arg1);                                 //0x0
    VOID* Context;                                                          //0x8
    struct _MDL* Mdl;                                                       //0x10
    CHAR RequestorMode;                                                     //0x18
    ULONG NestingLevel;                                                     //0x1c
};
/* Used in */
// _WORK_QUEUE_ENTRY

