#pragma once
/* ------------------ */

#include <_EX_FAST_REF.h>

//0x300 bytes (sizeof)
struct _ETW_SILO_TRACING_BLOCK
{
    struct _EX_FAST_REF ProcessorBuffers[64];                               //0x0
    ULONGLONG EventsLoggedCount[64];                                        //0x100
};
/* Used in */
// _ETW_SILODRIVERSTATE

