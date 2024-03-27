#pragma once
/* ------------------ */

#include <_KE_PROCESS_CONCURRENCY_COUNT.h>
#include <_KE_IDEAL_PROCESSOR_SET_BREAKPOINTS.h>
#include <_KAFFINITY_EX.h>

//0x118 bytes (sizeof)
struct _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK
{
    union _KE_PROCESS_CONCURRENCY_COUNT ExpectedConcurrencyCount;           //0x0
    struct _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS Breakpoints;                 //0x4
    union
    {
        ULONG ConcurrencyCountFixed:1;                                      //0xc
        ULONG AllFlags;                                                     //0xc
    } AssignmentFlags;                                                      //0xc
    struct _KAFFINITY_EX IdealProcessorSets;                                //0x10
};
/* Used in */
// _EPROCESS

