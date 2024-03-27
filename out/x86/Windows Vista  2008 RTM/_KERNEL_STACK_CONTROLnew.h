#pragma once
/* ------------------ */

#include <_KTRAP_FRAME.h>
#include <_KERNEL_STACK_SEGMENT.h>

//0x1c bytes (sizeof)
struct _KERNEL_STACK_CONTROL
{
    union
    {
        struct _KTRAP_FRAME* PreviousTrapFrame;                             //0x0
        VOID* PreviousExceptionList;                                        //0x0
    };
    union
    {
        ULONG StackControlFlags;                                            //0x4
        struct
        {
            ULONG PreviousLargeStack:1;                                     //0x4
            ULONG PreviousSegmentsPresent:1;                                //0x4
            ULONG ExpandCalloutStack:1;                                     //0x4
        };
    };
    struct _KERNEL_STACK_SEGMENT Previous;                                  //0x8
};
