#pragma once
/* ------------------ */

#include <_HEAP_FAILURE_TYPE.h>
#include <_FAKE_HEAP_ENTRY.h>
#include <_EXCEPTION_RECORD.h>
#include <_CONTEXT.h>

//0x6d0 bytes (sizeof)
struct _HEAP_FAILURE_INFORMATION
{
    ULONG Version;                                                          //0x0
    ULONG StructureSize;                                                    //0x4
    enum _HEAP_FAILURE_TYPE FailureType;                                    //0x8
    VOID* HeapAddress;                                                      //0x10
    VOID* Address;                                                          //0x18
    VOID* Param1;                                                           //0x20
    VOID* Param2;                                                           //0x28
    VOID* Param3;                                                           //0x30
    VOID* PreviousBlock;                                                    //0x38
    VOID* NextBlock;                                                        //0x40
    struct _FAKE_HEAP_ENTRY ExpectedDecodedEntry;                           //0x48
    VOID* StackTrace[32];                                                   //0x58
    UCHAR HeapMajorVersion;                                                 //0x158
    UCHAR HeapMinorVersion;                                                 //0x159
    struct _EXCEPTION_RECORD ExceptionRecord;                               //0x160
    struct _CONTEXT ContextRecord;                                          //0x200
};
/* Used in */
// _RTLP_HP_HEAP_GLOBALS

