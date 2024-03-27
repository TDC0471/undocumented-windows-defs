#pragma once
/* ------------------ */

#include <_EXCEPTION_RECORD.h>

//0x98 bytes (sizeof)
struct _EXCEPTION_RECORD
{
    LONG ExceptionCode;                                                     //0x0
    ULONG ExceptionFlags;                                                   //0x4
    struct _EXCEPTION_RECORD* ExceptionRecord;                              //0x8
    VOID* ExceptionAddress;                                                 //0x10
    ULONG NumberParameters;                                                 //0x18
    ULONGLONG ExceptionInformation[15];                                     //0x20
};
/* Used in */
// _EXCEPTION_POINTERS
// _EXCEPTION_RECORD
// _EXCEPTION_REGISTRATION_RECORD

