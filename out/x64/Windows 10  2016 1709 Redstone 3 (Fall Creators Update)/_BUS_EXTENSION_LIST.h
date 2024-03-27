#pragma once
/* ------------------ */

#include <_PI_BUS_EXTENSION.h>

//0x10 bytes (sizeof)
struct _BUS_EXTENSION_LIST
{
    VOID* Next;                                                             //0x0
    struct _PI_BUS_EXTENSION* BusExtension;                                 //0x8
};
