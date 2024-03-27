#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_PNP_PROBLEM_CODE_LOG_OPERATION.h>

//0x18 bytes (sizeof)
struct _PNP_PROBLEM_CODE_LOG_ENTRY
{
    union _LARGE_INTEGER Timestamp;                                         //0x0
    enum _PNP_PROBLEM_CODE_LOG_OPERATION Operation;                         //0x8
    ULONG ProblemCode;                                                      //0xc
    LONG ProblemStatus;                                                     //0x10
};
/* Used in */
// _DEVICE_NODE

