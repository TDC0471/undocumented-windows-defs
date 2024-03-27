#pragma once
/* ------------------ */

#include <_SEP_CACHED_HANDLES_ENTRY_TYPE.h>
#include <_UNICODE_STRING.h>

//0x18 bytes (sizeof)
struct _SEP_CACHED_HANDLES_ENTRY_DESCRIPTOR
{
    enum _SEP_CACHED_HANDLES_ENTRY_TYPE DescriptorType;                     //0x0
    union
    {
        VOID* PackageSid;                                                   //0x8
        struct _UNICODE_STRING IsolationPrefix;                             //0x8
    };
};
/* Used in */
// _SEP_CACHED_HANDLES_ENTRY

