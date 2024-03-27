#pragma once
/* ------------------ */


//0x98 bytes (sizeof)
struct _EXCEPTION_RECORD64
{
    LONG ExceptionCode;                                                     //0x0
    ULONG ExceptionFlags;                                                   //0x4
    ULONGLONG ExceptionRecord;                                              //0x8
    ULONGLONG ExceptionAddress;                                             //0x10
    ULONG NumberParameters;                                                 //0x18
    ULONG __unusedAlignment;                                                //0x1c
    ULONGLONG ExceptionInformation[15];                                     //0x20
};
/* Used in */
// _DBGKM_EXCEPTION64

