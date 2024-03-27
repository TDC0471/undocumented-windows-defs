#pragma once
/* ------------------ */

#include <_RTL_BITMAP_EX.h>
#include <_MMSUPPORT.h>

//0x50 bytes (sizeof)
struct _MI_DYNAMIC_BITMAP
{
    struct _RTL_BITMAP_EX Bitmap;                                           //0x0
    ULONGLONG MaximumSize;                                                  //0x10
    ULONGLONG Hint;                                                         //0x18
    VOID* BaseVa;                                                           //0x20
    ULONGLONG SizeTopDown;                                                  //0x28
    ULONGLONG HintTopDown;                                                  //0x30
    VOID* BaseVaTopDown;                                                    //0x38
    ULONGLONG SpinLock;                                                     //0x40
    struct _MMSUPPORT* Vm;                                                  //0x48
};
/* Used in */
// _MI_SYSTEM_NODE_INFORMATION
// _MI_SYSTEM_VA_STATE

