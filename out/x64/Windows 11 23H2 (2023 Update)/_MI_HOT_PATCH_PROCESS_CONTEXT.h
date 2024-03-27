#pragma once
/* ------------------ */

#include <_EPROCESS.h>

//0x18 bytes (sizeof)
struct _MI_HOT_PATCH_PROCESS_CONTEXT
{
    struct _EPROCESS* Process;                                              //0x0
    VOID* ProcessHandle;                                                    //0x8
    ULONG TbFlushStamp;                                                     //0x10
};
/* Used in */
// _MI_HOT_PATCH_STATE

