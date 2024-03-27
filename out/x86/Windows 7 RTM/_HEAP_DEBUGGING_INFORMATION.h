#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _HEAP_DEBUGGING_INFORMATION
{
    VOID* InterceptorFunction;                                              //0x0
    USHORT InterceptorValue;                                                //0x4
    ULONG ExtendedOptions;                                                  //0x8
    ULONG StackTraceDepth;                                                  //0xc
    ULONG MinTotalBlockSize;                                                //0x10
    ULONG MaxTotalBlockSize;                                                //0x14
    LONG (*HeapLeakEnumerationRoutine)(LONG arg1, VOID* arg2, VOID* arg3, ULONG arg4, ULONG arg5, VOID* arg6); //0x18
};
