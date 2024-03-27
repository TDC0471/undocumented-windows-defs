#pragma once
/* ------------------ */

#include <_DESCRIPTION_HEADER.h>
#include <_LARGE_INTEGER.h>

//0x2c bytes (sizeof)
struct _XSDT
{
    struct _DESCRIPTION_HEADER Header;                                      //0x0
    union _LARGE_INTEGER Tables[1];                                         //0x24
};
