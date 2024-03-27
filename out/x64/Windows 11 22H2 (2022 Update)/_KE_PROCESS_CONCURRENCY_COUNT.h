#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _KE_PROCESS_CONCURRENCY_COUNT
{
    ULONG Fraction:20;                                                      //0x0
    ULONG Count:12;                                                         //0x0
    ULONG AllFields;                                                        //0x0
};
/* Used in */
// _KE_IDEAL_PROCESSOR_ASSIGNMENT_BLOCK
// _KE_IDEAL_PROCESSOR_SET_BREAKPOINTS

