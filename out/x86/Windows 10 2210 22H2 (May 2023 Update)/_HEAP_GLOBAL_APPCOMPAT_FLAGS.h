#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _HEAP_GLOBAL_APPCOMPAT_FLAGS
{
    ULONG SafeInputValidation:1;                                            //0x0
    ULONG Padding:1;                                                        //0x0
    ULONG CommitLFHSubsegments:1;                                           //0x0
    ULONG AllocateHeapFromEnv:1;                                            //0x0
};
