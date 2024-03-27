#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>

//0x18 bytes (sizeof)
struct _CURDIR
{
    struct _UNICODE_STRING DosPath;                                         //0x0
    VOID* Handle;                                                           //0x10
};
/* Used in */
// _RTL_USER_PROCESS_PARAMETERS

