#pragma once
/* ------------------ */

#include <_DESCRIPTION_HEADER.h>

//0x30 bytes (sizeof)
struct _MAPIC
{
    struct _DESCRIPTION_HEADER Header;                                      //0x0
    ULONG LocalAPICAddress;                                                 //0x24
    ULONG Flags;                                                            //0x28
    ULONG APICTables[1];                                                    //0x2c
};
