#pragma once
/* ------------------ */

#include <_ETHREAD.h>

//0x24 bytes (sizeof)
struct _VI_FAULT_TRACE
{
    struct _ETHREAD* Thread;                                                //0x0
    VOID* StackTrace[8];                                                    //0x4
};
