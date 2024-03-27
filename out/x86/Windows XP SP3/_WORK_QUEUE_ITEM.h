#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _WORK_QUEUE_ITEM
{
    struct _LIST_ENTRY List;                                                //0x0
    VOID (*WorkerRoutine)(VOID* arg1);                                      //0x8
    VOID* Parameter;                                                        //0xc
};
/* Used in */
// _CMHIVE

