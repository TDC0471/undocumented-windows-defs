#pragma once
/* ------------------ */

#include <_GUID.h>

//0x14 bytes (sizeof)
struct _DEVPROPKEY
{
    struct _GUID fmtid;                                                     //0x0
    ULONG pid;                                                              //0x10
};
