#pragma once
/* ------------------ */

#include <_HEAP_FAILURE_TYPE.h>
#include <_FAKE_HEAP_ENTRY.h>
#include <_EXCEPTION_RECORD.h>
#include <_CONTEXT.h>

//0x3d0 bytes (sizeof)
struct _HEAP_FAILURE_INFORMATION
{
    ULONG Version;                                                          //0x0
    ULONG StructureSize;                                                    //0x4
    enum _HEAP_FAILURE_TYPE FailureType;                                    //0x8
    VOID* HeapAddress;                                                      //0xc
    VOID* Address;                                                          //0x10
    VOID* Param1;                                                           //0x14
    VOID* Param2;                                                           //0x18
    VOID* Param3;                                                           //0x1c
    VOID* PreviousBlock;                                                    //0x20
    VOID* NextBlock;                                                        //0x24
    struct _FAKE_HEAP_ENTRY ExpectedDecodedEntry;                           //0x28
    VOID* StackTrace[32];                                                   //0x30
    UCHAR HeapMajorVersion;                                                 //0xb0
    UCHAR HeapMinorVersion;                                                 //0xb1
    struct _EXCEPTION_RECORD ExceptionRecord;                               //0xb4
    struct _CONTEXT ContextRecord;                                          //0x104
};
/* Used in */
// _RTLP_HP_HEAP_GLOBALS

