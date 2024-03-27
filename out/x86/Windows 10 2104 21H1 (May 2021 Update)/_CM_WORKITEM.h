#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x14 bytes (sizeof)
struct _CM_WORKITEM
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG Private;                                                          //0x8
    VOID (*WorkerRoutine)(VOID* arg1);                                      //0xc
    VOID* Parameter;                                                        //0x10
};
/* Used in */
// _CMHIVE

