#pragma once
/* ------------------ */


//0x50 bytes (sizeof)
struct _EXCEPTION_RECORD32
{
    LONG ExceptionCode;                                                     //0x0
    ULONG ExceptionFlags;                                                   //0x4
    ULONG ExceptionRecord;                                                  //0x8
    ULONG ExceptionAddress;                                                 //0xc
    ULONG NumberParameters;                                                 //0x10
    ULONG ExceptionInformation[15];                                         //0x14
};
/* Used in */
// _DBGKM_EXCEPTION32

