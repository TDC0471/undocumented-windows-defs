#pragma once
/* ------------------ */

#include <_XMM_SAVE_AREA32.h>
#include <_KERNEL_STACK_SEGMENT.h>

//0x250 bytes (sizeof)
struct _KERNEL_STACK_CONTROL
{
    struct _XMM_SAVE_AREA32 XmmSaveArea;                                    //0x0
    struct _KERNEL_STACK_SEGMENT Current;                                   //0x200
    struct _KERNEL_STACK_SEGMENT Previous;                                  //0x228
};
