#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IMAGE_RUNTIME_FUNCTION_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_FUNCTION_TABLE_TYPE.h>

//0x58 bytes (sizeof)
struct _DYNAMIC_FUNCTION_TABLE
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY* FunctionTable;                    //0x10
    union _LARGE_INTEGER TimeStamp;                                         //0x18
    ULONGLONG MinimumAddress;                                               //0x20
    ULONGLONG MaximumAddress;                                               //0x28
    ULONGLONG BaseAddress;                                                  //0x30
    struct _IMAGE_RUNTIME_FUNCTION_ENTRY* (*Callback)(ULONGLONG arg1, VOID* arg2); //0x38
    VOID* Context;                                                          //0x40
    USHORT* OutOfProcessCallbackDll;                                        //0x48
    enum _FUNCTION_TABLE_TYPE Type;                                         //0x50
    ULONG EntryCount;                                                       //0x54
};
/* Used in */
// _INVERTED_FUNCTION_TABLE_ENTRY

