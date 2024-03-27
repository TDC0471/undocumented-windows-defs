#pragma once
/* ------------------ */

#include <_OBJECT_HANDLE_COUNT_DATABASE.h>
#include <_OBJECT_HANDLE_COUNT_ENTRY.h>

//0x8 bytes (sizeof)
struct _OBJECT_HEADER_HANDLE_INFO
{
    union
    {
        struct _OBJECT_HANDLE_COUNT_DATABASE* HandleCountDataBase;          //0x0
        struct _OBJECT_HANDLE_COUNT_ENTRY SingleEntry;                      //0x0
    };
};
