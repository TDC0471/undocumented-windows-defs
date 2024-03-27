#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>

//0x18 bytes (sizeof)
struct _VF_SUSPECT_DRIVER_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    ULONG Loads;                                                            //0x8
    ULONG Unloads;                                                          //0xc
    struct _UNICODE_STRING BaseName;                                        //0x10
};
/* Used in */
// _VF_TARGET_VERIFIED_DRIVER_DATA

