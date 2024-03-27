#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>

//0x8 bytes (sizeof)
struct _OBJECT_NAME_INFORMATION
{
    struct _UNICODE_STRING Name;                                            //0x0
};
/* Used in */
// _OBJECT_TYPE_INITIALIZER
// _SE_AUDIT_PROCESS_CREATION_INFO

