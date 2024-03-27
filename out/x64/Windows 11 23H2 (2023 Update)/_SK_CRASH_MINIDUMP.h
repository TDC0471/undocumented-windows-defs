#pragma once
/* ------------------ */

#include <_SK_CRASH_MODULE.h>
#include <_SK_CRASH_STACK_FRAME.h>

//0x1000 bytes (sizeof)
struct _SK_CRASH_MINIDUMP
{
    ULONG Size;                                                             //0x0
    ULONG Version;                                                          //0x4
    ULONG ModuleCount;                                                      //0x8
    ULONG FrameCount;                                                       //0xc
    struct _SK_CRASH_MODULE Modules[16];                                    //0x10
    struct _SK_CRASH_STACK_FRAME StackFrames[366];                          //0x490
};
