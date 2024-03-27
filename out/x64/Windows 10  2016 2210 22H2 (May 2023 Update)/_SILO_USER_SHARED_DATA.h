#pragma once
/* ------------------ */

#include <_NT_PRODUCT_TYPE.h>
#include <_KSYSTEM_TIME.h>
#include <_LARGE_INTEGER.h>

//0x270 bytes (sizeof)
struct _SILO_USER_SHARED_DATA
{
    ULONG ServiceSessionId;                                                 //0x0
    ULONG ActiveConsoleId;                                                  //0x4
    LONGLONG ConsoleSessionForegroundProcessId;                             //0x8
    enum _NT_PRODUCT_TYPE NtProductType;                                    //0x10
    ULONG SuiteMask;                                                        //0x14
    ULONG SharedUserSessionId;                                              //0x18
    UCHAR IsMultiSessionSku;                                                //0x1c
    WCHAR NtSystemRoot[260];                                                //0x1e
    USHORT UserModeGlobalLogger[16];                                        //0x226
    ULONG TimeZoneId;                                                       //0x248
    volatile LONG TimeZoneBiasStamp;                                        //0x24c
    struct _KSYSTEM_TIME TimeZoneBias;                                      //0x250
    union _LARGE_INTEGER TimeZoneBiasEffectiveStart;                        //0x260
    union _LARGE_INTEGER TimeZoneBiasEffectiveEnd;                          //0x268
};
/* Used in */
// _ESERVERSILO_GLOBALS

