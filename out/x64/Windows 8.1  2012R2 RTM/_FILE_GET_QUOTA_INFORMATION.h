#pragma once
/* ------------------ */

#include <_SID.h>

//0x14 bytes (sizeof)
struct _FILE_GET_QUOTA_INFORMATION
{
    ULONG NextEntryOffset;                                                  //0x0
    ULONG SidLength;                                                        //0x4
    struct _SID Sid;                                                        //0x8
};
/* Used in */
// _IO_STACK_LOCATION

