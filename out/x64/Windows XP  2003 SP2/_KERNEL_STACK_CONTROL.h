#pragma once
/* ------------------ */

#include <_XMM_SAVE_AREA32.h>
#include <_KERNEL_STACK_SEGMENT.h>

//0x200 bytes (sizeof)
struct _KERNEL_STACK_CONTROL
{
    union
    {
        struct _XMM_SAVE_AREA32 XmmSaveArea;                                //0x0
        struct
        {
            UCHAR Fill[432];                                                //0x0
            struct _KERNEL_STACK_SEGMENT Current;                           //0x1b0
            struct _KERNEL_STACK_SEGMENT Previous;                          //0x1d8
        };
    };
};
