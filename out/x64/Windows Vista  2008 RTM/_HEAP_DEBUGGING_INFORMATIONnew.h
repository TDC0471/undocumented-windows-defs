#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _HEAP_DEBUGGING_INFORMATION
{
    VOID* InterceptorFunction;                                              //0x0
    USHORT InterceptorValue;                                                //0x8
    ULONG ExtendedOptions;                                                  //0xc
    ULONG StackTraceDepth;                                                  //0x10
    ULONGLONG MinTotalBlockSize;                                            //0x18
    ULONGLONG MaxTotalBlockSize;                                            //0x20
    LONG (*HeapLeakEnumerationRoutine)(LONG arg1, VOID* arg2, VOID* arg3, ULONGLONG arg4, ULONG arg5, VOID* arg6); //0x28
};
