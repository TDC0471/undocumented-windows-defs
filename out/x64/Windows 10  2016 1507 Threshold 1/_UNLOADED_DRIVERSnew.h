#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_LARGE_INTEGER.h>

//0x28 bytes (sizeof)
struct _UNLOADED_DRIVERS
{
    struct _UNICODE_STRING Name;                                            //0x0
    VOID* StartAddress;                                                     //0x10
    VOID* EndAddress;                                                       //0x18
    union _LARGE_INTEGER CurrentTime;                                       //0x20
};
/* Used in */
// _MI_VISIBLE_STATE

