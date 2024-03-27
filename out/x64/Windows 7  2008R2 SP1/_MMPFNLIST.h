#pragma once
/* ------------------ */

#include <_MMLISTS.h>

//0x28 bytes (sizeof)
struct _MMPFNLIST
{
    volatile ULONGLONG Total;                                               //0x0
    enum _MMLISTS ListName;                                                 //0x8
    ULONGLONG Flink;                                                        //0x10
    ULONGLONG Blink;                                                        //0x18
    ULONGLONG Lock;                                                         //0x20
};
