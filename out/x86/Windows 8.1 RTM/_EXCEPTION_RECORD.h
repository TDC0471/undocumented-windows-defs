#pragma once
/* ------------------ */

#include <_EXCEPTION_RECORD.h>

//0x50 bytes (sizeof)
struct _EXCEPTION_RECORD
{
    LONG ExceptionCode;                                                     //0x0
    ULONG ExceptionFlags;                                                   //0x4
    struct _EXCEPTION_RECORD* ExceptionRecord;                              //0x8
    VOID* ExceptionAddress;                                                 //0xc
    ULONG NumberParameters;                                                 //0x10
    ULONG ExceptionInformation[15];                                         //0x14
};
/* Used in */
// _EXCEPTION_POINTERS
// _EXCEPTION_RECORD
// _EXCEPTION_REGISTRATION_RECORD

