#pragma once
/* ------------------ */

#include <_OBJECT_REF_TRACE.h>

//0x8088 bytes (sizeof)
struct _STACK_TABLE
{
    USHORT NumStackTraces;                                                  //0x0
    USHORT TraceCapacity;                                                   //0x2
    struct _OBJECT_REF_TRACE* StackTrace[16];                               //0x8
    USHORT StackTableHash[16381];                                           //0x88
};
