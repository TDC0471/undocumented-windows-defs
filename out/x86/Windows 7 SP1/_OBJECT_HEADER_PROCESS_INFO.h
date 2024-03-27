#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x8 bytes (sizeof)
struct _OBJECT_HEADER_PROCESS_INFO
{
    struct _EPROCESS* ExclusiveProcess;                                     //0x0
    ULONG Reserved;                                                         //0x4
};
