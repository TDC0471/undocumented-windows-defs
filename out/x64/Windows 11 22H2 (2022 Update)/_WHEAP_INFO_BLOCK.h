#pragma once
/* ------------------ */

#include <_WHEAP_ERROR_SOURCE_TABLE.h>
#include <_WHEAP_WORK_QUEUE.h>

//0x18 bytes (sizeof)
struct _WHEAP_INFO_BLOCK
{
    ULONG ErrorSourceCount;                                                 //0x0
    struct _WHEAP_ERROR_SOURCE_TABLE* ErrorSourceTable;                     //0x8
    struct _WHEAP_WORK_QUEUE* WorkQueue;                                    //0x10
};
