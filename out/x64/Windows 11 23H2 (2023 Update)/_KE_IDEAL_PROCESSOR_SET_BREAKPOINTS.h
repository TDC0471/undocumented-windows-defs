#pragma once
/* ------------------ */

#include <_KE_PROCESS_CONCURRENCY_COUNT.h>

//0x8 bytes (sizeof)
struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS
{
    union _KE_PROCESS_CONCURRENCY_COUNT Low;                                //0x0
    union _KE_PROCESS_CONCURRENCY_COUNT High;                               //0x4
};
/* Used in */
// _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK

