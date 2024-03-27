#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _ARC_DISK_INFORMATION
{
    struct _LIST_ENTRY DiskSignatures;                                      //0x0
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

