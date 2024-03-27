#pragma once
/* ------------------ */

#include <_OBJECT_DIRECTORY.h>
#include <_UNICODE_STRING.h>

//0x20 bytes (sizeof)
struct _OBJECT_HEADER_NAME_INFO
{
    struct _OBJECT_DIRECTORY* Directory;                                    //0x0
    struct _UNICODE_STRING Name;                                            //0x8
    LONG ReferenceCount;                                                    //0x18
    ULONG Reserved;                                                         //0x1c
};
