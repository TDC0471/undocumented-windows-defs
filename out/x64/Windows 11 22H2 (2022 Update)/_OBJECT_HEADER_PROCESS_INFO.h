#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x10 bytes (sizeof)
struct _OBJECT_HEADER_PROCESS_INFO
{
    struct _EPROCESS* ExclusiveProcess;                                     //0x0
    ULONGLONG Reserved;                                                     //0x8
};
