#pragma once
/* ------------------ */

#include <_EXCEPTION_RECORD.h>
#include <_CONTEXT.h>

//0x8 bytes (sizeof)
struct _EXCEPTION_POINTERS
{
    struct _EXCEPTION_RECORD* ExceptionRecord;                              //0x0
    struct _CONTEXT* ContextRecord;                                         //0x4
};
