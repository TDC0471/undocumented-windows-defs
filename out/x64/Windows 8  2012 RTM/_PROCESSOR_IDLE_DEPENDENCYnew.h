#pragma once
/* ------------------ */

#include <_PROCESSOR_NUMBER.h>

//0x6 bytes (sizeof)
struct _PROCESSOR_IDLE_DEPENDENCY
{
    struct _PROCESSOR_NUMBER Processor;                                     //0x0
    UCHAR ExpectedState;                                                    //0x4
};
/* Used in */
// _PROCESSOR_IDLE_PREPARE_INFO

