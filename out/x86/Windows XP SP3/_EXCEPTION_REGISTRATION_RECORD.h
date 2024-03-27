#pragma once
/* ------------------ */

#include <_EXCEPTION_REGISTRATION_RECORD.h>
#include <_EXCEPTION_DISPOSITION.h>
#include <_EXCEPTION_RECORD.h>
#include <_CONTEXT.h>

//0x8 bytes (sizeof)
struct _EXCEPTION_REGISTRATION_RECORD
{
    struct _EXCEPTION_REGISTRATION_RECORD* Next;                            //0x0
    enum _EXCEPTION_DISPOSITION (*Handler)(struct _EXCEPTION_RECORD* arg1, VOID* arg2, struct _CONTEXT* arg3, VOID* arg4); //0x4
};
/* Used in */
// _EXCEPTION_REGISTRATION_RECORD
// _KTRAP_FRAME
// _NT_TIB

