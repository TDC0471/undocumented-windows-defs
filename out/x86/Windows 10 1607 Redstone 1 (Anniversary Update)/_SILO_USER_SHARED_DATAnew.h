#pragma once
/* ------------------ */

#include <_NT_PRODUCT_TYPE.h>

//0x20 bytes (sizeof)
struct _SILO_USER_SHARED_DATA
{
    ULONG ServiceSessionId;                                                 //0x0
    ULONG ActiveConsoleId;                                                  //0x4
    LONGLONG ConsoleSessionForegroundProcessId;                             //0x8
    enum _NT_PRODUCT_TYPE NtProductType;                                    //0x10
    ULONG SuiteMask;                                                        //0x14
    UCHAR IsMultiSessionSku;                                                //0x18
};
/* Used in */
// _ESERVERSILO_GLOBALS
