#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_EVENT_FILTER_DESCRIPTOR.h>

//0x30 bytes (sizeof)
struct _TlgProvider_t
{
    ULONG LevelPlus1;                                                       //0x0
    USHORT* ProviderMetadataPtr;                                            //0x4
    ULONGLONG KeywordAny;                                                   //0x8
    ULONGLONG KeywordAll;                                                   //0x10
    ULONGLONG RegHandle;                                                    //0x18
    VOID (*EnableCallback)(struct _GUID* arg1, ULONG arg2, UCHAR arg3, ULONGLONG arg4, ULONGLONG arg5, struct _EVENT_FILTER_DESCRIPTOR* arg6, VOID* arg7); //0x20
    VOID* CallbackContext;                                                  //0x24
    VOID (*AnnotationFunc)( arg1);                                          //0x28
};
/* Used in */
// _MI_SYSTEM_INFORMATION

