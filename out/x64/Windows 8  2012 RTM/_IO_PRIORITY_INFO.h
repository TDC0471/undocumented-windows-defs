#pragma once
/* ------------------ */

#include <_IO_PRIORITY_HINT.h>

//0x10 bytes (sizeof)
struct _IO_PRIORITY_INFO
{
    ULONG Size;                                                             //0x0
    ULONG ThreadPriority;                                                   //0x4
    ULONG PagePriority;                                                     //0x8
    enum _IO_PRIORITY_HINT IoPriority;                                      //0xc
};
