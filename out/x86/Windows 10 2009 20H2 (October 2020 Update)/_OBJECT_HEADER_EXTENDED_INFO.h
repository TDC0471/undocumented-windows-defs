#pragma once
/* ------------------ */

#include <_OBJECT_FOOTER.h>

//0x8 bytes (sizeof)
struct _OBJECT_HEADER_EXTENDED_INFO
{
    struct _OBJECT_FOOTER* Footer;                                          //0x0
    ULONG Reserved;                                                         //0x4
};
