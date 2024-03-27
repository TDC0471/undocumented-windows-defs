#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_UNICODE_STRING.h>

//0x20 bytes (sizeof)
struct _OBJECT_SYMBOLIC_LINK
{
    union _LARGE_INTEGER CreationTime;                                      //0x0
    struct _UNICODE_STRING LinkTarget;                                      //0x8
    ULONG DosDeviceDriveIndex;                                              //0x18
};
