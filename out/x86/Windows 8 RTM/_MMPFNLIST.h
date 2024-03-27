#pragma once
/* ------------------ */

#include <_MMLISTS.h>

//0x14 bytes (sizeof)
struct _MMPFNLIST
{
    ULONG Total;                                                            //0x0
    enum _MMLISTS ListName;                                                 //0x4
    ULONG Flink;                                                            //0x8
    ULONG Blink;                                                            //0xc
    ULONG Lock;                                                             //0x10
};
