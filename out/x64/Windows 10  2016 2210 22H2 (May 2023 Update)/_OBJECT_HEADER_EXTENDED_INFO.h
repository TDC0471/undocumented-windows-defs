#pragma once
/* ------------------ */

#include <_OBJECT_FOOTER.h>

//0x10 bytes (sizeof)
struct _OBJECT_HEADER_EXTENDED_INFO
{
    struct _OBJECT_FOOTER* Footer;                                          //0x0
    ULONGLONG Reserved;                                                     //0x8
};
